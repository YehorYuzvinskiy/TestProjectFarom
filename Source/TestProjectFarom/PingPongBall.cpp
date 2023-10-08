// Fill out your copyright notice in the Description page of Project Settings.


#include "PingPongBall.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Math/UnitConversion.h"
#include "Net/UnrealNetwork.h"

// Sets default values
APingPongBall::APingPongBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.bCanEverTick = true;

	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
	RootComponent = BallMesh;

	BallMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("BallMovementComponent"));
	BallMovementComponent->UpdatedComponent = BallMesh;
	BallMovementComponent->InitialSpeed = 1000.0f;
	BallMovementComponent->MaxSpeed = 1000.0f;

	BallMesh->OnComponentHit.AddDynamic(this, &APingPongBall::OnHit);

	SetReplicates(true);
	SetReplicateMovement(true);
}




void APingPongBall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	if (HasAuthority())
	{
		// Server-side collision handling
		LastHitLocation = Hit.ImpactPoint;
		LastHitNormal = Hit.ImpactNormal;

		ServerHandleCollision(LastHitLocation, LastHitNormal);
	}
}

void APingPongBall::ServerHandleCollision_Implementation(FVector HitLocation, FVector HitNormal)
{
	// Calculate the reflection vector manually
	FVector BallVelocity = BallMovementComponent->Velocity;
	FVector Reflection = BallVelocity - 2 * FVector::DotProduct(BallVelocity, HitNormal) * HitNormal;

	// Apply the reflection to the ball
	BallMovementComponent->Velocity = Reflection;
}

bool APingPongBall::ServerHandleCollision_Validate(FVector HitLocation, FVector HitNormal)
{
	return true;
}

void APingPongBall::MulticastApplyForce_Implementation(FVector Force)
{
	// Apply force to the ball on all clients
	BallMovementComponent->Velocity = Force;
}

void APingPongBall::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(APingPongBall, BallMesh, COND_SimulatedOnly);
	DOREPLIFETIME_CONDITION(APingPongBall, BallMovementComponent, COND_SimulatedOnly);
	DOREPLIFETIME(APingPongBall, LastHitLocation);
	DOREPLIFETIME(APingPongBall, LastHitNormal);
}

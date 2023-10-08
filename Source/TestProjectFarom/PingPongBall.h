// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PingPongBall.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS()
class TESTPROJECTFAROM_API APingPongBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APingPongBall();


	// Function to apply force to the ball on hit
	UFUNCTION(NetMulticast, Reliable)
	void MulticastApplyForce(FVector Force);

	// Function to handle collision on the server
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerHandleCollision(FVector HitLocation, FVector HitNormal);
	

	UFUNCTION()
	UStaticMeshComponent* GetBallMeshComponent() const {return BallMesh;}
	
protected:
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;

private:
	UPROPERTY(VisibleAnywhere, Replicated)
	UStaticMeshComponent* BallMesh;

	UPROPERTY(VisibleAnywhere, Replicated)
	UProjectileMovementComponent* BallMovementComponent;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(Replicated)
	FVector LastHitLocation;
	
	UPROPERTY(Replicated)
	FVector LastHitNormal;
};

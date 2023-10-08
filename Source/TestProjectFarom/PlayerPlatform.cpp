// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPlatform.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PingPongBall.h"
#include "Net/UnrealNetwork.h" 

// Sets default values
APlayerPlatform::APlayerPlatform(const FObjectInitializer& ObjInit) : Super(ObjInit)
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;
	
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);
	
	// Create a static mesh component for the platform
	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	PlatformMesh->SetupAttachment(SceneRoot);
	

	// Set up collision settings for the platform
	PlatformMesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	PlatformMesh->SetGenerateOverlapEvents(false);

	// Bind the collision function to the NotifyHit event
	PlatformMesh->OnComponentHit.AddDynamic(this, &APlayerPlatform::OnHit);

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(PlatformMesh); // Attach the spring arm to the root component or any other component you prefer
	SpringArmComponent->TargetArmLength = 1000.0f; // Adjust the arm's length
	SpringArmComponent->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f)); // Rotated to look down from the top

	// Create the top-down camera component
	TopDownCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCamera->SetupAttachment(SpringArmComponent,USpringArmComponent::SocketName); // Attach the camera to the spring arm


	LeftAxisValue = 0.0f;
	RightAxisValue = 0.0f;
	
	// Replication settings for multiplayer
	SetReplicates(true);
	SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void APlayerPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerPlatform::MoveLeft(float Value)
{
	// Store the input axis value
	LeftAxisValue = Value;
	

	// Call the server function to replicate the input value
	if (!HasAuthority())
	{
		ServerMoveLeft(LeftAxisValue);
	}
	else if(HasAuthority())
	{
		MulticastMoveCharacter( GetActorRightVector() * -1.f, Value);
	}
	
}

void APlayerPlatform::MoveRight(float Value)
{
	// Store the input axis value
	RightAxisValue = Value;
	
	// Call the server function to replicate the input value
	if (!HasAuthority())
	{
		ServerMoveRight(RightAxisValue);
	}
	else if(HasAuthority())
	{
		MulticastMoveCharacter( GetActorRightVector(), Value);
	}
}

bool APlayerPlatform::ServerMoveLeft_Validate(float Value)
{
	return true;
}

void APlayerPlatform::ServerMoveLeft_Implementation(float Value)
{
	// Handle left movement on the server
	FVector Direction = GetActorRightVector() * -1.f;
	AddMovementInput(Direction, Value);
	// Replicate the movement to all clients using the multicast function
	MulticastMoveCharacter(Direction, Value);
}

bool APlayerPlatform::ServerMoveRight_Validate(float Value)
{
	return true;
}

void APlayerPlatform::ServerMoveRight_Implementation(float Value)
{
	// Handle right movement on the server
	FVector Direction = GetActorRightVector();
	AddMovementInput(Direction, Value);
	// Replicate the movement to all clients using the multicast function
	MulticastMoveCharacter(Direction, Value);
}

void APlayerPlatform::MulticastMoveCharacter_Implementation(FVector Direction, float Value)
{
	FVector NewLocation = GetActorLocation() + Direction * Value * PlatformSpeed;
	SetActorLocation(NewLocation);
}


// Called to bind functionality to input
void APlayerPlatform::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	InputComponent->BindAxis("MoveLeft",  this, &APlayerPlatform::MoveLeft);
	InputComponent->BindAxis("MoveRight",this, &APlayerPlatform::MoveRight);
}

void APlayerPlatform::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
		// Check if the collision involves the ball
		APingPongBall* Ball = Cast<APingPongBall>(OtherActor);
		if (Ball && Ball->GetBallMeshComponent() && Ball->GetBallMeshComponent()->IsSimulatingPhysics())
		{
		
			// Calculate the reflection vector manually
			FVector BallVelocity = Ball->GetBallMeshComponent()->GetComponentVelocity();
			FVector Reflection = BallVelocity - 2 * FVector::DotProduct(BallVelocity, Hit.ImpactNormal) * Hit.ImpactNormal;

			// Apply the reflection to the ball

			FVector ImpulseDirection = -Hit.ImpactNormal; // Adjust the direction as needed
			ImpulseDirection.Normalize();
		
			Ball->GetBallMeshComponent()->AddImpulse(ImpulseDirection * ImpulseForce, NAME_None, true);
		}
}
void APlayerPlatform::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

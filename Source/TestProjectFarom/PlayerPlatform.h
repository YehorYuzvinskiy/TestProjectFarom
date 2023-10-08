// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PlayerPlatform.generated.h"

class UStaticMeshComponent;
class USceneComponent;

UCLASS()
class TESTPROJECTFAROM_API APlayerPlatform : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPlatform(const FObjectInitializer& ObjInit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;

public:

	USceneComponent* SceneRoot;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Replicated)
	UStaticMeshComponent* PlatformMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCameraComponent* TopDownCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USpringArmComponent* SpringArmComponent;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		FVector NormalImpulse, const FHitResult& Hit);
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Input axis for left and right movement

	void MoveLeft(float Value);

	void MoveRight(float Value);
	
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerMoveLeft(float Value);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerMoveRight(float Value);
	
	// Multicast function to replicate movement to all clients
	UFUNCTION(NetMulticast, Reliable)
	void MulticastMoveCharacter(FVector Direction, float Value);

	// Replicated variables for storing input axis values
	UPROPERTY(Replicated)
	float LeftAxisValue;

	UPROPERTY(Replicated)
	float RightAxisValue;

	// Speed multiplier for character movement
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float PlatformSpeed = 500.0f; // You can adjust the initial value as needed

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float ImpulseForce = 500.0f; // You can adjust the initial value as needed

};

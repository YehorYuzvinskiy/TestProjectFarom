// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class UStaticMeshComponent;
#ifdef TESTPROJECTFAROM_PingPongBall_generated_h
#error "PingPongBall.generated.h already included, missing '#pragma once' in PingPongBall.h"
#endif
#define TESTPROJECTFAROM_PingPongBall_generated_h

#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_SPARSE_DATA
#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_RPC_WRAPPERS \
	virtual bool ServerHandleCollision_Validate(FVector , FVector ); \
	virtual void ServerHandleCollision_Implementation(FVector HitLocation, FVector HitNormal); \
	virtual void MulticastApplyForce_Implementation(FVector Force); \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execGetBallMeshComponent); \
	DECLARE_FUNCTION(execServerHandleCollision); \
	DECLARE_FUNCTION(execMulticastApplyForce);


#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerHandleCollision_Validate(FVector , FVector ); \
	virtual void ServerHandleCollision_Implementation(FVector HitLocation, FVector HitNormal); \
	virtual void MulticastApplyForce_Implementation(FVector Force); \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execGetBallMeshComponent); \
	DECLARE_FUNCTION(execServerHandleCollision); \
	DECLARE_FUNCTION(execMulticastApplyForce);


#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_EVENT_PARMS \
	struct PingPongBall_eventMulticastApplyForce_Parms \
	{ \
		FVector Force; \
	}; \
	struct PingPongBall_eventServerHandleCollision_Parms \
	{ \
		FVector HitLocation; \
		FVector HitNormal; \
	};


#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_CALLBACK_WRAPPERS
#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPingPongBall(); \
	friend struct Z_Construct_UClass_APingPongBall_Statics; \
public: \
	DECLARE_CLASS(APingPongBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProjectFarom"), NO_API) \
	DECLARE_SERIALIZER(APingPongBall) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BallMesh=NETFIELD_REP_START, \
		BallMovementComponent, \
		LastHitLocation, \
		LastHitNormal, \
		NETFIELD_REP_END=LastHitNormal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPingPongBall(); \
	friend struct Z_Construct_UClass_APingPongBall_Statics; \
public: \
	DECLARE_CLASS(APingPongBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProjectFarom"), NO_API) \
	DECLARE_SERIALIZER(APingPongBall) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BallMesh=NETFIELD_REP_START, \
		BallMovementComponent, \
		LastHitLocation, \
		LastHitNormal, \
		NETFIELD_REP_END=LastHitNormal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APingPongBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APingPongBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APingPongBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APingPongBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APingPongBall(APingPongBall&&); \
	NO_API APingPongBall(const APingPongBall&); \
public:


#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APingPongBall(APingPongBall&&); \
	NO_API APingPongBall(const APingPongBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APingPongBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APingPongBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APingPongBall)


#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_12_PROLOG \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_EVENT_PARMS


#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_SPARSE_DATA \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_RPC_WRAPPERS \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_CALLBACK_WRAPPERS \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_INCLASS \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_SPARSE_DATA \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_CALLBACK_WRAPPERS \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_INCLASS_NO_PURE_DECLS \
	FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECTFAROM_API UClass* StaticClass<class APingPongBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

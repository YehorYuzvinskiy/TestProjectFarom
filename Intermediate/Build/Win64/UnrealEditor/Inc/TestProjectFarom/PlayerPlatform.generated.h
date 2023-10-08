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
#ifdef TESTPROJECTFAROM_PlayerPlatform_generated_h
#error "PlayerPlatform.generated.h already included, missing '#pragma once' in PlayerPlatform.h"
#endif
#define TESTPROJECTFAROM_PlayerPlatform_generated_h

#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_SPARSE_DATA
#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_RPC_WRAPPERS \
	virtual void MulticastMoveCharacter_Implementation(FVector Direction, float Value); \
	virtual bool ServerMoveRight_Validate(float ); \
	virtual void ServerMoveRight_Implementation(float Value); \
	virtual bool ServerMoveLeft_Validate(float ); \
	virtual void ServerMoveLeft_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execMulticastMoveCharacter); \
	DECLARE_FUNCTION(execServerMoveRight); \
	DECLARE_FUNCTION(execServerMoveLeft); \
	DECLARE_FUNCTION(execOnHit);


#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastMoveCharacter_Implementation(FVector Direction, float Value); \
	virtual bool ServerMoveRight_Validate(float ); \
	virtual void ServerMoveRight_Implementation(float Value); \
	virtual bool ServerMoveLeft_Validate(float ); \
	virtual void ServerMoveLeft_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execMulticastMoveCharacter); \
	DECLARE_FUNCTION(execServerMoveRight); \
	DECLARE_FUNCTION(execServerMoveLeft); \
	DECLARE_FUNCTION(execOnHit);


#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_EVENT_PARMS \
	struct PlayerPlatform_eventMulticastMoveCharacter_Parms \
	{ \
		FVector Direction; \
		float Value; \
	}; \
	struct PlayerPlatform_eventServerMoveLeft_Parms \
	{ \
		float Value; \
	}; \
	struct PlayerPlatform_eventServerMoveRight_Parms \
	{ \
		float Value; \
	};


#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_CALLBACK_WRAPPERS
#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPlatform(); \
	friend struct Z_Construct_UClass_APlayerPlatform_Statics; \
public: \
	DECLARE_CLASS(APlayerPlatform, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProjectFarom"), NO_API) \
	DECLARE_SERIALIZER(APlayerPlatform) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlatformMesh=NETFIELD_REP_START, \
		LeftAxisValue, \
		RightAxisValue, \
		NETFIELD_REP_END=RightAxisValue	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPlatform(); \
	friend struct Z_Construct_UClass_APlayerPlatform_Statics; \
public: \
	DECLARE_CLASS(APlayerPlatform, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProjectFarom"), NO_API) \
	DECLARE_SERIALIZER(APlayerPlatform) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlatformMesh=NETFIELD_REP_START, \
		LeftAxisValue, \
		RightAxisValue, \
		NETFIELD_REP_END=RightAxisValue	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPlatform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPlatform(APlayerPlatform&&); \
	NO_API APlayerPlatform(const APlayerPlatform&); \
public:


#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPlatform(APlayerPlatform&&); \
	NO_API APlayerPlatform(const APlayerPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPlatform); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPlatform)


#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_14_PROLOG \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_EVENT_PARMS


#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_SPARSE_DATA \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_RPC_WRAPPERS \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_CALLBACK_WRAPPERS \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_INCLASS \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_SPARSE_DATA \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_CALLBACK_WRAPPERS \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_INCLASS_NO_PURE_DECLS \
	FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECTFAROM_API UClass* StaticClass<class APlayerPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

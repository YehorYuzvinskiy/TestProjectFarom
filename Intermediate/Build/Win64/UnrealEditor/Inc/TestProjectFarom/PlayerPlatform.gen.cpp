// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProjectFarom/PlayerPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPlatform() {}
// Cross Module References
	TESTPROJECTFAROM_API UClass* Z_Construct_UClass_APlayerPlatform_NoRegister();
	TESTPROJECTFAROM_API UClass* Z_Construct_UClass_APlayerPlatform();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TestProjectFarom();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerPlatform::execMulticastMoveCharacter)
	{
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastMoveCharacter_Implementation(Z_Param_Direction,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerPlatform::execServerMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMoveRight_Validate(Z_Param_Value))
		{
			RPC_ValidateFailed(TEXT("ServerMoveRight_Validate"));
			return;
		}
		P_THIS->ServerMoveRight_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerPlatform::execServerMoveLeft)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMoveLeft_Validate(Z_Param_Value))
		{
			RPC_ValidateFailed(TEXT("ServerMoveLeft_Validate"));
			return;
		}
		P_THIS->ServerMoveLeft_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerPlatform::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	static FName NAME_APlayerPlatform_MulticastMoveCharacter = FName(TEXT("MulticastMoveCharacter"));
	void APlayerPlatform::MulticastMoveCharacter(FVector Direction, float Value)
	{
		PlayerPlatform_eventMulticastMoveCharacter_Parms Parms;
		Parms.Direction=Direction;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_APlayerPlatform_MulticastMoveCharacter),&Parms);
	}
	static FName NAME_APlayerPlatform_ServerMoveLeft = FName(TEXT("ServerMoveLeft"));
	void APlayerPlatform::ServerMoveLeft(float Value)
	{
		PlayerPlatform_eventServerMoveLeft_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_APlayerPlatform_ServerMoveLeft),&Parms);
	}
	static FName NAME_APlayerPlatform_ServerMoveRight = FName(TEXT("ServerMoveRight"));
	void APlayerPlatform::ServerMoveRight(float Value)
	{
		PlayerPlatform_eventServerMoveRight_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_APlayerPlatform_ServerMoveRight),&Parms);
	}
	void APlayerPlatform::StaticRegisterNativesAPlayerPlatform()
	{
		UClass* Class = APlayerPlatform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastMoveCharacter", &APlayerPlatform::execMulticastMoveCharacter },
			{ "OnHit", &APlayerPlatform::execOnHit },
			{ "ServerMoveLeft", &APlayerPlatform::execServerMoveLeft },
			{ "ServerMoveRight", &APlayerPlatform::execServerMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPlatform_eventMulticastMoveCharacter_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPlatform_eventMulticastMoveCharacter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Multicast function to replicate movement to all clients\n" },
		{ "ModuleRelativePath", "PlayerPlatform.h" },
		{ "ToolTip", "Multicast function to replicate movement to all clients" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPlatform, nullptr, "MulticastMoveCharacter", nullptr, nullptr, sizeof(PlayerPlatform_eventMulticastMoveCharacter_Parms), Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPlatform_OnHit_Statics
	{
		struct PlayerPlatform_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPlatform_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPlatform_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPlatform_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPlatform_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPlatform_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPlatform, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::PlayerPlatform_eventOnHit_Parms), Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPlatform_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPlatform_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPlatform_eventServerMoveLeft_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPlatform, nullptr, "ServerMoveLeft", nullptr, nullptr, sizeof(PlayerPlatform_eventServerMoveLeft_Parms), Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPlatform_eventServerMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPlatform, nullptr, "ServerMoveRight", nullptr, nullptr, sizeof(PlayerPlatform_eventServerMoveRight_Parms), Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPlatform_ServerMoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPlatform_ServerMoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerPlatform);
	UClass* Z_Construct_UClass_APlayerPlatform_NoRegister()
	{
		return APlayerPlatform::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftAxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftAxisValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightAxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightAxisValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlatformSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProjectFarom,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerPlatform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPlatform_MulticastMoveCharacter, "MulticastMoveCharacter" }, // 1261003555
		{ &Z_Construct_UFunction_APlayerPlatform_OnHit, "OnHit" }, // 2749184815
		{ &Z_Construct_UFunction_APlayerPlatform_ServerMoveLeft, "ServerMoveLeft" }, // 3505225886
		{ &Z_Construct_UFunction_APlayerPlatform_ServerMoveRight, "ServerMoveRight" }, // 2518447453
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPlatform_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPlatform.h" },
		{ "ModuleRelativePath", "PlayerPlatform.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPlatform_Statics::NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "PlayerPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPlatform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPlatform_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x00100000000a002d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPlatform, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_PlatformMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_PlatformMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPlatform_Statics::NewProp_TopDownCamera_MetaData[] = {
		{ "Category", "PlayerPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPlatform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPlatform_Statics::NewProp_TopDownCamera = { "TopDownCamera", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPlatform, TopDownCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_TopDownCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_TopDownCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPlatform_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "PlayerPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPlatform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPlatform_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPlatform, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPlatform_Statics::NewProp_LeftAxisValue_MetaData[] = {
		{ "Comment", "// Replicated variables for storing input axis values\n" },
		{ "ModuleRelativePath", "PlayerPlatform.h" },
		{ "ToolTip", "Replicated variables for storing input axis values" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerPlatform_Statics::NewProp_LeftAxisValue = { "LeftAxisValue", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPlatform, LeftAxisValue), METADATA_PARAMS(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_LeftAxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_LeftAxisValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPlatform_Statics::NewProp_RightAxisValue_MetaData[] = {
		{ "ModuleRelativePath", "PlayerPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerPlatform_Statics::NewProp_RightAxisValue = { "RightAxisValue", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPlatform, RightAxisValue), METADATA_PARAMS(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_RightAxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_RightAxisValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPlatform_Statics::NewProp_PlatformSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Speed multiplier for character movement\n" },
		{ "ModuleRelativePath", "PlayerPlatform.h" },
		{ "ToolTip", "Speed multiplier for character movement" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerPlatform_Statics::NewProp_PlatformSpeed = { "PlatformSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPlatform, PlatformSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_PlatformSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_PlatformSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPlatform_Statics::NewProp_ImpulseForce_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// You can adjust the initial value as needed\n" },
		{ "ModuleRelativePath", "PlayerPlatform.h" },
		{ "ToolTip", "You can adjust the initial value as needed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerPlatform_Statics::NewProp_ImpulseForce = { "ImpulseForce", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPlatform, ImpulseForce), METADATA_PARAMS(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_ImpulseForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPlatform_Statics::NewProp_ImpulseForce_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPlatform_Statics::NewProp_PlatformMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPlatform_Statics::NewProp_TopDownCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPlatform_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPlatform_Statics::NewProp_LeftAxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPlatform_Statics::NewProp_RightAxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPlatform_Statics::NewProp_PlatformSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPlatform_Statics::NewProp_ImpulseForce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPlatform_Statics::ClassParams = {
		&APlayerPlatform::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPlatform()
	{
		if (!Z_Registration_Info_UClass_APlayerPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPlatform.OuterSingleton, Z_Construct_UClass_APlayerPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerPlatform.OuterSingleton;
	}
	template<> TESTPROJECTFAROM_API UClass* StaticClass<APlayerPlatform>()
	{
		return APlayerPlatform::StaticClass();
	}

	void APlayerPlatform::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PlatformMesh(TEXT("PlatformMesh"));
		static const FName Name_LeftAxisValue(TEXT("LeftAxisValue"));
		static const FName Name_RightAxisValue(TEXT("RightAxisValue"));

		const bool bIsValid = true
			&& Name_PlatformMesh == ClassReps[(int32)ENetFields_Private::PlatformMesh].Property->GetFName()
			&& Name_LeftAxisValue == ClassReps[(int32)ENetFields_Private::LeftAxisValue].Property->GetFName()
			&& Name_RightAxisValue == ClassReps[(int32)ENetFields_Private::RightAxisValue].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerPlatform"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPlatform);
	struct Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPlatform, APlayerPlatform::StaticClass, TEXT("APlayerPlatform"), &Z_Registration_Info_UClass_APlayerPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPlatform), 2319739023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_3910851804(TEXT("/Script/TestProjectFarom"),
		Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

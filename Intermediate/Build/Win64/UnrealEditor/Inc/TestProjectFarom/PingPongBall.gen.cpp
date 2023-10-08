// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProjectFarom/PingPongBall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePingPongBall() {}
// Cross Module References
	TESTPROJECTFAROM_API UClass* Z_Construct_UClass_APingPongBall_NoRegister();
	TESTPROJECTFAROM_API UClass* Z_Construct_UClass_APingPongBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestProjectFarom();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APingPongBall::execOnHit)
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
	DEFINE_FUNCTION(APingPongBall::execGetBallMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetBallMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APingPongBall::execServerHandleCollision)
	{
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_STRUCT(FVector,Z_Param_HitNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerHandleCollision_Validate(Z_Param_HitLocation,Z_Param_HitNormal))
		{
			RPC_ValidateFailed(TEXT("ServerHandleCollision_Validate"));
			return;
		}
		P_THIS->ServerHandleCollision_Implementation(Z_Param_HitLocation,Z_Param_HitNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APingPongBall::execMulticastApplyForce)
	{
		P_GET_STRUCT(FVector,Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastApplyForce_Implementation(Z_Param_Force);
		P_NATIVE_END;
	}
	static FName NAME_APingPongBall_MulticastApplyForce = FName(TEXT("MulticastApplyForce"));
	void APingPongBall::MulticastApplyForce(FVector Force)
	{
		PingPongBall_eventMulticastApplyForce_Parms Parms;
		Parms.Force=Force;
		ProcessEvent(FindFunctionChecked(NAME_APingPongBall_MulticastApplyForce),&Parms);
	}
	static FName NAME_APingPongBall_ServerHandleCollision = FName(TEXT("ServerHandleCollision"));
	void APingPongBall::ServerHandleCollision(FVector HitLocation, FVector HitNormal)
	{
		PingPongBall_eventServerHandleCollision_Parms Parms;
		Parms.HitLocation=HitLocation;
		Parms.HitNormal=HitNormal;
		ProcessEvent(FindFunctionChecked(NAME_APingPongBall_ServerHandleCollision),&Parms);
	}
	void APingPongBall::StaticRegisterNativesAPingPongBall()
	{
		UClass* Class = APingPongBall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBallMeshComponent", &APingPongBall::execGetBallMeshComponent },
			{ "MulticastApplyForce", &APingPongBall::execMulticastApplyForce },
			{ "OnHit", &APingPongBall::execOnHit },
			{ "ServerHandleCollision", &APingPongBall::execServerHandleCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics
	{
		struct PingPongBall_eventGetBallMeshComponent_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingPongBall_eventGetBallMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PingPongBall.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APingPongBall, nullptr, "GetBallMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::PingPongBall_eventGetBallMeshComponent_Parms), Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APingPongBall_GetBallMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APingPongBall_GetBallMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingPongBall_eventMulticastApplyForce_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics::NewProp_Force,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function to apply force to the ball on hit\n" },
		{ "ModuleRelativePath", "PingPongBall.h" },
		{ "ToolTip", "Function to apply force to the ball on hit" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APingPongBall, nullptr, "MulticastApplyForce", nullptr, nullptr, sizeof(PingPongBall_eventMulticastApplyForce_Parms), Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APingPongBall_MulticastApplyForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APingPongBall_MulticastApplyForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APingPongBall_OnHit_Statics
	{
		struct PingPongBall_eventOnHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingPongBall_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingPongBall_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingPongBall_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingPongBall_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingPongBall_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APingPongBall_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APingPongBall_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APingPongBall_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PingPongBall.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APingPongBall_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APingPongBall, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_APingPongBall_OnHit_Statics::PingPongBall_eventOnHit_Parms), Z_Construct_UFunction_APingPongBall_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APingPongBall_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APingPongBall_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APingPongBall_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingPongBall_eventServerHandleCollision_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingPongBall_eventServerHandleCollision_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::NewProp_HitNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function to handle collision on the server\n" },
		{ "ModuleRelativePath", "PingPongBall.h" },
		{ "ToolTip", "Function to handle collision on the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APingPongBall, nullptr, "ServerHandleCollision", nullptr, nullptr, sizeof(PingPongBall_eventServerHandleCollision_Parms), Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APingPongBall_ServerHandleCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APingPongBall_ServerHandleCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APingPongBall);
	UClass* Z_Construct_UClass_APingPongBall_NoRegister()
	{
		return APingPongBall::StaticClass();
	}
	struct Z_Construct_UClass_APingPongBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BallMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BallMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BallMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BallMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastHitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHitNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastHitNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APingPongBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProjectFarom,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APingPongBall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APingPongBall_GetBallMeshComponent, "GetBallMeshComponent" }, // 2486639387
		{ &Z_Construct_UFunction_APingPongBall_MulticastApplyForce, "MulticastApplyForce" }, // 3952076825
		{ &Z_Construct_UFunction_APingPongBall_OnHit, "OnHit" }, // 1051667085
		{ &Z_Construct_UFunction_APingPongBall_ServerHandleCollision, "ServerHandleCollision" }, // 4072904901
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APingPongBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PingPongBall.h" },
		{ "ModuleRelativePath", "PingPongBall.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APingPongBall_Statics::NewProp_BallMesh_MetaData[] = {
		{ "Category", "PingPongBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PingPongBall.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APingPongBall_Statics::NewProp_BallMesh = { "BallMesh", nullptr, (EPropertyFlags)0x00400000000a0029, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APingPongBall, BallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APingPongBall_Statics::NewProp_BallMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APingPongBall_Statics::NewProp_BallMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APingPongBall_Statics::NewProp_BallMovementComponent_MetaData[] = {
		{ "Category", "PingPongBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PingPongBall.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APingPongBall_Statics::NewProp_BallMovementComponent = { "BallMovementComponent", nullptr, (EPropertyFlags)0x00400000000a0029, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APingPongBall, BallMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APingPongBall_Statics::NewProp_BallMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APingPongBall_Statics::NewProp_BallMovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APingPongBall_Statics::NewProp_LastHitLocation_MetaData[] = {
		{ "ModuleRelativePath", "PingPongBall.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APingPongBall_Statics::NewProp_LastHitLocation = { "LastHitLocation", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APingPongBall, LastHitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APingPongBall_Statics::NewProp_LastHitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APingPongBall_Statics::NewProp_LastHitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APingPongBall_Statics::NewProp_LastHitNormal_MetaData[] = {
		{ "ModuleRelativePath", "PingPongBall.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APingPongBall_Statics::NewProp_LastHitNormal = { "LastHitNormal", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APingPongBall, LastHitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APingPongBall_Statics::NewProp_LastHitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APingPongBall_Statics::NewProp_LastHitNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APingPongBall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APingPongBall_Statics::NewProp_BallMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APingPongBall_Statics::NewProp_BallMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APingPongBall_Statics::NewProp_LastHitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APingPongBall_Statics::NewProp_LastHitNormal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APingPongBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APingPongBall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APingPongBall_Statics::ClassParams = {
		&APingPongBall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APingPongBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APingPongBall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APingPongBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APingPongBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APingPongBall()
	{
		if (!Z_Registration_Info_UClass_APingPongBall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APingPongBall.OuterSingleton, Z_Construct_UClass_APingPongBall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APingPongBall.OuterSingleton;
	}
	template<> TESTPROJECTFAROM_API UClass* StaticClass<APingPongBall>()
	{
		return APingPongBall::StaticClass();
	}

	void APingPongBall::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BallMesh(TEXT("BallMesh"));
		static const FName Name_BallMovementComponent(TEXT("BallMovementComponent"));
		static const FName Name_LastHitLocation(TEXT("LastHitLocation"));
		static const FName Name_LastHitNormal(TEXT("LastHitNormal"));

		const bool bIsValid = true
			&& Name_BallMesh == ClassReps[(int32)ENetFields_Private::BallMesh].Property->GetFName()
			&& Name_BallMovementComponent == ClassReps[(int32)ENetFields_Private::BallMovementComponent].Property->GetFName()
			&& Name_LastHitLocation == ClassReps[(int32)ENetFields_Private::LastHitLocation].Property->GetFName()
			&& Name_LastHitNormal == ClassReps[(int32)ENetFields_Private::LastHitNormal].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APingPongBall"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APingPongBall);
	struct Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APingPongBall, APingPongBall::StaticClass, TEXT("APingPongBall"), &Z_Registration_Info_UClass_APingPongBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APingPongBall), 2371475069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_1700058818(TEXT("/Script/TestProjectFarom"),
		Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PingPongBall_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

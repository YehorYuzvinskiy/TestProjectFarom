// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProjectFarom/PlayerPlatformController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPlatformController() {}
// Cross Module References
	TESTPROJECTFAROM_API UClass* Z_Construct_UClass_APlayerPlatformController_NoRegister();
	TESTPROJECTFAROM_API UClass* Z_Construct_UClass_APlayerPlatformController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TestProjectFarom();
// End Cross Module References
	void APlayerPlatformController::StaticRegisterNativesAPlayerPlatformController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerPlatformController);
	UClass* Z_Construct_UClass_APlayerPlatformController_NoRegister()
	{
		return APlayerPlatformController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPlatformController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPlatformController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProjectFarom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPlatformController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerPlatformController.h" },
		{ "ModuleRelativePath", "PlayerPlatformController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPlatformController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPlatformController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPlatformController_Statics::ClassParams = {
		&APlayerPlatformController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPlatformController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPlatformController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPlatformController()
	{
		if (!Z_Registration_Info_UClass_APlayerPlatformController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPlatformController.OuterSingleton, Z_Construct_UClass_APlayerPlatformController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerPlatformController.OuterSingleton;
	}
	template<> TESTPROJECTFAROM_API UClass* StaticClass<APlayerPlatformController>()
	{
		return APlayerPlatformController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPlatformController);
	struct Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatformController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatformController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPlatformController, APlayerPlatformController::StaticClass, TEXT("APlayerPlatformController"), &Z_Registration_Info_UClass_APlayerPlatformController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPlatformController), 1631348078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatformController_h_4092795504(TEXT("/Script/TestProjectFarom"),
		Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatformController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_PlayerPlatformController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

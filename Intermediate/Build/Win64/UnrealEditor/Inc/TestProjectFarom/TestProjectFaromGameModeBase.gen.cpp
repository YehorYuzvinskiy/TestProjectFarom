// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProjectFarom/TestProjectFaromGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProjectFaromGameModeBase() {}
// Cross Module References
	TESTPROJECTFAROM_API UClass* Z_Construct_UClass_ATestProjectFaromGameModeBase_NoRegister();
	TESTPROJECTFAROM_API UClass* Z_Construct_UClass_ATestProjectFaromGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestProjectFarom();
// End Cross Module References
	void ATestProjectFaromGameModeBase::StaticRegisterNativesATestProjectFaromGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestProjectFaromGameModeBase);
	UClass* Z_Construct_UClass_ATestProjectFaromGameModeBase_NoRegister()
	{
		return ATestProjectFaromGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATestProjectFaromGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestProjectFaromGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProjectFarom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestProjectFaromGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestProjectFaromGameModeBase.h" },
		{ "ModuleRelativePath", "TestProjectFaromGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestProjectFaromGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestProjectFaromGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestProjectFaromGameModeBase_Statics::ClassParams = {
		&ATestProjectFaromGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestProjectFaromGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestProjectFaromGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestProjectFaromGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATestProjectFaromGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestProjectFaromGameModeBase.OuterSingleton, Z_Construct_UClass_ATestProjectFaromGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestProjectFaromGameModeBase.OuterSingleton;
	}
	template<> TESTPROJECTFAROM_API UClass* StaticClass<ATestProjectFaromGameModeBase>()
	{
		return ATestProjectFaromGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestProjectFaromGameModeBase);
	struct Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_TestProjectFaromGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_TestProjectFaromGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestProjectFaromGameModeBase, ATestProjectFaromGameModeBase::StaticClass, TEXT("ATestProjectFaromGameModeBase"), &Z_Registration_Info_UClass_ATestProjectFaromGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestProjectFaromGameModeBase), 1182712550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_TestProjectFaromGameModeBase_h_233086633(TEXT("/Script/TestProjectFarom"),
		Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_TestProjectFaromGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectFarom_Source_TestProjectFarom_TestProjectFaromGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

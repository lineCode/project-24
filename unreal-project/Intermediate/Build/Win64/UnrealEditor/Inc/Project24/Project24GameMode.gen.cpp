// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project24/Project24GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject24GameMode() {}
// Cross Module References
	PROJECT24_API UClass* Z_Construct_UClass_AProject24GameMode_NoRegister();
	PROJECT24_API UClass* Z_Construct_UClass_AProject24GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project24();
// End Cross Module References
	void AProject24GameMode::StaticRegisterNativesAProject24GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject24GameMode);
	UClass* Z_Construct_UClass_AProject24GameMode_NoRegister()
	{
		return AProject24GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProject24GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject24GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project24,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject24GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project24GameMode.h" },
		{ "ModuleRelativePath", "Project24GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject24GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject24GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject24GameMode_Statics::ClassParams = {
		&AProject24GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProject24GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProject24GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject24GameMode()
	{
		if (!Z_Registration_Info_UClass_AProject24GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject24GameMode.OuterSingleton, Z_Construct_UClass_AProject24GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProject24GameMode.OuterSingleton;
	}
	template<> PROJECT24_API UClass* StaticClass<AProject24GameMode>()
	{
		return AProject24GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject24GameMode);
	struct Z_CompiledInDeferFile_FID_Project24_Source_Project24_Project24GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project24_Source_Project24_Project24GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProject24GameMode, AProject24GameMode::StaticClass, TEXT("AProject24GameMode"), &Z_Registration_Info_UClass_AProject24GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject24GameMode), 2272162102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project24_Source_Project24_Project24GameMode_h_1427805406(TEXT("/Script/Project24"),
		Z_CompiledInDeferFile_FID_Project24_Source_Project24_Project24GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project24_Source_Project24_Project24GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

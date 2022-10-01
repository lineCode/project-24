// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebUI/Public/PersistentUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersistentUserWidget() {}
// Cross Module References
	WEBUI_API UClass* Z_Construct_UClass_UPersistentUserWidget_NoRegister();
	WEBUI_API UClass* Z_Construct_UClass_UPersistentUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_WebUI();
// End Cross Module References
	void UPersistentUserWidget::StaticRegisterNativesUPersistentUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersistentUserWidget);
	UClass* Z_Construct_UClass_UPersistentUserWidget_NoRegister()
	{
		return UPersistentUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPersistentUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersistentUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_WebUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "True" },
		{ "IncludePath", "PersistentUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PersistentUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersistentUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersistentUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersistentUserWidget_Statics::ClassParams = {
		&UPersistentUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPersistentUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersistentUserWidget()
	{
		if (!Z_Registration_Info_UClass_UPersistentUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersistentUserWidget.OuterSingleton, Z_Construct_UClass_UPersistentUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersistentUserWidget.OuterSingleton;
	}
	template<> WEBUI_API UClass* StaticClass<UPersistentUserWidget>()
	{
		return UPersistentUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersistentUserWidget);
	struct Z_CompiledInDeferFile_FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_PersistentUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_PersistentUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersistentUserWidget, UPersistentUserWidget::StaticClass, TEXT("UPersistentUserWidget"), &Z_Registration_Info_UClass_UPersistentUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersistentUserWidget), 2109163213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_PersistentUserWidget_h_3893886947(TEXT("/Script/WebUI"),
		Z_CompiledInDeferFile_FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_PersistentUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_PersistentUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

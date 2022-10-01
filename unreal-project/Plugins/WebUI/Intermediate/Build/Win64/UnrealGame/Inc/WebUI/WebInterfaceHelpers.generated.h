// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWebInterfaceCallback;
struct FJsonLibraryValue;
#ifdef WEBUI_WebInterfaceHelpers_generated_h
#error "WebInterfaceHelpers.generated.h already included, missing '#pragma once' in WebInterfaceHelpers.h"
#endif
#define WEBUI_WebInterfaceHelpers_generated_h

#define FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_SPARSE_DATA
#define FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWebInterfaceCallback_Call); \
	DECLARE_FUNCTION(execWebInterfaceCallback_IsValid);


#define FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWebInterfaceCallback_Call); \
	DECLARE_FUNCTION(execWebInterfaceCallback_IsValid);


#define FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebInterfaceHelpers(); \
	friend struct Z_Construct_UClass_UWebInterfaceHelpers_Statics; \
public: \
	DECLARE_CLASS(UWebInterfaceHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebUI"), NO_API) \
	DECLARE_SERIALIZER(UWebInterfaceHelpers)


#define FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWebInterfaceHelpers(); \
	friend struct Z_Construct_UClass_UWebInterfaceHelpers_Statics; \
public: \
	DECLARE_CLASS(UWebInterfaceHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebUI"), NO_API) \
	DECLARE_SERIALIZER(UWebInterfaceHelpers)


#define FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebInterfaceHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebInterfaceHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebInterfaceHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebInterfaceHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebInterfaceHelpers(UWebInterfaceHelpers&&); \
	NO_API UWebInterfaceHelpers(const UWebInterfaceHelpers&); \
public:


#define FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebInterfaceHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebInterfaceHelpers(UWebInterfaceHelpers&&); \
	NO_API UWebInterfaceHelpers(const UWebInterfaceHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebInterfaceHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebInterfaceHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebInterfaceHelpers)


#define FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_10_PROLOG
#define FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_SPARSE_DATA \
	FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_RPC_WRAPPERS \
	FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_INCLASS \
	FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_SPARSE_DATA \
	FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBUI_API UClass* StaticClass<class UWebInterfaceHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_Plugins_WebUI_Source_WebUI_Public_WebInterfaceHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

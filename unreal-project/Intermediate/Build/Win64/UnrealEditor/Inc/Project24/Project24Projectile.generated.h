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
#ifdef PROJECT24_Project24Projectile_generated_h
#error "Project24Projectile.generated.h already included, missing '#pragma once' in Project24Projectile.h"
#endif
#define PROJECT24_Project24Projectile_generated_h

#define FID_unreal_project_Source_Project24_Project24Projectile_h_15_SPARSE_DATA
#define FID_unreal_project_Source_Project24_Project24Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_unreal_project_Source_Project24_Project24Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_unreal_project_Source_Project24_Project24Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject24Projectile(); \
	friend struct Z_Construct_UClass_AProject24Projectile_Statics; \
public: \
	DECLARE_CLASS(AProject24Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project24"), NO_API) \
	DECLARE_SERIALIZER(AProject24Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_unreal_project_Source_Project24_Project24Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProject24Projectile(); \
	friend struct Z_Construct_UClass_AProject24Projectile_Statics; \
public: \
	DECLARE_CLASS(AProject24Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project24"), NO_API) \
	DECLARE_SERIALIZER(AProject24Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_unreal_project_Source_Project24_Project24Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProject24Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProject24Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject24Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject24Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProject24Projectile(AProject24Projectile&&); \
	NO_API AProject24Projectile(const AProject24Projectile&); \
public:


#define FID_unreal_project_Source_Project24_Project24Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProject24Projectile(AProject24Projectile&&); \
	NO_API AProject24Projectile(const AProject24Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject24Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject24Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProject24Projectile)


#define FID_unreal_project_Source_Project24_Project24Projectile_h_12_PROLOG
#define FID_unreal_project_Source_Project24_Project24Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_Source_Project24_Project24Projectile_h_15_SPARSE_DATA \
	FID_unreal_project_Source_Project24_Project24Projectile_h_15_RPC_WRAPPERS \
	FID_unreal_project_Source_Project24_Project24Projectile_h_15_INCLASS \
	FID_unreal_project_Source_Project24_Project24Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_unreal_project_Source_Project24_Project24Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_Source_Project24_Project24Projectile_h_15_SPARSE_DATA \
	FID_unreal_project_Source_Project24_Project24Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_Source_Project24_Project24Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_Source_Project24_Project24Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT24_API UClass* StaticClass<class AProject24Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_Source_Project24_Project24Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT24_Project24Character_generated_h
#error "Project24Character.generated.h already included, missing '#pragma once' in Project24Character.h"
#endif
#define PROJECT24_Project24Character_generated_h

#define FID_Project24_Source_Project24_Project24Character_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Project24_Source_Project24_Project24Character_h_23_SPARSE_DATA
#define FID_Project24_Source_Project24_Project24Character_h_23_RPC_WRAPPERS
#define FID_Project24_Source_Project24_Project24Character_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Project24_Source_Project24_Project24Character_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject24Character(); \
	friend struct Z_Construct_UClass_AProject24Character_Statics; \
public: \
	DECLARE_CLASS(AProject24Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project24"), NO_API) \
	DECLARE_SERIALIZER(AProject24Character)


#define FID_Project24_Source_Project24_Project24Character_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAProject24Character(); \
	friend struct Z_Construct_UClass_AProject24Character_Statics; \
public: \
	DECLARE_CLASS(AProject24Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project24"), NO_API) \
	DECLARE_SERIALIZER(AProject24Character)


#define FID_Project24_Source_Project24_Project24Character_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProject24Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProject24Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject24Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject24Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProject24Character(AProject24Character&&); \
	NO_API AProject24Character(const AProject24Character&); \
public:


#define FID_Project24_Source_Project24_Project24Character_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProject24Character(AProject24Character&&); \
	NO_API AProject24Character(const AProject24Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject24Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject24Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProject24Character)


#define FID_Project24_Source_Project24_Project24Character_h_20_PROLOG
#define FID_Project24_Source_Project24_Project24Character_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project24_Source_Project24_Project24Character_h_23_SPARSE_DATA \
	FID_Project24_Source_Project24_Project24Character_h_23_RPC_WRAPPERS \
	FID_Project24_Source_Project24_Project24Character_h_23_INCLASS \
	FID_Project24_Source_Project24_Project24Character_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Project24_Source_Project24_Project24Character_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project24_Source_Project24_Project24Character_h_23_SPARSE_DATA \
	FID_Project24_Source_Project24_Project24Character_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project24_Source_Project24_Project24Character_h_23_INCLASS_NO_PURE_DECLS \
	FID_Project24_Source_Project24_Project24Character_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT24_API UClass* StaticClass<class AProject24Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project24_Source_Project24_Project24Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

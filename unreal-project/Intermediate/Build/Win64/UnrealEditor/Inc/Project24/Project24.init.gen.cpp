// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject24_init() {}
	PROJECT24_API UFunction* Z_Construct_UDelegateFunction_Project24_OnPickUp__DelegateSignature();
	PROJECT24_API UFunction* Z_Construct_UDelegateFunction_Project24_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Project24;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Project24()
	{
		if (!Z_Registration_Info_UPackage__Script_Project24.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Project24_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Project24_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Project24",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC6EC3059,
				0x3134F6A5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Project24.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Project24.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Project24(Z_Construct_UPackage__Script_Project24, TEXT("/Script/Project24"), Z_Registration_Info_UPackage__Script_Project24, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC6EC3059, 0x3134F6A5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

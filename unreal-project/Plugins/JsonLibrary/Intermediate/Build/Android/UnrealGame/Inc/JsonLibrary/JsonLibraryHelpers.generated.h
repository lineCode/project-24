// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJsonLibraryList;
struct FJsonLibraryObject;
struct FJsonLibraryValue;
struct FLinearColor;
struct FColor;
struct FGuid;
struct FDateTime;
 struct FJsonLibraryValue;
 
 struct FLinearColor;
 struct FColor;
 struct FGuid;
 struct FDateTime;
enum class EJsonLibraryType : uint8;
#ifdef JSONLIBRARY_JsonLibraryHelpers_generated_h
#error "JsonLibraryHelpers.generated.h already included, missing '#pragma once' in JsonLibraryHelpers.h"
#endif
#define JSONLIBRARY_JsonLibraryHelpers_generated_h

#define FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_SPARSE_DATA
#define FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStripCommentsOrCommas); \
	DECLARE_FUNCTION(execJsonList_Stringify); \
	DECLARE_FUNCTION(execJsonList_IsEmpty); \
	DECLARE_FUNCTION(execJsonList_IsValid); \
	DECLARE_FUNCTION(execJsonList_FindList); \
	DECLARE_FUNCTION(execJsonList_FindObject); \
	DECLARE_FUNCTION(execJsonList_FindValue); \
	DECLARE_FUNCTION(execJsonList_FindVector); \
	DECLARE_FUNCTION(execJsonList_FindTransform); \
	DECLARE_FUNCTION(execJsonList_FindRotator); \
	DECLARE_FUNCTION(execJsonList_FindLinearColor); \
	DECLARE_FUNCTION(execJsonList_FindColor); \
	DECLARE_FUNCTION(execJsonList_FindGuid); \
	DECLARE_FUNCTION(execJsonList_FindDateTime); \
	DECLARE_FUNCTION(execJsonList_FindString); \
	DECLARE_FUNCTION(execJsonList_FindInteger); \
	DECLARE_FUNCTION(execJsonList_FindFloat); \
	DECLARE_FUNCTION(execJsonList_FindBoolean); \
	DECLARE_FUNCTION(execJsonList_RemoveList); \
	DECLARE_FUNCTION(execJsonList_RemoveObject); \
	DECLARE_FUNCTION(execJsonList_RemoveValue); \
	DECLARE_FUNCTION(execJsonList_RemoveVector); \
	DECLARE_FUNCTION(execJsonList_RemoveTransform); \
	DECLARE_FUNCTION(execJsonList_RemoveRotator); \
	DECLARE_FUNCTION(execJsonList_RemoveLinearColor); \
	DECLARE_FUNCTION(execJsonList_RemoveColor); \
	DECLARE_FUNCTION(execJsonList_RemoveGuid); \
	DECLARE_FUNCTION(execJsonList_RemoveDateTime); \
	DECLARE_FUNCTION(execJsonList_RemoveString); \
	DECLARE_FUNCTION(execJsonList_RemoveInteger); \
	DECLARE_FUNCTION(execJsonList_RemoveFloat); \
	DECLARE_FUNCTION(execJsonList_RemoveBoolean); \
	DECLARE_FUNCTION(execJsonList_Remove); \
	DECLARE_FUNCTION(execJsonList_SetMap); \
	DECLARE_FUNCTION(execJsonList_SetArray); \
	DECLARE_FUNCTION(execJsonList_SetList); \
	DECLARE_FUNCTION(execJsonList_SetObject); \
	DECLARE_FUNCTION(execJsonList_SetValue); \
	DECLARE_FUNCTION(execJsonList_SetVector); \
	DECLARE_FUNCTION(execJsonList_SetTransform); \
	DECLARE_FUNCTION(execJsonList_SetRotator); \
	DECLARE_FUNCTION(execJsonList_SetLinearColor); \
	DECLARE_FUNCTION(execJsonList_SetColor); \
	DECLARE_FUNCTION(execJsonList_SetGuid); \
	DECLARE_FUNCTION(execJsonList_SetDateTime); \
	DECLARE_FUNCTION(execJsonList_SetString); \
	DECLARE_FUNCTION(execJsonList_SetInteger); \
	DECLARE_FUNCTION(execJsonList_SetFloat); \
	DECLARE_FUNCTION(execJsonList_SetBoolean); \
	DECLARE_FUNCTION(execJsonList_GetMap); \
	DECLARE_FUNCTION(execJsonList_GetArray); \
	DECLARE_FUNCTION(execJsonList_GetList); \
	DECLARE_FUNCTION(execJsonList_GetObject); \
	DECLARE_FUNCTION(execJsonList_GetValue); \
	DECLARE_FUNCTION(execJsonList_GetVector); \
	DECLARE_FUNCTION(execJsonList_GetTransform); \
	DECLARE_FUNCTION(execJsonList_GetRotator); \
	DECLARE_FUNCTION(execJsonList_GetLinearColor); \
	DECLARE_FUNCTION(execJsonList_GetColor); \
	DECLARE_FUNCTION(execJsonList_GetGuid); \
	DECLARE_FUNCTION(execJsonList_GetDateTime); \
	DECLARE_FUNCTION(execJsonList_GetString); \
	DECLARE_FUNCTION(execJsonList_GetInteger); \
	DECLARE_FUNCTION(execJsonList_GetFloat); \
	DECLARE_FUNCTION(execJsonList_GetBoolean); \
	DECLARE_FUNCTION(execJsonList_InsertMap); \
	DECLARE_FUNCTION(execJsonList_InsertArray); \
	DECLARE_FUNCTION(execJsonList_InsertList); \
	DECLARE_FUNCTION(execJsonList_InsertObject); \
	DECLARE_FUNCTION(execJsonList_InsertValue); \
	DECLARE_FUNCTION(execJsonList_InsertVector); \
	DECLARE_FUNCTION(execJsonList_InsertTransform); \
	DECLARE_FUNCTION(execJsonList_InsertRotator); \
	DECLARE_FUNCTION(execJsonList_InsertLinearColor); \
	DECLARE_FUNCTION(execJsonList_InsertColor); \
	DECLARE_FUNCTION(execJsonList_InsertGuid); \
	DECLARE_FUNCTION(execJsonList_InsertDateTime); \
	DECLARE_FUNCTION(execJsonList_InsertString); \
	DECLARE_FUNCTION(execJsonList_InsertInteger); \
	DECLARE_FUNCTION(execJsonList_InsertFloat); \
	DECLARE_FUNCTION(execJsonList_InsertBoolean); \
	DECLARE_FUNCTION(execJsonList_AddMap); \
	DECLARE_FUNCTION(execJsonList_AddArray); \
	DECLARE_FUNCTION(execJsonList_AddList); \
	DECLARE_FUNCTION(execJsonList_AddObject); \
	DECLARE_FUNCTION(execJsonList_AddValue); \
	DECLARE_FUNCTION(execJsonList_AddVector); \
	DECLARE_FUNCTION(execJsonList_AddTransform); \
	DECLARE_FUNCTION(execJsonList_AddRotator); \
	DECLARE_FUNCTION(execJsonList_AddLinearColor); \
	DECLARE_FUNCTION(execJsonList_AddColor); \
	DECLARE_FUNCTION(execJsonList_AddGuid); \
	DECLARE_FUNCTION(execJsonList_AddDateTime); \
	DECLARE_FUNCTION(execJsonList_AddString); \
	DECLARE_FUNCTION(execJsonList_AddInteger); \
	DECLARE_FUNCTION(execJsonList_AddFloat); \
	DECLARE_FUNCTION(execJsonList_AddBoolean); \
	DECLARE_FUNCTION(execJsonList_InjectObjectArray); \
	DECLARE_FUNCTION(execJsonList_InjectVectorArray); \
	DECLARE_FUNCTION(execJsonList_InjectTransformArray); \
	DECLARE_FUNCTION(execJsonList_InjectRotatorArray); \
	DECLARE_FUNCTION(execJsonList_InjectLinearColorArray); \
	DECLARE_FUNCTION(execJsonList_InjectColorArray); \
	DECLARE_FUNCTION(execJsonList_InjectGuidArray); \
	DECLARE_FUNCTION(execJsonList_InjectDateTimeArray); \
	DECLARE_FUNCTION(execJsonList_InjectStringArray); \
	DECLARE_FUNCTION(execJsonList_InjectIntegerArray); \
	DECLARE_FUNCTION(execJsonList_InjectFloatArray); \
	DECLARE_FUNCTION(execJsonList_InjectBooleanArray); \
	DECLARE_FUNCTION(execJsonList_Inject); \
	DECLARE_FUNCTION(execJsonList_AppendObjectArray); \
	DECLARE_FUNCTION(execJsonList_AppendVectorArray); \
	DECLARE_FUNCTION(execJsonList_AppendTransformArray); \
	DECLARE_FUNCTION(execJsonList_AppendRotatorArray); \
	DECLARE_FUNCTION(execJsonList_AppendLinearColorArray); \
	DECLARE_FUNCTION(execJsonList_AppendColorArray); \
	DECLARE_FUNCTION(execJsonList_AppendGuidArray); \
	DECLARE_FUNCTION(execJsonList_AppendDateTimeArray); \
	DECLARE_FUNCTION(execJsonList_AppendStringArray); \
	DECLARE_FUNCTION(execJsonList_AppendIntegerArray); \
	DECLARE_FUNCTION(execJsonList_AppendFloatArray); \
	DECLARE_FUNCTION(execJsonList_AppendBooleanArray); \
	DECLARE_FUNCTION(execJsonList_Append); \
	DECLARE_FUNCTION(execJsonList_Swap); \
	DECLARE_FUNCTION(execJsonList_Clear); \
	DECLARE_FUNCTION(execJsonList_Count); \
	DECLARE_FUNCTION(execJsonList_Equals); \
	DECLARE_FUNCTION(execJsonObject_Stringify); \
	DECLARE_FUNCTION(execJsonObject_IsVector); \
	DECLARE_FUNCTION(execJsonObject_IsTransform); \
	DECLARE_FUNCTION(execJsonObject_IsRotator); \
	DECLARE_FUNCTION(execJsonObject_IsEmpty); \
	DECLARE_FUNCTION(execJsonObject_IsValid); \
	DECLARE_FUNCTION(execJsonObject_SetMap); \
	DECLARE_FUNCTION(execJsonObject_SetArray); \
	DECLARE_FUNCTION(execJsonObject_SetList); \
	DECLARE_FUNCTION(execJsonObject_SetObject); \
	DECLARE_FUNCTION(execJsonObject_SetValue); \
	DECLARE_FUNCTION(execJsonObject_SetVector); \
	DECLARE_FUNCTION(execJsonObject_SetTransform); \
	DECLARE_FUNCTION(execJsonObject_SetRotator); \
	DECLARE_FUNCTION(execJsonObject_SetLinearColor); \
	DECLARE_FUNCTION(execJsonObject_SetColor); \
	DECLARE_FUNCTION(execJsonObject_SetGuid); \
	DECLARE_FUNCTION(execJsonObject_SetDateTime); \
	DECLARE_FUNCTION(execJsonObject_SetString); \
	DECLARE_FUNCTION(execJsonObject_SetInteger); \
	DECLARE_FUNCTION(execJsonObject_SetFloat); \
	DECLARE_FUNCTION(execJsonObject_SetBoolean); \
	DECLARE_FUNCTION(execJsonObject_GetMap); \
	DECLARE_FUNCTION(execJsonObject_GetArray); \
	DECLARE_FUNCTION(execJsonObject_GetList); \
	DECLARE_FUNCTION(execJsonObject_GetObject); \
	DECLARE_FUNCTION(execJsonObject_GetValue); \
	DECLARE_FUNCTION(execJsonObject_GetVector); \
	DECLARE_FUNCTION(execJsonObject_GetTransform); \
	DECLARE_FUNCTION(execJsonObject_GetRotator); \
	DECLARE_FUNCTION(execJsonObject_GetLinearColor); \
	DECLARE_FUNCTION(execJsonObject_GetColor); \
	DECLARE_FUNCTION(execJsonObject_GetGuid); \
	DECLARE_FUNCTION(execJsonObject_GetDateTime); \
	DECLARE_FUNCTION(execJsonObject_GetString); \
	DECLARE_FUNCTION(execJsonObject_GetInteger); \
	DECLARE_FUNCTION(execJsonObject_GetFloat); \
	DECLARE_FUNCTION(execJsonObject_GetBoolean); \
	DECLARE_FUNCTION(execJsonObject_GetValues); \
	DECLARE_FUNCTION(execJsonObject_GetKeys); \
	DECLARE_FUNCTION(execJsonObject_AddVectorMap); \
	DECLARE_FUNCTION(execJsonObject_AddTransformMap); \
	DECLARE_FUNCTION(execJsonObject_AddRotatorMap); \
	DECLARE_FUNCTION(execJsonObject_AddLinearColorMap); \
	DECLARE_FUNCTION(execJsonObject_AddColorMap); \
	DECLARE_FUNCTION(execJsonObject_AddGuidMap); \
	DECLARE_FUNCTION(execJsonObject_AddDateTimeMap); \
	DECLARE_FUNCTION(execJsonObject_AddStringMap); \
	DECLARE_FUNCTION(execJsonObject_AddIntegerMap); \
	DECLARE_FUNCTION(execJsonObject_AddFloatMap); \
	DECLARE_FUNCTION(execJsonObject_AddBooleanMap); \
	DECLARE_FUNCTION(execJsonObject_Add); \
	DECLARE_FUNCTION(execJsonObject_RemoveKey); \
	DECLARE_FUNCTION(execJsonObject_HasKey); \
	DECLARE_FUNCTION(execJsonObject_Clear); \
	DECLARE_FUNCTION(execJsonObject_Count); \
	DECLARE_FUNCTION(execJsonObject_Equals); \
	DECLARE_FUNCTION(execJsonValue_Stringify); \
	DECLARE_FUNCTION(execJsonValue_IsVector); \
	DECLARE_FUNCTION(execJsonValue_IsTransform); \
	DECLARE_FUNCTION(execJsonValue_IsRotator); \
	DECLARE_FUNCTION(execJsonValue_IsGuid); \
	DECLARE_FUNCTION(execJsonValue_IsValid); \
	DECLARE_FUNCTION(execJsonValue_Equals); \
	DECLARE_FUNCTION(execJsonValue_GetType); \
	DECLARE_FUNCTION(execConvertObjectArrayToList); \
	DECLARE_FUNCTION(execConvertVectorArrayToList); \
	DECLARE_FUNCTION(execConvertTransformArrayToList); \
	DECLARE_FUNCTION(execConvertRotatorArrayToList); \
	DECLARE_FUNCTION(execConvertLinearColorArrayToList); \
	DECLARE_FUNCTION(execConvertColorArrayToList); \
	DECLARE_FUNCTION(execConvertGuidArrayToList); \
	DECLARE_FUNCTION(execConvertDateTimeArrayToList); \
	DECLARE_FUNCTION(execConvertStringArrayToList); \
	DECLARE_FUNCTION(execConvertIntegerArrayToList); \
	DECLARE_FUNCTION(execConvertFloatArrayToList); \
	DECLARE_FUNCTION(execConvertBooleanArrayToList); \
	DECLARE_FUNCTION(execConvertListToArray); \
	DECLARE_FUNCTION(execConvertArrayToList); \
	DECLARE_FUNCTION(execConvertVectorMapToObject); \
	DECLARE_FUNCTION(execConvertTransformMapToObject); \
	DECLARE_FUNCTION(execConvertRotatorMapToObject); \
	DECLARE_FUNCTION(execConvertLinearColorMapToObject); \
	DECLARE_FUNCTION(execConvertColorMapToObject); \
	DECLARE_FUNCTION(execConvertGuidMapToObject); \
	DECLARE_FUNCTION(execConvertDateTimeMapToObject); \
	DECLARE_FUNCTION(execConvertStringMapToObject); \
	DECLARE_FUNCTION(execConvertIntegerMapToObject); \
	DECLARE_FUNCTION(execConvertFloatMapToObject); \
	DECLARE_FUNCTION(execConvertBooleanMapToObject); \
	DECLARE_FUNCTION(execConvertObjectToMap); \
	DECLARE_FUNCTION(execConvertMapToObject); \
	DECLARE_FUNCTION(execConvertObjectToVector); \
	DECLARE_FUNCTION(execConvertObjectToTransform); \
	DECLARE_FUNCTION(execConvertObjectToRotator); \
	DECLARE_FUNCTION(execConvertObjectToLinearColor); \
	DECLARE_FUNCTION(execConvertVectorToObject); \
	DECLARE_FUNCTION(execConvertTransformToObject); \
	DECLARE_FUNCTION(execConvertRotatorToObject); \
	DECLARE_FUNCTION(execConvertLinearColorToObject); \
	DECLARE_FUNCTION(execToVectorMap); \
	DECLARE_FUNCTION(execToTransformMap); \
	DECLARE_FUNCTION(execToRotatorMap); \
	DECLARE_FUNCTION(execToLinearColorMap); \
	DECLARE_FUNCTION(execToColorMap); \
	DECLARE_FUNCTION(execToGuidMap); \
	DECLARE_FUNCTION(execToDateTimeMap); \
	DECLARE_FUNCTION(execToStringMap); \
	DECLARE_FUNCTION(execToIntegerMap); \
	DECLARE_FUNCTION(execToFloatMap); \
	DECLARE_FUNCTION(execToBooleanMap); \
	DECLARE_FUNCTION(execToObjectArray); \
	DECLARE_FUNCTION(execToVectorArray); \
	DECLARE_FUNCTION(execToTransformArray); \
	DECLARE_FUNCTION(execToRotatorArray); \
	DECLARE_FUNCTION(execToLinearColorArray); \
	DECLARE_FUNCTION(execToColorArray); \
	DECLARE_FUNCTION(execToGuidArray); \
	DECLARE_FUNCTION(execToDateTimeArray); \
	DECLARE_FUNCTION(execToStringArray); \
	DECLARE_FUNCTION(execToIntegerArray); \
	DECLARE_FUNCTION(execToFloatArray); \
	DECLARE_FUNCTION(execToBooleanArray); \
	DECLARE_FUNCTION(execToMap); \
	DECLARE_FUNCTION(execToArray); \
	DECLARE_FUNCTION(execToList); \
	DECLARE_FUNCTION(execToObject); \
	DECLARE_FUNCTION(execToVector); \
	DECLARE_FUNCTION(execToTransform); \
	DECLARE_FUNCTION(execToRotator); \
	DECLARE_FUNCTION(execToLinearColor); \
	DECLARE_FUNCTION(execToColor); \
	DECLARE_FUNCTION(execToGuid); \
	DECLARE_FUNCTION(execToDateTime); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execToInteger); \
	DECLARE_FUNCTION(execToFloat); \
	DECLARE_FUNCTION(execToBoolean); \
	DECLARE_FUNCTION(execFromVectorMap); \
	DECLARE_FUNCTION(execFromTransformMap); \
	DECLARE_FUNCTION(execFromRotatorMap); \
	DECLARE_FUNCTION(execFromLinearColorMap); \
	DECLARE_FUNCTION(execFromColorMap); \
	DECLARE_FUNCTION(execFromGuidMap); \
	DECLARE_FUNCTION(execFromDateTimeMap); \
	DECLARE_FUNCTION(execFromStringMap); \
	DECLARE_FUNCTION(execFromIntegerMap); \
	DECLARE_FUNCTION(execFromFloatMap); \
	DECLARE_FUNCTION(execFromBooleanMap); \
	DECLARE_FUNCTION(execFromObjectArray); \
	DECLARE_FUNCTION(execFromVectorArray); \
	DECLARE_FUNCTION(execFromTransformArray); \
	DECLARE_FUNCTION(execFromRotatorArray); \
	DECLARE_FUNCTION(execFromLinearColorArray); \
	DECLARE_FUNCTION(execFromColorArray); \
	DECLARE_FUNCTION(execFromGuidArray); \
	DECLARE_FUNCTION(execFromDateTimeArray); \
	DECLARE_FUNCTION(execFromStringArray); \
	DECLARE_FUNCTION(execFromIntegerArray); \
	DECLARE_FUNCTION(execFromFloatArray); \
	DECLARE_FUNCTION(execFromBooleanArray); \
	DECLARE_FUNCTION(execFromMap); \
	DECLARE_FUNCTION(execFromArray); \
	DECLARE_FUNCTION(execFromList); \
	DECLARE_FUNCTION(execFromObject); \
	DECLARE_FUNCTION(execFromVector); \
	DECLARE_FUNCTION(execFromTransform); \
	DECLARE_FUNCTION(execFromRotator); \
	DECLARE_FUNCTION(execFromLinearColor); \
	DECLARE_FUNCTION(execFromColor); \
	DECLARE_FUNCTION(execFromGuid); \
	DECLARE_FUNCTION(execFromDateTime); \
	DECLARE_FUNCTION(execFromString); \
	DECLARE_FUNCTION(execFromInteger); \
	DECLARE_FUNCTION(execFromFloat); \
	DECLARE_FUNCTION(execFromBoolean); \
	DECLARE_FUNCTION(execConstructMap); \
	DECLARE_FUNCTION(execConstructArray); \
	DECLARE_FUNCTION(execConstructList); \
	DECLARE_FUNCTION(execConstructObject); \
	DECLARE_FUNCTION(execConstructNull); \
	DECLARE_FUNCTION(execParseList); \
	DECLARE_FUNCTION(execParseObject); \
	DECLARE_FUNCTION(execParse);


#define FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStripCommentsOrCommas); \
	DECLARE_FUNCTION(execJsonList_Stringify); \
	DECLARE_FUNCTION(execJsonList_IsEmpty); \
	DECLARE_FUNCTION(execJsonList_IsValid); \
	DECLARE_FUNCTION(execJsonList_FindList); \
	DECLARE_FUNCTION(execJsonList_FindObject); \
	DECLARE_FUNCTION(execJsonList_FindValue); \
	DECLARE_FUNCTION(execJsonList_FindVector); \
	DECLARE_FUNCTION(execJsonList_FindTransform); \
	DECLARE_FUNCTION(execJsonList_FindRotator); \
	DECLARE_FUNCTION(execJsonList_FindLinearColor); \
	DECLARE_FUNCTION(execJsonList_FindColor); \
	DECLARE_FUNCTION(execJsonList_FindGuid); \
	DECLARE_FUNCTION(execJsonList_FindDateTime); \
	DECLARE_FUNCTION(execJsonList_FindString); \
	DECLARE_FUNCTION(execJsonList_FindInteger); \
	DECLARE_FUNCTION(execJsonList_FindFloat); \
	DECLARE_FUNCTION(execJsonList_FindBoolean); \
	DECLARE_FUNCTION(execJsonList_RemoveList); \
	DECLARE_FUNCTION(execJsonList_RemoveObject); \
	DECLARE_FUNCTION(execJsonList_RemoveValue); \
	DECLARE_FUNCTION(execJsonList_RemoveVector); \
	DECLARE_FUNCTION(execJsonList_RemoveTransform); \
	DECLARE_FUNCTION(execJsonList_RemoveRotator); \
	DECLARE_FUNCTION(execJsonList_RemoveLinearColor); \
	DECLARE_FUNCTION(execJsonList_RemoveColor); \
	DECLARE_FUNCTION(execJsonList_RemoveGuid); \
	DECLARE_FUNCTION(execJsonList_RemoveDateTime); \
	DECLARE_FUNCTION(execJsonList_RemoveString); \
	DECLARE_FUNCTION(execJsonList_RemoveInteger); \
	DECLARE_FUNCTION(execJsonList_RemoveFloat); \
	DECLARE_FUNCTION(execJsonList_RemoveBoolean); \
	DECLARE_FUNCTION(execJsonList_Remove); \
	DECLARE_FUNCTION(execJsonList_SetMap); \
	DECLARE_FUNCTION(execJsonList_SetArray); \
	DECLARE_FUNCTION(execJsonList_SetList); \
	DECLARE_FUNCTION(execJsonList_SetObject); \
	DECLARE_FUNCTION(execJsonList_SetValue); \
	DECLARE_FUNCTION(execJsonList_SetVector); \
	DECLARE_FUNCTION(execJsonList_SetTransform); \
	DECLARE_FUNCTION(execJsonList_SetRotator); \
	DECLARE_FUNCTION(execJsonList_SetLinearColor); \
	DECLARE_FUNCTION(execJsonList_SetColor); \
	DECLARE_FUNCTION(execJsonList_SetGuid); \
	DECLARE_FUNCTION(execJsonList_SetDateTime); \
	DECLARE_FUNCTION(execJsonList_SetString); \
	DECLARE_FUNCTION(execJsonList_SetInteger); \
	DECLARE_FUNCTION(execJsonList_SetFloat); \
	DECLARE_FUNCTION(execJsonList_SetBoolean); \
	DECLARE_FUNCTION(execJsonList_GetMap); \
	DECLARE_FUNCTION(execJsonList_GetArray); \
	DECLARE_FUNCTION(execJsonList_GetList); \
	DECLARE_FUNCTION(execJsonList_GetObject); \
	DECLARE_FUNCTION(execJsonList_GetValue); \
	DECLARE_FUNCTION(execJsonList_GetVector); \
	DECLARE_FUNCTION(execJsonList_GetTransform); \
	DECLARE_FUNCTION(execJsonList_GetRotator); \
	DECLARE_FUNCTION(execJsonList_GetLinearColor); \
	DECLARE_FUNCTION(execJsonList_GetColor); \
	DECLARE_FUNCTION(execJsonList_GetGuid); \
	DECLARE_FUNCTION(execJsonList_GetDateTime); \
	DECLARE_FUNCTION(execJsonList_GetString); \
	DECLARE_FUNCTION(execJsonList_GetInteger); \
	DECLARE_FUNCTION(execJsonList_GetFloat); \
	DECLARE_FUNCTION(execJsonList_GetBoolean); \
	DECLARE_FUNCTION(execJsonList_InsertMap); \
	DECLARE_FUNCTION(execJsonList_InsertArray); \
	DECLARE_FUNCTION(execJsonList_InsertList); \
	DECLARE_FUNCTION(execJsonList_InsertObject); \
	DECLARE_FUNCTION(execJsonList_InsertValue); \
	DECLARE_FUNCTION(execJsonList_InsertVector); \
	DECLARE_FUNCTION(execJsonList_InsertTransform); \
	DECLARE_FUNCTION(execJsonList_InsertRotator); \
	DECLARE_FUNCTION(execJsonList_InsertLinearColor); \
	DECLARE_FUNCTION(execJsonList_InsertColor); \
	DECLARE_FUNCTION(execJsonList_InsertGuid); \
	DECLARE_FUNCTION(execJsonList_InsertDateTime); \
	DECLARE_FUNCTION(execJsonList_InsertString); \
	DECLARE_FUNCTION(execJsonList_InsertInteger); \
	DECLARE_FUNCTION(execJsonList_InsertFloat); \
	DECLARE_FUNCTION(execJsonList_InsertBoolean); \
	DECLARE_FUNCTION(execJsonList_AddMap); \
	DECLARE_FUNCTION(execJsonList_AddArray); \
	DECLARE_FUNCTION(execJsonList_AddList); \
	DECLARE_FUNCTION(execJsonList_AddObject); \
	DECLARE_FUNCTION(execJsonList_AddValue); \
	DECLARE_FUNCTION(execJsonList_AddVector); \
	DECLARE_FUNCTION(execJsonList_AddTransform); \
	DECLARE_FUNCTION(execJsonList_AddRotator); \
	DECLARE_FUNCTION(execJsonList_AddLinearColor); \
	DECLARE_FUNCTION(execJsonList_AddColor); \
	DECLARE_FUNCTION(execJsonList_AddGuid); \
	DECLARE_FUNCTION(execJsonList_AddDateTime); \
	DECLARE_FUNCTION(execJsonList_AddString); \
	DECLARE_FUNCTION(execJsonList_AddInteger); \
	DECLARE_FUNCTION(execJsonList_AddFloat); \
	DECLARE_FUNCTION(execJsonList_AddBoolean); \
	DECLARE_FUNCTION(execJsonList_InjectObjectArray); \
	DECLARE_FUNCTION(execJsonList_InjectVectorArray); \
	DECLARE_FUNCTION(execJsonList_InjectTransformArray); \
	DECLARE_FUNCTION(execJsonList_InjectRotatorArray); \
	DECLARE_FUNCTION(execJsonList_InjectLinearColorArray); \
	DECLARE_FUNCTION(execJsonList_InjectColorArray); \
	DECLARE_FUNCTION(execJsonList_InjectGuidArray); \
	DECLARE_FUNCTION(execJsonList_InjectDateTimeArray); \
	DECLARE_FUNCTION(execJsonList_InjectStringArray); \
	DECLARE_FUNCTION(execJsonList_InjectIntegerArray); \
	DECLARE_FUNCTION(execJsonList_InjectFloatArray); \
	DECLARE_FUNCTION(execJsonList_InjectBooleanArray); \
	DECLARE_FUNCTION(execJsonList_Inject); \
	DECLARE_FUNCTION(execJsonList_AppendObjectArray); \
	DECLARE_FUNCTION(execJsonList_AppendVectorArray); \
	DECLARE_FUNCTION(execJsonList_AppendTransformArray); \
	DECLARE_FUNCTION(execJsonList_AppendRotatorArray); \
	DECLARE_FUNCTION(execJsonList_AppendLinearColorArray); \
	DECLARE_FUNCTION(execJsonList_AppendColorArray); \
	DECLARE_FUNCTION(execJsonList_AppendGuidArray); \
	DECLARE_FUNCTION(execJsonList_AppendDateTimeArray); \
	DECLARE_FUNCTION(execJsonList_AppendStringArray); \
	DECLARE_FUNCTION(execJsonList_AppendIntegerArray); \
	DECLARE_FUNCTION(execJsonList_AppendFloatArray); \
	DECLARE_FUNCTION(execJsonList_AppendBooleanArray); \
	DECLARE_FUNCTION(execJsonList_Append); \
	DECLARE_FUNCTION(execJsonList_Swap); \
	DECLARE_FUNCTION(execJsonList_Clear); \
	DECLARE_FUNCTION(execJsonList_Count); \
	DECLARE_FUNCTION(execJsonList_Equals); \
	DECLARE_FUNCTION(execJsonObject_Stringify); \
	DECLARE_FUNCTION(execJsonObject_IsVector); \
	DECLARE_FUNCTION(execJsonObject_IsTransform); \
	DECLARE_FUNCTION(execJsonObject_IsRotator); \
	DECLARE_FUNCTION(execJsonObject_IsEmpty); \
	DECLARE_FUNCTION(execJsonObject_IsValid); \
	DECLARE_FUNCTION(execJsonObject_SetMap); \
	DECLARE_FUNCTION(execJsonObject_SetArray); \
	DECLARE_FUNCTION(execJsonObject_SetList); \
	DECLARE_FUNCTION(execJsonObject_SetObject); \
	DECLARE_FUNCTION(execJsonObject_SetValue); \
	DECLARE_FUNCTION(execJsonObject_SetVector); \
	DECLARE_FUNCTION(execJsonObject_SetTransform); \
	DECLARE_FUNCTION(execJsonObject_SetRotator); \
	DECLARE_FUNCTION(execJsonObject_SetLinearColor); \
	DECLARE_FUNCTION(execJsonObject_SetColor); \
	DECLARE_FUNCTION(execJsonObject_SetGuid); \
	DECLARE_FUNCTION(execJsonObject_SetDateTime); \
	DECLARE_FUNCTION(execJsonObject_SetString); \
	DECLARE_FUNCTION(execJsonObject_SetInteger); \
	DECLARE_FUNCTION(execJsonObject_SetFloat); \
	DECLARE_FUNCTION(execJsonObject_SetBoolean); \
	DECLARE_FUNCTION(execJsonObject_GetMap); \
	DECLARE_FUNCTION(execJsonObject_GetArray); \
	DECLARE_FUNCTION(execJsonObject_GetList); \
	DECLARE_FUNCTION(execJsonObject_GetObject); \
	DECLARE_FUNCTION(execJsonObject_GetValue); \
	DECLARE_FUNCTION(execJsonObject_GetVector); \
	DECLARE_FUNCTION(execJsonObject_GetTransform); \
	DECLARE_FUNCTION(execJsonObject_GetRotator); \
	DECLARE_FUNCTION(execJsonObject_GetLinearColor); \
	DECLARE_FUNCTION(execJsonObject_GetColor); \
	DECLARE_FUNCTION(execJsonObject_GetGuid); \
	DECLARE_FUNCTION(execJsonObject_GetDateTime); \
	DECLARE_FUNCTION(execJsonObject_GetString); \
	DECLARE_FUNCTION(execJsonObject_GetInteger); \
	DECLARE_FUNCTION(execJsonObject_GetFloat); \
	DECLARE_FUNCTION(execJsonObject_GetBoolean); \
	DECLARE_FUNCTION(execJsonObject_GetValues); \
	DECLARE_FUNCTION(execJsonObject_GetKeys); \
	DECLARE_FUNCTION(execJsonObject_AddVectorMap); \
	DECLARE_FUNCTION(execJsonObject_AddTransformMap); \
	DECLARE_FUNCTION(execJsonObject_AddRotatorMap); \
	DECLARE_FUNCTION(execJsonObject_AddLinearColorMap); \
	DECLARE_FUNCTION(execJsonObject_AddColorMap); \
	DECLARE_FUNCTION(execJsonObject_AddGuidMap); \
	DECLARE_FUNCTION(execJsonObject_AddDateTimeMap); \
	DECLARE_FUNCTION(execJsonObject_AddStringMap); \
	DECLARE_FUNCTION(execJsonObject_AddIntegerMap); \
	DECLARE_FUNCTION(execJsonObject_AddFloatMap); \
	DECLARE_FUNCTION(execJsonObject_AddBooleanMap); \
	DECLARE_FUNCTION(execJsonObject_Add); \
	DECLARE_FUNCTION(execJsonObject_RemoveKey); \
	DECLARE_FUNCTION(execJsonObject_HasKey); \
	DECLARE_FUNCTION(execJsonObject_Clear); \
	DECLARE_FUNCTION(execJsonObject_Count); \
	DECLARE_FUNCTION(execJsonObject_Equals); \
	DECLARE_FUNCTION(execJsonValue_Stringify); \
	DECLARE_FUNCTION(execJsonValue_IsVector); \
	DECLARE_FUNCTION(execJsonValue_IsTransform); \
	DECLARE_FUNCTION(execJsonValue_IsRotator); \
	DECLARE_FUNCTION(execJsonValue_IsGuid); \
	DECLARE_FUNCTION(execJsonValue_IsValid); \
	DECLARE_FUNCTION(execJsonValue_Equals); \
	DECLARE_FUNCTION(execJsonValue_GetType); \
	DECLARE_FUNCTION(execConvertObjectArrayToList); \
	DECLARE_FUNCTION(execConvertVectorArrayToList); \
	DECLARE_FUNCTION(execConvertTransformArrayToList); \
	DECLARE_FUNCTION(execConvertRotatorArrayToList); \
	DECLARE_FUNCTION(execConvertLinearColorArrayToList); \
	DECLARE_FUNCTION(execConvertColorArrayToList); \
	DECLARE_FUNCTION(execConvertGuidArrayToList); \
	DECLARE_FUNCTION(execConvertDateTimeArrayToList); \
	DECLARE_FUNCTION(execConvertStringArrayToList); \
	DECLARE_FUNCTION(execConvertIntegerArrayToList); \
	DECLARE_FUNCTION(execConvertFloatArrayToList); \
	DECLARE_FUNCTION(execConvertBooleanArrayToList); \
	DECLARE_FUNCTION(execConvertListToArray); \
	DECLARE_FUNCTION(execConvertArrayToList); \
	DECLARE_FUNCTION(execConvertVectorMapToObject); \
	DECLARE_FUNCTION(execConvertTransformMapToObject); \
	DECLARE_FUNCTION(execConvertRotatorMapToObject); \
	DECLARE_FUNCTION(execConvertLinearColorMapToObject); \
	DECLARE_FUNCTION(execConvertColorMapToObject); \
	DECLARE_FUNCTION(execConvertGuidMapToObject); \
	DECLARE_FUNCTION(execConvertDateTimeMapToObject); \
	DECLARE_FUNCTION(execConvertStringMapToObject); \
	DECLARE_FUNCTION(execConvertIntegerMapToObject); \
	DECLARE_FUNCTION(execConvertFloatMapToObject); \
	DECLARE_FUNCTION(execConvertBooleanMapToObject); \
	DECLARE_FUNCTION(execConvertObjectToMap); \
	DECLARE_FUNCTION(execConvertMapToObject); \
	DECLARE_FUNCTION(execConvertObjectToVector); \
	DECLARE_FUNCTION(execConvertObjectToTransform); \
	DECLARE_FUNCTION(execConvertObjectToRotator); \
	DECLARE_FUNCTION(execConvertObjectToLinearColor); \
	DECLARE_FUNCTION(execConvertVectorToObject); \
	DECLARE_FUNCTION(execConvertTransformToObject); \
	DECLARE_FUNCTION(execConvertRotatorToObject); \
	DECLARE_FUNCTION(execConvertLinearColorToObject); \
	DECLARE_FUNCTION(execToVectorMap); \
	DECLARE_FUNCTION(execToTransformMap); \
	DECLARE_FUNCTION(execToRotatorMap); \
	DECLARE_FUNCTION(execToLinearColorMap); \
	DECLARE_FUNCTION(execToColorMap); \
	DECLARE_FUNCTION(execToGuidMap); \
	DECLARE_FUNCTION(execToDateTimeMap); \
	DECLARE_FUNCTION(execToStringMap); \
	DECLARE_FUNCTION(execToIntegerMap); \
	DECLARE_FUNCTION(execToFloatMap); \
	DECLARE_FUNCTION(execToBooleanMap); \
	DECLARE_FUNCTION(execToObjectArray); \
	DECLARE_FUNCTION(execToVectorArray); \
	DECLARE_FUNCTION(execToTransformArray); \
	DECLARE_FUNCTION(execToRotatorArray); \
	DECLARE_FUNCTION(execToLinearColorArray); \
	DECLARE_FUNCTION(execToColorArray); \
	DECLARE_FUNCTION(execToGuidArray); \
	DECLARE_FUNCTION(execToDateTimeArray); \
	DECLARE_FUNCTION(execToStringArray); \
	DECLARE_FUNCTION(execToIntegerArray); \
	DECLARE_FUNCTION(execToFloatArray); \
	DECLARE_FUNCTION(execToBooleanArray); \
	DECLARE_FUNCTION(execToMap); \
	DECLARE_FUNCTION(execToArray); \
	DECLARE_FUNCTION(execToList); \
	DECLARE_FUNCTION(execToObject); \
	DECLARE_FUNCTION(execToVector); \
	DECLARE_FUNCTION(execToTransform); \
	DECLARE_FUNCTION(execToRotator); \
	DECLARE_FUNCTION(execToLinearColor); \
	DECLARE_FUNCTION(execToColor); \
	DECLARE_FUNCTION(execToGuid); \
	DECLARE_FUNCTION(execToDateTime); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execToInteger); \
	DECLARE_FUNCTION(execToFloat); \
	DECLARE_FUNCTION(execToBoolean); \
	DECLARE_FUNCTION(execFromVectorMap); \
	DECLARE_FUNCTION(execFromTransformMap); \
	DECLARE_FUNCTION(execFromRotatorMap); \
	DECLARE_FUNCTION(execFromLinearColorMap); \
	DECLARE_FUNCTION(execFromColorMap); \
	DECLARE_FUNCTION(execFromGuidMap); \
	DECLARE_FUNCTION(execFromDateTimeMap); \
	DECLARE_FUNCTION(execFromStringMap); \
	DECLARE_FUNCTION(execFromIntegerMap); \
	DECLARE_FUNCTION(execFromFloatMap); \
	DECLARE_FUNCTION(execFromBooleanMap); \
	DECLARE_FUNCTION(execFromObjectArray); \
	DECLARE_FUNCTION(execFromVectorArray); \
	DECLARE_FUNCTION(execFromTransformArray); \
	DECLARE_FUNCTION(execFromRotatorArray); \
	DECLARE_FUNCTION(execFromLinearColorArray); \
	DECLARE_FUNCTION(execFromColorArray); \
	DECLARE_FUNCTION(execFromGuidArray); \
	DECLARE_FUNCTION(execFromDateTimeArray); \
	DECLARE_FUNCTION(execFromStringArray); \
	DECLARE_FUNCTION(execFromIntegerArray); \
	DECLARE_FUNCTION(execFromFloatArray); \
	DECLARE_FUNCTION(execFromBooleanArray); \
	DECLARE_FUNCTION(execFromMap); \
	DECLARE_FUNCTION(execFromArray); \
	DECLARE_FUNCTION(execFromList); \
	DECLARE_FUNCTION(execFromObject); \
	DECLARE_FUNCTION(execFromVector); \
	DECLARE_FUNCTION(execFromTransform); \
	DECLARE_FUNCTION(execFromRotator); \
	DECLARE_FUNCTION(execFromLinearColor); \
	DECLARE_FUNCTION(execFromColor); \
	DECLARE_FUNCTION(execFromGuid); \
	DECLARE_FUNCTION(execFromDateTime); \
	DECLARE_FUNCTION(execFromString); \
	DECLARE_FUNCTION(execFromInteger); \
	DECLARE_FUNCTION(execFromFloat); \
	DECLARE_FUNCTION(execFromBoolean); \
	DECLARE_FUNCTION(execConstructMap); \
	DECLARE_FUNCTION(execConstructArray); \
	DECLARE_FUNCTION(execConstructList); \
	DECLARE_FUNCTION(execConstructObject); \
	DECLARE_FUNCTION(execConstructNull); \
	DECLARE_FUNCTION(execParseList); \
	DECLARE_FUNCTION(execParseObject); \
	DECLARE_FUNCTION(execParse);


#define FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonLibraryHelpers(); \
	friend struct Z_Construct_UClass_UJsonLibraryHelpers_Statics; \
public: \
	DECLARE_CLASS(UJsonLibraryHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JsonLibrary"), NO_API) \
	DECLARE_SERIALIZER(UJsonLibraryHelpers)


#define FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUJsonLibraryHelpers(); \
	friend struct Z_Construct_UClass_UJsonLibraryHelpers_Statics; \
public: \
	DECLARE_CLASS(UJsonLibraryHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JsonLibrary"), NO_API) \
	DECLARE_SERIALIZER(UJsonLibraryHelpers)


#define FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonLibraryHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonLibraryHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonLibraryHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonLibraryHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonLibraryHelpers(UJsonLibraryHelpers&&); \
	NO_API UJsonLibraryHelpers(const UJsonLibraryHelpers&); \
public:


#define FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonLibraryHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonLibraryHelpers(UJsonLibraryHelpers&&); \
	NO_API UJsonLibraryHelpers(const UJsonLibraryHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonLibraryHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonLibraryHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonLibraryHelpers)


#define FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_10_PROLOG
#define FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_SPARSE_DATA \
	FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_RPC_WRAPPERS \
	FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_INCLASS \
	FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_SPARSE_DATA \
	FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JSONLIBRARY_API UClass* StaticClass<class UJsonLibraryHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_JsonLibrary_Source_JsonLibrary_Public_JsonLibraryHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
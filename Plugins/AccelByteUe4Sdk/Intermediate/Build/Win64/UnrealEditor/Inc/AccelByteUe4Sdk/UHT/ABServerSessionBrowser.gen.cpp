// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerSessionBrowser.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSessionBrowserCreateRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSessionBrowserUpdateRequest.h"
#include "Runtime/JsonUtilities/Public/JsonObjectWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerSessionBrowser() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerSessionBrowser();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerSessionBrowser_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserAddPlayerResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserGetResultResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserRecentPlayerGetResultResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserCreateRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserUpdateRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerSessionBrowser Function CreateGameSessionPrivate
struct Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics
{
	struct ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms
	{
		FString GameMode;
		FString GameMapName;
		FString GameVersion;
		int32 BotCount;
		int32 MaxPlayer;
		int32 MaxSpectator;
		FString Password;
		FJsonObjectWrapper OtherSettings;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BotCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpectator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherSettings;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, GameMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMapName_MetaData), NewProp_GameMapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, BotCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, MaxPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxSpectator = { "MaxSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, MaxSpectator), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherSettings_MetaData), NewProp_OtherSettings_MetaData) }; // 3936905286
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 65174955
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_BotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxSpectator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OtherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "CreateGameSessionPrivate", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::ABServerSessionBrowser_eventCreateGameSessionPrivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execCreateGameSessionPrivate)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMapName);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameVersion);
	P_GET_PROPERTY(FIntProperty,Z_Param_BotCount);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxSpectator);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_OtherSettings);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGameSessionPrivate(Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_MaxSpectator,Z_Param_Password,Z_Param_Out_OtherSettings,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function CreateGameSessionPrivate

// Begin Class UABServerSessionBrowser Function CreateGameSessionPublic
struct Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics
{
	struct ABServerSessionBrowser_eventCreateGameSessionPublic_Parms
	{
		FString GameMode;
		FString GameMapName;
		FString GameVersion;
		int32 BotCount;
		int32 MaxPlayer;
		FJsonObjectWrapper OtherSettings;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BotCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherSettings;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, GameMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMapName_MetaData), NewProp_GameMapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, BotCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, MaxPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherSettings_MetaData), NewProp_OtherSettings_MetaData) }; // 3936905286
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 65174955
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionPublic_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_BotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_MaxPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OtherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "CreateGameSessionPublic", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::ABServerSessionBrowser_eventCreateGameSessionPublic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::ABServerSessionBrowser_eventCreateGameSessionPublic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execCreateGameSessionPublic)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMapName);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameVersion);
	P_GET_PROPERTY(FIntProperty,Z_Param_BotCount);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_OtherSettings);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGameSessionPublic(Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_Out_OtherSettings,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function CreateGameSessionPublic

// Begin Class UABServerSessionBrowser Function CreateGameSessionTypeSpecificByStruct
struct Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics
{
	struct ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms
	{
		FAccelByteModelsSessionBrowserCreateRequest CreateSessionRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateSessionRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateSessionRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_CreateSessionRequest = { "CreateSessionRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms, CreateSessionRequest), Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserCreateRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateSessionRequest_MetaData), NewProp_CreateSessionRequest_MetaData) }; // 1140434390
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 65174955
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_CreateSessionRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "CreateGameSessionTypeSpecificByStruct", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::ABServerSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execCreateGameSessionTypeSpecificByStruct)
{
	P_GET_STRUCT_REF(FAccelByteModelsSessionBrowserCreateRequest,Z_Param_Out_CreateSessionRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGameSessionTypeSpecificByStruct(Z_Param_Out_CreateSessionRequest,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function CreateGameSessionTypeSpecificByStruct

// Begin Class UABServerSessionBrowser Function CreateGameSessionTypeSpecifiedByEnum
struct Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics
{
	struct ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms
	{
		EAccelByteSessionType SessionType;
		FString GameMode;
		FString GameMapName;
		FString GameVersion;
		int32 BotCount;
		int32 MaxPlayer;
		int32 MaxSpectator;
		FString Password;
		FJsonObjectWrapper OtherSettings;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BotCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpectator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherSettings;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, SessionType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType, METADATA_PARAMS(0, nullptr) }; // 281339950
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, GameMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMapName_MetaData), NewProp_GameMapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, BotCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, MaxPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxSpectator = { "MaxSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, MaxSpectator), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherSettings_MetaData), NewProp_OtherSettings_MetaData) }; // 3936905286
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 65174955
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_BotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxSpectator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OtherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "CreateGameSessionTypeSpecifiedByEnum", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execCreateGameSessionTypeSpecifiedByEnum)
{
	P_GET_ENUM(EAccelByteSessionType,Z_Param_SessionType);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMapName);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameVersion);
	P_GET_PROPERTY(FIntProperty,Z_Param_BotCount);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxSpectator);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_OtherSettings);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGameSessionTypeSpecifiedByEnum(EAccelByteSessionType(Z_Param_SessionType),Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_MaxSpectator,Z_Param_Password,Z_Param_Out_OtherSettings,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function CreateGameSessionTypeSpecifiedByEnum

// Begin Class UABServerSessionBrowser Function CreateGameSessionTypeSpecifiedByString
struct Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics
{
	struct ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms
	{
		FString SessionTypeString;
		FString GameMode;
		FString GameMapName;
		FString GameVersion;
		int32 BotCount;
		int32 MaxPlayer;
		int32 MaxSpectator;
		FString Password;
		FJsonObjectWrapper OtherSettings;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionTypeString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionTypeString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BotCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpectator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherSettings;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_SessionTypeString = { "SessionTypeString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, SessionTypeString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionTypeString_MetaData), NewProp_SessionTypeString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, GameMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMapName_MetaData), NewProp_GameMapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, BotCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, MaxPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxSpectator = { "MaxSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, MaxSpectator), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherSettings_MetaData), NewProp_OtherSettings_MetaData) }; // 3936905286
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 65174955
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_SessionTypeString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_BotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxSpectator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OtherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "CreateGameSessionTypeSpecifiedByString", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::ABServerSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execCreateGameSessionTypeSpecifiedByString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionTypeString);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMapName);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameVersion);
	P_GET_PROPERTY(FIntProperty,Z_Param_BotCount);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxSpectator);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_OtherSettings);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGameSessionTypeSpecifiedByString(Z_Param_SessionTypeString,Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_MaxSpectator,Z_Param_Password,Z_Param_Out_OtherSettings,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function CreateGameSessionTypeSpecifiedByString

// Begin Class UABServerSessionBrowser Function GetGameSessionsByTypeEnum
struct Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics
{
	struct ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms
	{
		EAccelByteSessionType SessionType;
		FString GameMode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, SessionType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType, METADATA_PARAMS(0, nullptr) }; // 281339950
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4016026225
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "GetGameSessionsByTypeEnum", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::ABServerSessionBrowser_eventGetGameSessionsByTypeEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execGetGameSessionsByTypeEnum)
{
	P_GET_ENUM(EAccelByteSessionType,Z_Param_SessionType);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameSessionsByTypeEnum(EAccelByteSessionType(Z_Param_SessionType),Z_Param_GameMode,FDServerSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function GetGameSessionsByTypeEnum

// Begin Class UABServerSessionBrowser Function GetGameSessionsByTypeEnumAndMatchExist
struct Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics
{
	struct ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms
	{
		EAccelByteSessionType SessionType;
		FString GameMode;
		FString MatchExist;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchExist_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchExist;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, SessionType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType, METADATA_PARAMS(0, nullptr) }; // 281339950
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_MatchExist = { "MatchExist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, MatchExist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchExist_MetaData), NewProp_MatchExist_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4016026225
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_MatchExist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "GetGameSessionsByTypeEnumAndMatchExist", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::ABServerSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execGetGameSessionsByTypeEnumAndMatchExist)
{
	P_GET_ENUM(EAccelByteSessionType,Z_Param_SessionType);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchExist);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameSessionsByTypeEnumAndMatchExist(EAccelByteSessionType(Z_Param_SessionType),Z_Param_GameMode,Z_Param_MatchExist,FDServerSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function GetGameSessionsByTypeEnumAndMatchExist

// Begin Class UABServerSessionBrowser Function GetGameSessionsByTypeString
struct Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics
{
	struct ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms
	{
		FString SessionTypeString;
		FString GameMode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionTypeString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionTypeString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_SessionTypeString = { "SessionTypeString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, SessionTypeString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionTypeString_MetaData), NewProp_SessionTypeString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4016026225
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_SessionTypeString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "GetGameSessionsByTypeString", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::ABServerSessionBrowser_eventGetGameSessionsByTypeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execGetGameSessionsByTypeString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionTypeString);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameSessionsByTypeString(Z_Param_SessionTypeString,Z_Param_GameMode,FDServerSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function GetGameSessionsByTypeString

// Begin Class UABServerSessionBrowser Function GetGameSessionsByTypeStringAndMatchExist
struct Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics
{
	struct ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms
	{
		FString SessionTypeString;
		FString GameMode;
		FString MatchExist;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionTypeString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchExist_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionTypeString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchExist;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_SessionTypeString = { "SessionTypeString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, SessionTypeString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionTypeString_MetaData), NewProp_SessionTypeString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_MatchExist = { "MatchExist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, MatchExist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchExist_MetaData), NewProp_MatchExist_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4016026225
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_SessionTypeString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_MatchExist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "GetGameSessionsByTypeStringAndMatchExist", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::ABServerSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execGetGameSessionsByTypeStringAndMatchExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionTypeString);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchExist);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameSessionsByTypeStringAndMatchExist(Z_Param_SessionTypeString,Z_Param_GameMode,Z_Param_MatchExist,FDServerSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function GetGameSessionsByTypeStringAndMatchExist

// Begin Class UABServerSessionBrowser Function GetRecentPlayer
struct Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics
{
	struct ABServerSessionBrowser_eventGetRecentPlayer_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetRecentPlayer_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetRecentPlayer_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserRecentPlayerGetResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3207507431
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetRecentPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetRecentPlayer_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventGetRecentPlayer_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "GetRecentPlayer", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::ABServerSessionBrowser_eventGetRecentPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::ABServerSessionBrowser_eventGetRecentPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execGetRecentPlayer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRecentPlayer(Z_Param_UserId,FDServerSessionBrowserRecentPlayerGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function GetRecentPlayer

// Begin Class UABServerSessionBrowser Function JoinSession
struct Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics
{
	struct ABServerSessionBrowser_eventJoinSession_Parms
	{
		FString SessionId;
		FString Password;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventJoinSession_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventJoinSession_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventJoinSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 65174955
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventJoinSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "JoinSession", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::ABServerSessionBrowser_eventJoinSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::ABServerSessionBrowser_eventJoinSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_JoinSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_JoinSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execJoinSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinSession(Z_Param_SessionId,Z_Param_Password,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function JoinSession

// Begin Class UABServerSessionBrowser Function RegisterPlayer
struct Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics
{
	struct ABServerSessionBrowser_eventRegisterPlayer_Parms
	{
		FString SessionId;
		FString PlayerToAdd;
		bool AsSpectator;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerToAdd;
	static void NewProp_AsSpectator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AsSpectator;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRegisterPlayer_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_PlayerToAdd = { "PlayerToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRegisterPlayer_Parms, PlayerToAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerToAdd_MetaData), NewProp_PlayerToAdd_MetaData) };
void Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator_SetBit(void* Obj)
{
	((ABServerSessionBrowser_eventRegisterPlayer_Parms*)Obj)->AsSpectator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator = { "AsSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABServerSessionBrowser_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRegisterPlayer_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserAddPlayerResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 369977313
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRegisterPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_PlayerToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "RegisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::ABServerSessionBrowser_eventRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::ABServerSessionBrowser_eventRegisterPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execRegisterPlayer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerToAdd);
	P_GET_UBOOL(Z_Param_AsSpectator);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPlayer(Z_Param_SessionId,Z_Param_PlayerToAdd,Z_Param_AsSpectator,FDServerSessionBrowserAddPlayerResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function RegisterPlayer

// Begin Class UABServerSessionBrowser Function RemoveGameSession
struct Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics
{
	struct ABServerSessionBrowser_eventRemoveGameSession_Parms
	{
		FString SessionId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRemoveGameSession_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRemoveGameSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 65174955
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventRemoveGameSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "RemoveGameSession", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::ABServerSessionBrowser_eventRemoveGameSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::ABServerSessionBrowser_eventRemoveGameSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execRemoveGameSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameSession(Z_Param_SessionId,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function RemoveGameSession

// Begin Class UABServerSessionBrowser Function UnregisterPlayer
struct Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics
{
	struct ABServerSessionBrowser_eventUnregisterPlayer_Parms
	{
		FString SessionId;
		FString PlayerToRemove;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerToRemove;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUnregisterPlayer_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_PlayerToRemove = { "PlayerToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUnregisterPlayer_Parms, PlayerToRemove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerToRemove_MetaData), NewProp_PlayerToRemove_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUnregisterPlayer_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserAddPlayerResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 369977313
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUnregisterPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_PlayerToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "UnregisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::ABServerSessionBrowser_eventUnregisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::ABServerSessionBrowser_eventUnregisterPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execUnregisterPlayer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerToRemove);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterPlayer(Z_Param_SessionId,Z_Param_PlayerToRemove,FDServerSessionBrowserAddPlayerResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function UnregisterPlayer

// Begin Class UABServerSessionBrowser Function UpdateGameSession
struct Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics
{
	struct ABServerSessionBrowser_eventUpdateGameSession_Parms
	{
		FString SessionId;
		int32 MaxPlayer;
		int32 CurrentPlayerCount;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayerCount;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSession_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSession_Parms, MaxPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_CurrentPlayerCount = { "CurrentPlayerCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSession_Parms, CurrentPlayerCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 65174955
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_MaxPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_CurrentPlayerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "UpdateGameSession", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::ABServerSessionBrowser_eventUpdateGameSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::ABServerSessionBrowser_eventUpdateGameSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execUpdateGameSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentPlayerCount);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGameSession(Z_Param_SessionId,Z_Param_MaxPlayer,Z_Param_CurrentPlayerCount,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function UpdateGameSession

// Begin Class UABServerSessionBrowser Function UpdateGameSessionByStruct
struct Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics
{
	struct ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms
	{
		FString SessionId;
		FAccelByteModelsSessionBrowserUpdateRequest UpdateSessionRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateSessionRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateSessionRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_UpdateSessionRequest = { "UpdateSessionRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms, UpdateSessionRequest), Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserUpdateRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateSessionRequest_MetaData), NewProp_UpdateSessionRequest_MetaData) }; // 1532103668
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 65174955
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_UpdateSessionRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerSessionBrowser, nullptr, "UpdateGameSessionByStruct", nullptr, nullptr, Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::ABServerSessionBrowser_eventUpdateGameSessionByStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerSessionBrowser::execUpdateGameSessionByStruct)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_STRUCT_REF(FAccelByteModelsSessionBrowserUpdateRequest,Z_Param_Out_UpdateSessionRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGameSessionByStruct(Z_Param_SessionId,Z_Param_Out_UpdateSessionRequest,FDServerSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerSessionBrowser Function UpdateGameSessionByStruct

// Begin Class UABServerSessionBrowser
void UABServerSessionBrowser::StaticRegisterNativesUABServerSessionBrowser()
{
	UClass* Class = UABServerSessionBrowser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateGameSessionPrivate", &UABServerSessionBrowser::execCreateGameSessionPrivate },
		{ "CreateGameSessionPublic", &UABServerSessionBrowser::execCreateGameSessionPublic },
		{ "CreateGameSessionTypeSpecificByStruct", &UABServerSessionBrowser::execCreateGameSessionTypeSpecificByStruct },
		{ "CreateGameSessionTypeSpecifiedByEnum", &UABServerSessionBrowser::execCreateGameSessionTypeSpecifiedByEnum },
		{ "CreateGameSessionTypeSpecifiedByString", &UABServerSessionBrowser::execCreateGameSessionTypeSpecifiedByString },
		{ "GetGameSessionsByTypeEnum", &UABServerSessionBrowser::execGetGameSessionsByTypeEnum },
		{ "GetGameSessionsByTypeEnumAndMatchExist", &UABServerSessionBrowser::execGetGameSessionsByTypeEnumAndMatchExist },
		{ "GetGameSessionsByTypeString", &UABServerSessionBrowser::execGetGameSessionsByTypeString },
		{ "GetGameSessionsByTypeStringAndMatchExist", &UABServerSessionBrowser::execGetGameSessionsByTypeStringAndMatchExist },
		{ "GetRecentPlayer", &UABServerSessionBrowser::execGetRecentPlayer },
		{ "JoinSession", &UABServerSessionBrowser::execJoinSession },
		{ "RegisterPlayer", &UABServerSessionBrowser::execRegisterPlayer },
		{ "RemoveGameSession", &UABServerSessionBrowser::execRemoveGameSession },
		{ "UnregisterPlayer", &UABServerSessionBrowser::execUnregisterPlayer },
		{ "UpdateGameSession", &UABServerSessionBrowser::execUpdateGameSession },
		{ "UpdateGameSessionByStruct", &UABServerSessionBrowser::execUpdateGameSessionByStruct },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerSessionBrowser);
UClass* Z_Construct_UClass_UABServerSessionBrowser_NoRegister()
{
	return UABServerSessionBrowser::StaticClass();
}
struct Z_Construct_UClass_UABServerSessionBrowser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerSessionBrowser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerSessionBrowser.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPrivate, "CreateGameSessionPrivate" }, // 2936260451
		{ &Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionPublic, "CreateGameSessionPublic" }, // 824788157
		{ &Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecificByStruct, "CreateGameSessionTypeSpecificByStruct" }, // 2334443681
		{ &Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByEnum, "CreateGameSessionTypeSpecifiedByEnum" }, // 534454260
		{ &Z_Construct_UFunction_UABServerSessionBrowser_CreateGameSessionTypeSpecifiedByString, "CreateGameSessionTypeSpecifiedByString" }, // 2702316265
		{ &Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnum, "GetGameSessionsByTypeEnum" }, // 2887151107
		{ &Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist, "GetGameSessionsByTypeEnumAndMatchExist" }, // 3855659216
		{ &Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeString, "GetGameSessionsByTypeString" }, // 3787410804
		{ &Z_Construct_UFunction_UABServerSessionBrowser_GetGameSessionsByTypeStringAndMatchExist, "GetGameSessionsByTypeStringAndMatchExist" }, // 2054014955
		{ &Z_Construct_UFunction_UABServerSessionBrowser_GetRecentPlayer, "GetRecentPlayer" }, // 606811420
		{ &Z_Construct_UFunction_UABServerSessionBrowser_JoinSession, "JoinSession" }, // 1296950114
		{ &Z_Construct_UFunction_UABServerSessionBrowser_RegisterPlayer, "RegisterPlayer" }, // 905216199
		{ &Z_Construct_UFunction_UABServerSessionBrowser_RemoveGameSession, "RemoveGameSession" }, // 3261239446
		{ &Z_Construct_UFunction_UABServerSessionBrowser_UnregisterPlayer, "UnregisterPlayer" }, // 1024413619
		{ &Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSession, "UpdateGameSession" }, // 1043807054
		{ &Z_Construct_UFunction_UABServerSessionBrowser_UpdateGameSessionByStruct, "UpdateGameSessionByStruct" }, // 3098502932
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerSessionBrowser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerSessionBrowser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerSessionBrowser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerSessionBrowser_Statics::ClassParams = {
	&UABServerSessionBrowser::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerSessionBrowser_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerSessionBrowser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerSessionBrowser()
{
	if (!Z_Registration_Info_UClass_UABServerSessionBrowser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerSessionBrowser.OuterSingleton, Z_Construct_UClass_UABServerSessionBrowser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerSessionBrowser.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerSessionBrowser>()
{
	return UABServerSessionBrowser::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerSessionBrowser);
UABServerSessionBrowser::~UABServerSessionBrowser() {}
// End Class UABServerSessionBrowser

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerSessionBrowser, UABServerSessionBrowser::StaticClass, TEXT("UABServerSessionBrowser"), &Z_Registration_Info_UClass_UABServerSessionBrowser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerSessionBrowser), 2751195713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_1560052545(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

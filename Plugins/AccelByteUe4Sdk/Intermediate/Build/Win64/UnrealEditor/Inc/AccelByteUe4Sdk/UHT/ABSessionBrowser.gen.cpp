// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABSessionBrowser.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSessionBrowserCreateRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSessionBrowserUpdateRequest.h"
#include "Runtime/JsonUtilities/Public/JsonObjectWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSessionBrowser() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSessionBrowser();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSessionBrowser_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserAddPlayerResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserGetResultByUserIdsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserGetResultResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserRecentPlayerGetResultResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserCreateRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserUpdateRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABSessionBrowser Function CreateGameSessionPrivate
struct Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics
{
	struct ABSessionBrowser_eventCreateGameSessionPrivate_Parms
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
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPrivate_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPrivate_Parms, GameMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMapName_MetaData), NewProp_GameMapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPrivate_Parms, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPrivate_Parms, BotCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPrivate_Parms, MaxPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxSpectator = { "MaxSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPrivate_Parms, MaxSpectator), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPrivate_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPrivate_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherSettings_MetaData), NewProp_OtherSettings_MetaData) }; // 3936905286
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPrivate_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPrivate_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_GameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_BotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_MaxSpectator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OtherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "CreateGameSessionPrivate", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::ABSessionBrowser_eventCreateGameSessionPrivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::ABSessionBrowser_eventCreateGameSessionPrivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execCreateGameSessionPrivate)
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
	P_THIS->CreateGameSessionPrivate(Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_MaxSpectator,Z_Param_Password,Z_Param_Out_OtherSettings,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function CreateGameSessionPrivate

// Begin Class UABSessionBrowser Function CreateGameSessionPublic
struct Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics
{
	struct ABSessionBrowser_eventCreateGameSessionPublic_Parms
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
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPublic_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPublic_Parms, GameMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMapName_MetaData), NewProp_GameMapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPublic_Parms, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPublic_Parms, BotCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPublic_Parms, MaxPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPublic_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherSettings_MetaData), NewProp_OtherSettings_MetaData) }; // 3936905286
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPublic_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionPublic_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_GameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_BotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_MaxPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OtherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "CreateGameSessionPublic", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::ABSessionBrowser_eventCreateGameSessionPublic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::ABSessionBrowser_eventCreateGameSessionPublic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execCreateGameSessionPublic)
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
	P_THIS->CreateGameSessionPublic(Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_Out_OtherSettings,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function CreateGameSessionPublic

// Begin Class UABSessionBrowser Function CreateGameSessionTypeSpecificByStruct
struct Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics
{
	struct ABSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms
	{
		FAccelByteModelsSessionBrowserCreateRequest CreateSessionRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_CreateSessionRequest = { "CreateSessionRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms, CreateSessionRequest), Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserCreateRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateSessionRequest_MetaData), NewProp_CreateSessionRequest_MetaData) }; // 1140434390
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_CreateSessionRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "CreateGameSessionTypeSpecificByStruct", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::ABSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::ABSessionBrowser_eventCreateGameSessionTypeSpecificByStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execCreateGameSessionTypeSpecificByStruct)
{
	P_GET_STRUCT_REF(FAccelByteModelsSessionBrowserCreateRequest,Z_Param_Out_CreateSessionRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGameSessionTypeSpecificByStruct(Z_Param_Out_CreateSessionRequest,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function CreateGameSessionTypeSpecificByStruct

// Begin Class UABSessionBrowser Function CreateGameSessionTypeSpecifiedByEnum
struct Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics
{
	struct ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms
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
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, SessionType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType, METADATA_PARAMS(0, nullptr) }; // 281339950
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, GameMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMapName_MetaData), NewProp_GameMapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, BotCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, MaxPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxSpectator = { "MaxSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, MaxSpectator), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherSettings_MetaData), NewProp_OtherSettings_MetaData) }; // 3936905286
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_SessionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_GameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_BotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_MaxSpectator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OtherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "CreateGameSessionTypeSpecifiedByEnum", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execCreateGameSessionTypeSpecifiedByEnum)
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
	P_THIS->CreateGameSessionTypeSpecifiedByEnum(EAccelByteSessionType(Z_Param_SessionType),Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_MaxSpectator,Z_Param_Password,Z_Param_Out_OtherSettings,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function CreateGameSessionTypeSpecifiedByEnum

// Begin Class UABSessionBrowser Function CreateGameSessionTypeSpecifiedByString
struct Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics
{
	struct ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms
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
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_SessionTypeString = { "SessionTypeString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, SessionTypeString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionTypeString_MetaData), NewProp_SessionTypeString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMapName = { "GameMapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, GameMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMapName_MetaData), NewProp_GameMapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, BotCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, MaxPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxSpectator = { "MaxSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, MaxSpectator), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OtherSettings = { "OtherSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, OtherSettings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherSettings_MetaData), NewProp_OtherSettings_MetaData) }; // 3936905286
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_SessionTypeString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_GameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_BotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_MaxSpectator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OtherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "CreateGameSessionTypeSpecifiedByString", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::ABSessionBrowser_eventCreateGameSessionTypeSpecifiedByString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execCreateGameSessionTypeSpecifiedByString)
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
	P_THIS->CreateGameSessionTypeSpecifiedByString(Z_Param_SessionTypeString,Z_Param_GameMode,Z_Param_GameMapName,Z_Param_GameVersion,Z_Param_BotCount,Z_Param_MaxPlayer,Z_Param_MaxSpectator,Z_Param_Password,Z_Param_Out_OtherSettings,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function CreateGameSessionTypeSpecifiedByString

// Begin Class UABSessionBrowser Function GetGameSession
struct Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics
{
	struct ABSessionBrowser_eventGetGameSession_Parms
	{
		FString SessionId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSession_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "GetGameSession", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::ABSessionBrowser_eventGetGameSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::ABSessionBrowser_eventGetGameSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_GetGameSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_GetGameSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execGetGameSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameSession(Z_Param_SessionId,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function GetGameSession

// Begin Class UABSessionBrowser Function GetGameSessionsByTypeEnum
struct Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics
{
	struct ABSessionBrowser_eventGetGameSessionsByTypeEnum_Parms
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
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, SessionType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType, METADATA_PARAMS(0, nullptr) }; // 281339950
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2179981382
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnum_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_SessionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "GetGameSessionsByTypeEnum", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::ABSessionBrowser_eventGetGameSessionsByTypeEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::ABSessionBrowser_eventGetGameSessionsByTypeEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execGetGameSessionsByTypeEnum)
{
	P_GET_ENUM(EAccelByteSessionType,Z_Param_SessionType);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameSessionsByTypeEnum(EAccelByteSessionType(Z_Param_SessionType),Z_Param_GameMode,FDModelsSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function GetGameSessionsByTypeEnum

// Begin Class UABSessionBrowser Function GetGameSessionsByTypeEnumAndMatchExist
struct Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics
{
	struct ABSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms
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
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, SessionType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSessionType, METADATA_PARAMS(0, nullptr) }; // 281339950
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_MatchExist = { "MatchExist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, MatchExist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchExist_MetaData), NewProp_MatchExist_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2179981382
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_SessionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_MatchExist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "GetGameSessionsByTypeEnumAndMatchExist", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::ABSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::ABSessionBrowser_eventGetGameSessionsByTypeEnumAndMatchExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execGetGameSessionsByTypeEnumAndMatchExist)
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
	P_THIS->GetGameSessionsByTypeEnumAndMatchExist(EAccelByteSessionType(Z_Param_SessionType),Z_Param_GameMode,Z_Param_MatchExist,FDModelsSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function GetGameSessionsByTypeEnumAndMatchExist

// Begin Class UABSessionBrowser Function GetGameSessionsByTypeString
struct Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics
{
	struct ABSessionBrowser_eventGetGameSessionsByTypeString_Parms
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
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_SessionTypeString = { "SessionTypeString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeString_Parms, SessionTypeString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionTypeString_MetaData), NewProp_SessionTypeString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeString_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeString_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2179981382
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeString_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeString_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeString_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_SessionTypeString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "GetGameSessionsByTypeString", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::ABSessionBrowser_eventGetGameSessionsByTypeString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::ABSessionBrowser_eventGetGameSessionsByTypeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execGetGameSessionsByTypeString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionTypeString);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameMode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameSessionsByTypeString(Z_Param_SessionTypeString,Z_Param_GameMode,FDModelsSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function GetGameSessionsByTypeString

// Begin Class UABSessionBrowser Function GetGameSessionsByTypeStringAndMatchExist
struct Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics
{
	struct ABSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms
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
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_SessionTypeString = { "SessionTypeString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, SessionTypeString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionTypeString_MetaData), NewProp_SessionTypeString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_MatchExist = { "MatchExist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, MatchExist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchExist_MetaData), NewProp_MatchExist_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserGetResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2179981382
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_SessionTypeString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_MatchExist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "GetGameSessionsByTypeStringAndMatchExist", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::ABSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::ABSessionBrowser_eventGetGameSessionsByTypeStringAndMatchExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execGetGameSessionsByTypeStringAndMatchExist)
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
	P_THIS->GetGameSessionsByTypeStringAndMatchExist(Z_Param_SessionTypeString,Z_Param_GameMode,Z_Param_MatchExist,FDModelsSessionBrowserGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function GetGameSessionsByTypeStringAndMatchExist

// Begin Class UABSessionBrowser Function GetGameSessionsByUserIds
struct Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics
{
	struct ABSessionBrowser_eventGetGameSessionsByUserIds_Parms
	{
		TArray<FString> UserIds;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserIds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByUserIds_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIds_MetaData), NewProp_UserIds_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByUserIds_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserGetResultByUserIdsResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1898500915
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetGameSessionsByUserIds_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::NewProp_UserIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::NewProp_UserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "GetGameSessionsByUserIds", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::ABSessionBrowser_eventGetGameSessionsByUserIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::ABSessionBrowser_eventGetGameSessionsByUserIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execGetGameSessionsByUserIds)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_UserIds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameSessionsByUserIds(Z_Param_Out_UserIds,FDModelsSessionBrowserGetResultByUserIdsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function GetGameSessionsByUserIds

// Begin Class UABSessionBrowser Function GetRecentPlayer
struct Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics
{
	struct ABSessionBrowser_eventGetRecentPlayer_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetRecentPlayer_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetRecentPlayer_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserRecentPlayerGetResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1023537721
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetRecentPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetRecentPlayer_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventGetRecentPlayer_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "GetRecentPlayer", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::ABSessionBrowser_eventGetRecentPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::ABSessionBrowser_eventGetRecentPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execGetRecentPlayer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRecentPlayer(Z_Param_UserId,FDModelsSessionBrowserRecentPlayerGetResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function GetRecentPlayer

// Begin Class UABSessionBrowser Function JoinSession
struct Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics
{
	struct ABSessionBrowser_eventJoinSession_Parms
	{
		FString SessionId;
		FString Password;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventJoinSession_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventJoinSession_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventJoinSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventJoinSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "JoinSession", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::ABSessionBrowser_eventJoinSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::ABSessionBrowser_eventJoinSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_JoinSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_JoinSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execJoinSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinSession(Z_Param_SessionId,Z_Param_Password,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function JoinSession

// Begin Class UABSessionBrowser Function RegisterPlayer
struct Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics
{
	struct ABSessionBrowser_eventRegisterPlayer_Parms
	{
		FString SessionId;
		FString PlayerToAdd;
		bool AsSpectator;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventRegisterPlayer_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_PlayerToAdd = { "PlayerToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventRegisterPlayer_Parms, PlayerToAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerToAdd_MetaData), NewProp_PlayerToAdd_MetaData) };
void Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator_SetBit(void* Obj)
{
	((ABSessionBrowser_eventRegisterPlayer_Parms*)Obj)->AsSpectator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator = { "AsSpectator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABSessionBrowser_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventRegisterPlayer_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserAddPlayerResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3734003171
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventRegisterPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_PlayerToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_AsSpectator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "RegisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::ABSessionBrowser_eventRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::ABSessionBrowser_eventRegisterPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execRegisterPlayer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerToAdd);
	P_GET_UBOOL(Z_Param_AsSpectator);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPlayer(Z_Param_SessionId,Z_Param_PlayerToAdd,Z_Param_AsSpectator,FDModelsSessionBrowserAddPlayerResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function RegisterPlayer

// Begin Class UABSessionBrowser Function RemoveGameSession
struct Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics
{
	struct ABSessionBrowser_eventRemoveGameSession_Parms
	{
		FString SessionId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventRemoveGameSession_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventRemoveGameSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventRemoveGameSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "RemoveGameSession", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::ABSessionBrowser_eventRemoveGameSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::ABSessionBrowser_eventRemoveGameSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execRemoveGameSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameSession(Z_Param_SessionId,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function RemoveGameSession

// Begin Class UABSessionBrowser Function UnregisterPlayer
struct Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics
{
	struct ABSessionBrowser_eventUnregisterPlayer_Parms
	{
		FString SessionId;
		FString PlayerToRemove;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUnregisterPlayer_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::NewProp_PlayerToRemove = { "PlayerToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUnregisterPlayer_Parms, PlayerToRemove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerToRemove_MetaData), NewProp_PlayerToRemove_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUnregisterPlayer_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserAddPlayerResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3734003171
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUnregisterPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::NewProp_PlayerToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "UnregisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::ABSessionBrowser_eventUnregisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::ABSessionBrowser_eventUnregisterPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execUnregisterPlayer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerToRemove);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterPlayer(Z_Param_SessionId,Z_Param_PlayerToRemove,FDModelsSessionBrowserAddPlayerResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function UnregisterPlayer

// Begin Class UABSessionBrowser Function UpdateGameSession
struct Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics
{
	struct ABSessionBrowser_eventUpdateGameSession_Parms
	{
		FString SessionId;
		int32 MaxPlayer;
		int32 CurrentPlayerCount;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSession_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSession_Parms, MaxPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::NewProp_CurrentPlayerCount = { "CurrentPlayerCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSession_Parms, CurrentPlayerCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::NewProp_MaxPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::NewProp_CurrentPlayerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "UpdateGameSession", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::ABSessionBrowser_eventUpdateGameSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::ABSessionBrowser_eventUpdateGameSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execUpdateGameSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentPlayerCount);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGameSession(Z_Param_SessionId,Z_Param_MaxPlayer,Z_Param_CurrentPlayerCount,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function UpdateGameSession

// Begin Class UABSessionBrowser Function UpdateGameSessionByStruct
struct Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics
{
	struct ABSessionBrowser_eventUpdateGameSessionByStruct_Parms
	{
		FString SessionId;
		FAccelByteModelsSessionBrowserUpdateRequest UpdateSessionRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSessionByStruct_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_UpdateSessionRequest = { "UpdateSessionRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSessionByStruct_Parms, UpdateSessionRequest), Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserUpdateRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateSessionRequest_MetaData), NewProp_UpdateSessionRequest_MetaData) }; // 1532103668
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSessionByStruct_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSessionByStruct_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_UpdateSessionRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "UpdateGameSessionByStruct", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::ABSessionBrowser_eventUpdateGameSessionByStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::ABSessionBrowser_eventUpdateGameSessionByStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execUpdateGameSessionByStruct)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_STRUCT_REF(FAccelByteModelsSessionBrowserUpdateRequest,Z_Param_Out_UpdateSessionRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGameSessionByStruct(Z_Param_SessionId,Z_Param_Out_UpdateSessionRequest,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function UpdateGameSessionByStruct

// Begin Class UABSessionBrowser Function UpdateGameSettings
struct Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics
{
	struct ABSessionBrowser_eventUpdateGameSettings_Parms
	{
		FString SessionId;
		TMap<FString,FString> Settings;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Settings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Settings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSettings_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_Settings_ValueProp = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_Settings_Key_KeyProp = { "Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSettings_Parms, Settings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSettings_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSettings_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_Settings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_Settings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "UpdateGameSettings", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::ABSessionBrowser_eventUpdateGameSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::ABSessionBrowser_eventUpdateGameSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execUpdateGameSettings)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_Settings);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGameSettings(Z_Param_SessionId,Z_Param_Out_Settings,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function UpdateGameSettings

// Begin Class UABSessionBrowser Function UpdateGameSettingsByJsonObject
struct Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics
{
	struct ABSessionBrowser_eventUpdateGameSettingsByJsonObject_Parms
	{
		FString SessionId;
		FJsonObjectWrapper Settings;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSettingsByJsonObject_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSettingsByJsonObject_Parms, Settings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3936905286
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSettingsByJsonObject_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSessionBrowserDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2103106462
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionBrowser_eventUpdateGameSettingsByJsonObject_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionBrowser, nullptr, "UpdateGameSettingsByJsonObject", nullptr, nullptr, Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::ABSessionBrowser_eventUpdateGameSettingsByJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::ABSessionBrowser_eventUpdateGameSettingsByJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionBrowser::execUpdateGameSettingsByJsonObject)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_Settings);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGameSettingsByJsonObject(Z_Param_SessionId,Z_Param_Out_Settings,FDModelsSessionBrowserDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSessionBrowser Function UpdateGameSettingsByJsonObject

// Begin Class UABSessionBrowser
void UABSessionBrowser::StaticRegisterNativesUABSessionBrowser()
{
	UClass* Class = UABSessionBrowser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateGameSessionPrivate", &UABSessionBrowser::execCreateGameSessionPrivate },
		{ "CreateGameSessionPublic", &UABSessionBrowser::execCreateGameSessionPublic },
		{ "CreateGameSessionTypeSpecificByStruct", &UABSessionBrowser::execCreateGameSessionTypeSpecificByStruct },
		{ "CreateGameSessionTypeSpecifiedByEnum", &UABSessionBrowser::execCreateGameSessionTypeSpecifiedByEnum },
		{ "CreateGameSessionTypeSpecifiedByString", &UABSessionBrowser::execCreateGameSessionTypeSpecifiedByString },
		{ "GetGameSession", &UABSessionBrowser::execGetGameSession },
		{ "GetGameSessionsByTypeEnum", &UABSessionBrowser::execGetGameSessionsByTypeEnum },
		{ "GetGameSessionsByTypeEnumAndMatchExist", &UABSessionBrowser::execGetGameSessionsByTypeEnumAndMatchExist },
		{ "GetGameSessionsByTypeString", &UABSessionBrowser::execGetGameSessionsByTypeString },
		{ "GetGameSessionsByTypeStringAndMatchExist", &UABSessionBrowser::execGetGameSessionsByTypeStringAndMatchExist },
		{ "GetGameSessionsByUserIds", &UABSessionBrowser::execGetGameSessionsByUserIds },
		{ "GetRecentPlayer", &UABSessionBrowser::execGetRecentPlayer },
		{ "JoinSession", &UABSessionBrowser::execJoinSession },
		{ "RegisterPlayer", &UABSessionBrowser::execRegisterPlayer },
		{ "RemoveGameSession", &UABSessionBrowser::execRemoveGameSession },
		{ "UnregisterPlayer", &UABSessionBrowser::execUnregisterPlayer },
		{ "UpdateGameSession", &UABSessionBrowser::execUpdateGameSession },
		{ "UpdateGameSessionByStruct", &UABSessionBrowser::execUpdateGameSessionByStruct },
		{ "UpdateGameSettings", &UABSessionBrowser::execUpdateGameSettings },
		{ "UpdateGameSettingsByJsonObject", &UABSessionBrowser::execUpdateGameSettingsByJsonObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABSessionBrowser);
UClass* Z_Construct_UClass_UABSessionBrowser_NoRegister()
{
	return UABSessionBrowser::StaticClass();
}
struct Z_Construct_UClass_UABSessionBrowser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABSessionBrowser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABSessionBrowser.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPrivate, "CreateGameSessionPrivate" }, // 2968714500
		{ &Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionPublic, "CreateGameSessionPublic" }, // 396945112
		{ &Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecificByStruct, "CreateGameSessionTypeSpecificByStruct" }, // 1181436820
		{ &Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByEnum, "CreateGameSessionTypeSpecifiedByEnum" }, // 32192957
		{ &Z_Construct_UFunction_UABSessionBrowser_CreateGameSessionTypeSpecifiedByString, "CreateGameSessionTypeSpecifiedByString" }, // 1490252415
		{ &Z_Construct_UFunction_UABSessionBrowser_GetGameSession, "GetGameSession" }, // 2124521734
		{ &Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnum, "GetGameSessionsByTypeEnum" }, // 2650752379
		{ &Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeEnumAndMatchExist, "GetGameSessionsByTypeEnumAndMatchExist" }, // 2204377238
		{ &Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeString, "GetGameSessionsByTypeString" }, // 1083345450
		{ &Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByTypeStringAndMatchExist, "GetGameSessionsByTypeStringAndMatchExist" }, // 1837687870
		{ &Z_Construct_UFunction_UABSessionBrowser_GetGameSessionsByUserIds, "GetGameSessionsByUserIds" }, // 2564927709
		{ &Z_Construct_UFunction_UABSessionBrowser_GetRecentPlayer, "GetRecentPlayer" }, // 1038732606
		{ &Z_Construct_UFunction_UABSessionBrowser_JoinSession, "JoinSession" }, // 406702050
		{ &Z_Construct_UFunction_UABSessionBrowser_RegisterPlayer, "RegisterPlayer" }, // 609806373
		{ &Z_Construct_UFunction_UABSessionBrowser_RemoveGameSession, "RemoveGameSession" }, // 1578573137
		{ &Z_Construct_UFunction_UABSessionBrowser_UnregisterPlayer, "UnregisterPlayer" }, // 2932145423
		{ &Z_Construct_UFunction_UABSessionBrowser_UpdateGameSession, "UpdateGameSession" }, // 1834954747
		{ &Z_Construct_UFunction_UABSessionBrowser_UpdateGameSessionByStruct, "UpdateGameSessionByStruct" }, // 3090434747
		{ &Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettings, "UpdateGameSettings" }, // 3249560816
		{ &Z_Construct_UFunction_UABSessionBrowser_UpdateGameSettingsByJsonObject, "UpdateGameSettingsByJsonObject" }, // 1215052044
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABSessionBrowser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABSessionBrowser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABSessionBrowser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABSessionBrowser_Statics::ClassParams = {
	&UABSessionBrowser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABSessionBrowser_Statics::Class_MetaDataParams), Z_Construct_UClass_UABSessionBrowser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABSessionBrowser()
{
	if (!Z_Registration_Info_UClass_UABSessionBrowser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABSessionBrowser.OuterSingleton, Z_Construct_UClass_UABSessionBrowser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABSessionBrowser.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABSessionBrowser>()
{
	return UABSessionBrowser::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABSessionBrowser);
UABSessionBrowser::~UABSessionBrowser() {}
// End Class UABSessionBrowser

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABSessionBrowser, UABSessionBrowser::StaticClass, TEXT("UABSessionBrowser"), &Z_Registration_Info_UClass_UABSessionBrowser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABSessionBrowser), 295893570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_4270723411(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

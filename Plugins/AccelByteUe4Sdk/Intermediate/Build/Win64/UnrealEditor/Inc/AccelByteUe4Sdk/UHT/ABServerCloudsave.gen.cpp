// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerCloudsave.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBulkGetPlayerRecordSizeRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBulkReplaceUserRecordRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerCloudsave() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerCloudsave();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerCloudsave_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsAdminGameRecord__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsAdminGetUserRecords__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsAdminUserRecord__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBulkReplaceUserRecordResponses__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGameRecord__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedBulkGetPlayerRecordSizeResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGetAdminUserRecordKeysResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedRecordsKey__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRecord__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRecords__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkGetPlayerRecordSizeRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkReplaceUserRecordRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerCloudsave Function BulkGetPlayerRecordSize
struct Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics
{
	struct ABServerCloudsave_eventBulkGetPlayerRecordSize_Parms
	{
		FAccelByteModelsBulkGetPlayerRecordSizeRequest GetPlayerRecordSizeRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetPlayerRecordSizeRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GetPlayerRecordSizeRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::NewProp_GetPlayerRecordSizeRequest = { "GetPlayerRecordSizeRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetPlayerRecordSize_Parms, GetPlayerRecordSizeRequest), Z_Construct_UScriptStruct_FAccelByteModelsBulkGetPlayerRecordSizeRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetPlayerRecordSizeRequest_MetaData), NewProp_GetPlayerRecordSizeRequest_MetaData) }; // 1472204238
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetPlayerRecordSize_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedBulkGetPlayerRecordSizeResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1669905860
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetPlayerRecordSize_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::NewProp_GetPlayerRecordSizeRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "BulkGetPlayerRecordSize", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::ABServerCloudsave_eventBulkGetPlayerRecordSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::ABServerCloudsave_eventBulkGetPlayerRecordSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execBulkGetPlayerRecordSize)
{
	P_GET_STRUCT_REF(FAccelByteModelsBulkGetPlayerRecordSizeRequest,Z_Param_Out_GetPlayerRecordSizeRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkGetPlayerRecordSize(Z_Param_Out_GetPlayerRecordSizeRequest,FDModelsPaginatedBulkGetPlayerRecordSizeResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function BulkGetPlayerRecordSize

// Begin Class UABServerCloudsave Function BulkGetUserRecord
struct Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics
{
	struct ABServerCloudsave_eventBulkGetUserRecord_Parms
	{
		FString Key;
		TArray<FString> UserIds;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserIds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetUserRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetUserRecord_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIds_MetaData), NewProp_UserIds_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRecords__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1554234810
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::NewProp_UserIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::NewProp_UserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "BulkGetUserRecord", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::ABServerCloudsave_eventBulkGetUserRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::ABServerCloudsave_eventBulkGetUserRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execBulkGetUserRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_UserIds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkGetUserRecord(Z_Param_Key,Z_Param_Out_UserIds,FDModelsUserRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function BulkGetUserRecord

// Begin Class UABServerCloudsave Function BulkGetUserRecordsByKeys
struct Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics
{
	struct ABServerCloudsave_eventBulkGetUserRecordsByKeys_Parms
	{
		FString UserId;
		TArray<FString> Keys;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetUserRecordsByKeys_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetUserRecordsByKeys_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetUserRecordsByKeys_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsAdminGetUserRecords__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3120778595
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkGetUserRecordsByKeys_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "BulkGetUserRecordsByKeys", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::ABServerCloudsave_eventBulkGetUserRecordsByKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::ABServerCloudsave_eventBulkGetUserRecordsByKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execBulkGetUserRecordsByKeys)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkGetUserRecordsByKeys(Z_Param_UserId,Z_Param_Out_Keys,FDModelsAdminGetUserRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function BulkGetUserRecordsByKeys

// Begin Class UABServerCloudsave Function BulkReplaceUserRecord
struct Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics
{
	struct ABServerCloudsave_eventBulkReplaceUserRecord_Parms
	{
		FString Key;
		FAccelByteModelsBulkReplaceUserRecordRequest Request;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkReplaceUserRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkReplaceUserRecord_Parms, Request), Z_Construct_UScriptStruct_FAccelByteModelsBulkReplaceUserRecordRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1323559364
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkReplaceUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBulkReplaceUserRecordResponses__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3700522576
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventBulkReplaceUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "BulkReplaceUserRecord", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::ABServerCloudsave_eventBulkReplaceUserRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::ABServerCloudsave_eventBulkReplaceUserRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execBulkReplaceUserRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FAccelByteModelsBulkReplaceUserRecordRequest,Z_Param_Out_Request);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkReplaceUserRecord(Z_Param_Key,Z_Param_Out_Request,FDModelsBulkReplaceUserRecordResponses(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function BulkReplaceUserRecord

// Begin Class UABServerCloudsave Function DeleteAdminGameRecord
struct Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics
{
	struct ABServerCloudsave_eventDeleteAdminGameRecord_Parms
	{
		FString Key;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteAdminGameRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteAdminGameRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteAdminGameRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "DeleteAdminGameRecord", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::ABServerCloudsave_eventDeleteAdminGameRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::ABServerCloudsave_eventDeleteAdminGameRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execDeleteAdminGameRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteAdminGameRecord(Z_Param_Key,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function DeleteAdminGameRecord

// Begin Class UABServerCloudsave Function DeleteAdminGameRecordTTLConfig
struct Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics
{
	struct ABServerCloudsave_eventDeleteAdminGameRecordTTLConfig_Parms
	{
		FString Key;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteAdminGameRecordTTLConfig_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteAdminGameRecordTTLConfig_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteAdminGameRecordTTLConfig_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "DeleteAdminGameRecordTTLConfig", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::ABServerCloudsave_eventDeleteAdminGameRecordTTLConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::ABServerCloudsave_eventDeleteAdminGameRecordTTLConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execDeleteAdminGameRecordTTLConfig)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteAdminGameRecordTTLConfig(Z_Param_Key,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function DeleteAdminGameRecordTTLConfig

// Begin Class UABServerCloudsave Function DeleteAdminUserRecord
struct Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics
{
	struct ABServerCloudsave_eventDeleteAdminUserRecord_Parms
	{
		FString Key;
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteAdminUserRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteAdminUserRecord_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteAdminUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteAdminUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "DeleteAdminUserRecord", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::ABServerCloudsave_eventDeleteAdminUserRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::ABServerCloudsave_eventDeleteAdminUserRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execDeleteAdminUserRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteAdminUserRecord(Z_Param_Key,Z_Param_UserId,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function DeleteAdminUserRecord

// Begin Class UABServerCloudsave Function DeleteGameRecord
struct Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics
{
	struct ABServerCloudsave_eventDeleteGameRecord_Parms
	{
		FString Key;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteGameRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteGameRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteGameRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "DeleteGameRecord", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::ABServerCloudsave_eventDeleteGameRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::ABServerCloudsave_eventDeleteGameRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execDeleteGameRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteGameRecord(Z_Param_Key,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function DeleteGameRecord

// Begin Class UABServerCloudsave Function DeleteGameRecordTTLConfig
struct Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics
{
	struct ABServerCloudsave_eventDeleteGameRecordTTLConfig_Parms
	{
		FString Key;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteGameRecordTTLConfig_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteGameRecordTTLConfig_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteGameRecordTTLConfig_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "DeleteGameRecordTTLConfig", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::ABServerCloudsave_eventDeleteGameRecordTTLConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::ABServerCloudsave_eventDeleteGameRecordTTLConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execDeleteGameRecordTTLConfig)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteGameRecordTTLConfig(Z_Param_Key,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function DeleteGameRecordTTLConfig

// Begin Class UABServerCloudsave Function DeleteUserRecord
struct Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics
{
	struct ABServerCloudsave_eventDeleteUserRecord_Parms
	{
		FString Key;
		FString UserId;
		bool bIsPublic;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static void NewProp_bIsPublic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteUserRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteUserRecord_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
void Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_bIsPublic_SetBit(void* Obj)
{
	((ABServerCloudsave_eventDeleteUserRecord_Parms*)Obj)->bIsPublic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABServerCloudsave_eventDeleteUserRecord_Parms), &Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventDeleteUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_bIsPublic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "DeleteUserRecord", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::ABServerCloudsave_eventDeleteUserRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::ABServerCloudsave_eventDeleteUserRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execDeleteUserRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_UBOOL(Z_Param_bIsPublic);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteUserRecord(Z_Param_Key,Z_Param_UserId,Z_Param_bIsPublic,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function DeleteUserRecord

// Begin Class UABServerCloudsave Function GetGameRecord
struct Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics
{
	struct ABServerCloudsave_eventGetGameRecord_Parms
	{
		FString Key;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetGameRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetGameRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGameRecord__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1461474353
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetGameRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "GetGameRecord", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::ABServerCloudsave_eventGetGameRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::ABServerCloudsave_eventGetGameRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_GetGameRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_GetGameRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execGetGameRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameRecord(Z_Param_Key,FDModelsGameRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function GetGameRecord

// Begin Class UABServerCloudsave Function GetPublicUserRecord
struct Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics
{
	struct ABServerCloudsave_eventGetPublicUserRecord_Parms
	{
		FString Key;
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetPublicUserRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetPublicUserRecord_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetPublicUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRecord__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1521077918
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetPublicUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "GetPublicUserRecord", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::ABServerCloudsave_eventGetPublicUserRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::ABServerCloudsave_eventGetPublicUserRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execGetPublicUserRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPublicUserRecord(Z_Param_Key,Z_Param_UserId,FDModelsUserRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function GetPublicUserRecord

// Begin Class UABServerCloudsave Function GetUserRecord
struct Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics
{
	struct ABServerCloudsave_eventGetUserRecord_Parms
	{
		FString Key;
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetUserRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetUserRecord_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRecord__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1521077918
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventGetUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "GetUserRecord", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::ABServerCloudsave_eventGetUserRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::ABServerCloudsave_eventGetUserRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_GetUserRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_GetUserRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execGetUserRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserRecord(Z_Param_Key,Z_Param_UserId,FDModelsUserRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function GetUserRecord

// Begin Class UABServerCloudsave Function QueryAdminGameRecordKeys
struct Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics
{
	struct ABServerCloudsave_eventQueryAdminGameRecordKeys_Parms
	{
		int32 Limit;
		int32 Offset;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminGameRecordKeys_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminGameRecordKeys_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminGameRecordKeys_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedRecordsKey__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2518183815
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminGameRecordKeys_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "QueryAdminGameRecordKeys", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::ABServerCloudsave_eventQueryAdminGameRecordKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::ABServerCloudsave_eventQueryAdminGameRecordKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execQueryAdminGameRecordKeys)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryAdminGameRecordKeys(Z_Param_Limit,Z_Param_Offset,FDModelsPaginatedRecordsKey(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function QueryAdminGameRecordKeys

// Begin Class UABServerCloudsave Function QueryAdminGameRecordsByKey
struct Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics
{
	struct ABServerCloudsave_eventQueryAdminGameRecordsByKey_Parms
	{
		FString Key;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminGameRecordsByKey_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminGameRecordsByKey_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsAdminGameRecord__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1955917448
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminGameRecordsByKey_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "QueryAdminGameRecordsByKey", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::ABServerCloudsave_eventQueryAdminGameRecordsByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::ABServerCloudsave_eventQueryAdminGameRecordsByKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execQueryAdminGameRecordsByKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryAdminGameRecordsByKey(Z_Param_Key,FDModelsAdminGameRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function QueryAdminGameRecordsByKey

// Begin Class UABServerCloudsave Function QueryAdminUserRecordKeys
struct Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics
{
	struct ABServerCloudsave_eventQueryAdminUserRecordKeys_Parms
	{
		FString UserId;
		int32 Limit;
		int32 Offset;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminUserRecordKeys_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminUserRecordKeys_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminUserRecordKeys_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminUserRecordKeys_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGetAdminUserRecordKeysResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2933229155
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminUserRecordKeys_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "QueryAdminUserRecordKeys", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::ABServerCloudsave_eventQueryAdminUserRecordKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::ABServerCloudsave_eventQueryAdminUserRecordKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execQueryAdminUserRecordKeys)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryAdminUserRecordKeys(Z_Param_UserId,Z_Param_Limit,Z_Param_Offset,FDModelsPaginatedGetAdminUserRecordKeysResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function QueryAdminUserRecordKeys

// Begin Class UABServerCloudsave Function QueryAdminUserRecordsByKey
struct Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics
{
	struct ABServerCloudsave_eventQueryAdminUserRecordsByKey_Parms
	{
		FString Key;
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminUserRecordsByKey_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminUserRecordsByKey_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminUserRecordsByKey_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsAdminUserRecord__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4043790830
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventQueryAdminUserRecordsByKey_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "QueryAdminUserRecordsByKey", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::ABServerCloudsave_eventQueryAdminUserRecordsByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::ABServerCloudsave_eventQueryAdminUserRecordsByKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execQueryAdminUserRecordsByKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryAdminUserRecordsByKey(Z_Param_Key,Z_Param_UserId,FDModelsAdminUserRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function QueryAdminUserRecordsByKey

// Begin Class UABServerCloudsave Function RetrieveGameRecordsKey
struct Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics
{
	struct ABServerCloudsave_eventRetrieveGameRecordsKey_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		FString Query;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventRetrieveGameRecordsKey_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedRecordsKey__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2518183815
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventRetrieveGameRecordsKey_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventRetrieveGameRecordsKey_Parms, Query), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventRetrieveGameRecordsKey_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCloudsave_eventRetrieveGameRecordsKey_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCloudsave, nullptr, "RetrieveGameRecordsKey", nullptr, nullptr, Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::ABServerCloudsave_eventRetrieveGameRecordsKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::ABServerCloudsave_eventRetrieveGameRecordsKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCloudsave::execRetrieveGameRecordsKey)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FStrProperty,Z_Param_Query);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RetrieveGameRecordsKey(FDModelsPaginatedRecordsKey(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Query,Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABServerCloudsave Function RetrieveGameRecordsKey

// Begin Class UABServerCloudsave
void UABServerCloudsave::StaticRegisterNativesUABServerCloudsave()
{
	UClass* Class = UABServerCloudsave::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulkGetPlayerRecordSize", &UABServerCloudsave::execBulkGetPlayerRecordSize },
		{ "BulkGetUserRecord", &UABServerCloudsave::execBulkGetUserRecord },
		{ "BulkGetUserRecordsByKeys", &UABServerCloudsave::execBulkGetUserRecordsByKeys },
		{ "BulkReplaceUserRecord", &UABServerCloudsave::execBulkReplaceUserRecord },
		{ "DeleteAdminGameRecord", &UABServerCloudsave::execDeleteAdminGameRecord },
		{ "DeleteAdminGameRecordTTLConfig", &UABServerCloudsave::execDeleteAdminGameRecordTTLConfig },
		{ "DeleteAdminUserRecord", &UABServerCloudsave::execDeleteAdminUserRecord },
		{ "DeleteGameRecord", &UABServerCloudsave::execDeleteGameRecord },
		{ "DeleteGameRecordTTLConfig", &UABServerCloudsave::execDeleteGameRecordTTLConfig },
		{ "DeleteUserRecord", &UABServerCloudsave::execDeleteUserRecord },
		{ "GetGameRecord", &UABServerCloudsave::execGetGameRecord },
		{ "GetPublicUserRecord", &UABServerCloudsave::execGetPublicUserRecord },
		{ "GetUserRecord", &UABServerCloudsave::execGetUserRecord },
		{ "QueryAdminGameRecordKeys", &UABServerCloudsave::execQueryAdminGameRecordKeys },
		{ "QueryAdminGameRecordsByKey", &UABServerCloudsave::execQueryAdminGameRecordsByKey },
		{ "QueryAdminUserRecordKeys", &UABServerCloudsave::execQueryAdminUserRecordKeys },
		{ "QueryAdminUserRecordsByKey", &UABServerCloudsave::execQueryAdminUserRecordsByKey },
		{ "RetrieveGameRecordsKey", &UABServerCloudsave::execRetrieveGameRecordsKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerCloudsave);
UClass* Z_Construct_UClass_UABServerCloudsave_NoRegister()
{
	return UABServerCloudsave::StaticClass();
}
struct Z_Construct_UClass_UABServerCloudsave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerCloudsave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerCloudsave.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerCloudsave_BulkGetPlayerRecordSize, "BulkGetPlayerRecordSize" }, // 1645540917
		{ &Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecord, "BulkGetUserRecord" }, // 2330655806
		{ &Z_Construct_UFunction_UABServerCloudsave_BulkGetUserRecordsByKeys, "BulkGetUserRecordsByKeys" }, // 1024061793
		{ &Z_Construct_UFunction_UABServerCloudsave_BulkReplaceUserRecord, "BulkReplaceUserRecord" }, // 2401547380
		{ &Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecord, "DeleteAdminGameRecord" }, // 800527273
		{ &Z_Construct_UFunction_UABServerCloudsave_DeleteAdminGameRecordTTLConfig, "DeleteAdminGameRecordTTLConfig" }, // 2172557328
		{ &Z_Construct_UFunction_UABServerCloudsave_DeleteAdminUserRecord, "DeleteAdminUserRecord" }, // 3307418508
		{ &Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecord, "DeleteGameRecord" }, // 3349570483
		{ &Z_Construct_UFunction_UABServerCloudsave_DeleteGameRecordTTLConfig, "DeleteGameRecordTTLConfig" }, // 1543821885
		{ &Z_Construct_UFunction_UABServerCloudsave_DeleteUserRecord, "DeleteUserRecord" }, // 1671333613
		{ &Z_Construct_UFunction_UABServerCloudsave_GetGameRecord, "GetGameRecord" }, // 3110443184
		{ &Z_Construct_UFunction_UABServerCloudsave_GetPublicUserRecord, "GetPublicUserRecord" }, // 3977588342
		{ &Z_Construct_UFunction_UABServerCloudsave_GetUserRecord, "GetUserRecord" }, // 2685217617
		{ &Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordKeys, "QueryAdminGameRecordKeys" }, // 3124324835
		{ &Z_Construct_UFunction_UABServerCloudsave_QueryAdminGameRecordsByKey, "QueryAdminGameRecordsByKey" }, // 3759565870
		{ &Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordKeys, "QueryAdminUserRecordKeys" }, // 2593797428
		{ &Z_Construct_UFunction_UABServerCloudsave_QueryAdminUserRecordsByKey, "QueryAdminUserRecordsByKey" }, // 2253265554
		{ &Z_Construct_UFunction_UABServerCloudsave_RetrieveGameRecordsKey, "RetrieveGameRecordsKey" }, // 4066974563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerCloudsave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerCloudsave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerCloudsave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerCloudsave_Statics::ClassParams = {
	&UABServerCloudsave::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerCloudsave_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerCloudsave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerCloudsave()
{
	if (!Z_Registration_Info_UClass_UABServerCloudsave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerCloudsave.OuterSingleton, Z_Construct_UClass_UABServerCloudsave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerCloudsave.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerCloudsave>()
{
	return UABServerCloudsave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerCloudsave);
UABServerCloudsave::~UABServerCloudsave() {}
// End Class UABServerCloudsave

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerCloudsave, UABServerCloudsave::StaticClass, TEXT("UABServerCloudsave"), &Z_Registration_Info_UClass_UABServerCloudsave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerCloudsave), 2899052467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_4084236926(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

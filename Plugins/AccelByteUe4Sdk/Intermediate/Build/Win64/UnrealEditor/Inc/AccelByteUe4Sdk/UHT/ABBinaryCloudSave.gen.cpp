// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABBinaryCloudSave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABBinaryCloudSave() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABBinaryCloudSave();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABBinaryCloudSave_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBinaryInfo__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGameBinaryRecord__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListGameBinaryRecords__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserBinaryRecords__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGameBinaryRecords__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserBinaryRecords__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserBinaryRecord__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABBinaryCloudSave Function BulkGetCurrentUserBinaryRecords
struct Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics
{
	struct ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms
	{
		TArray<FString> Keys;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserBinaryRecords__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2560078649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkGetCurrentUserBinaryRecords", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execBulkGetCurrentUserBinaryRecords)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkGetCurrentUserBinaryRecords(Z_Param_Out_Keys,FDModelsListUserBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function BulkGetCurrentUserBinaryRecords

// Begin Class UABBinaryCloudSave Function BulkGetGameBinaryRecords
struct Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics
{
	struct ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms
	{
		TArray<FString> Keys;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListGameBinaryRecords__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3821998776
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkGetGameBinaryRecords", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execBulkGetGameBinaryRecords)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkGetGameBinaryRecords(Z_Param_Out_Keys,FDModelsListGameBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function BulkGetGameBinaryRecords

// Begin Class UABBinaryCloudSave Function BulkGetPublicUserBinaryRecordsByKeys
struct Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics
{
	struct ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms
	{
		TArray<FString> Keys;
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserBinaryRecords__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2560078649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkGetPublicUserBinaryRecordsByKeys", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execBulkGetPublicUserBinaryRecordsByKeys)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkGetPublicUserBinaryRecordsByKeys(Z_Param_Out_Keys,Z_Param_UserId,FDModelsListUserBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function BulkGetPublicUserBinaryRecordsByKeys

// Begin Class UABBinaryCloudSave Function BulkGetPublicUserBinaryRecordsByUserIds
struct Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics
{
	struct ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms
	{
		FString Key;
		TArray<FString> UserIds;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIds_MetaData), NewProp_UserIds_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserBinaryRecords__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2560078649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkGetPublicUserBinaryRecordsByUserIds", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execBulkGetPublicUserBinaryRecordsByUserIds)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_UserIds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkGetPublicUserBinaryRecordsByUserIds(Z_Param_Key,Z_Param_Out_UserIds,FDModelsListUserBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function BulkGetPublicUserBinaryRecordsByUserIds

// Begin Class UABBinaryCloudSave Function BulkQueryCurrentUserBinaryRecords
struct Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics
{
	struct ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms
	{
		FString Query;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms, Query), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserBinaryRecords__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3830239143
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkQueryCurrentUserBinaryRecords", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execBulkQueryCurrentUserBinaryRecords)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Query);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkQueryCurrentUserBinaryRecords(Z_Param_Query,FDModelsPaginatedUserBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function BulkQueryCurrentUserBinaryRecords

// Begin Class UABBinaryCloudSave Function BulkQueryGameBinaryRecords
struct Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics
{
	struct ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms
	{
		FString Query;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms, Query), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGameBinaryRecords__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 655258574
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkQueryGameBinaryRecords", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execBulkQueryGameBinaryRecords)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Query);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkQueryGameBinaryRecords(Z_Param_Query,FDModelsPaginatedGameBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function BulkQueryGameBinaryRecords

// Begin Class UABBinaryCloudSave Function BulkQueryPublicUserBinaryRecords
struct Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics
{
	struct ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserBinaryRecords__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3830239143
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkQueryPublicUserBinaryRecords", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execBulkQueryPublicUserBinaryRecords)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkQueryPublicUserBinaryRecords(Z_Param_UserId,FDModelsPaginatedUserBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function BulkQueryPublicUserBinaryRecords

// Begin Class UABBinaryCloudSave Function DeleteUserBinaryRecord
struct Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics
{
	struct ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms
	{
		FString Key;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "DeleteUserBinaryRecord", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execDeleteUserBinaryRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteUserBinaryRecord(Z_Param_Key,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function DeleteUserBinaryRecord

// Begin Class UABBinaryCloudSave Function GetCurrentUserBinaryRecord
struct Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics
{
	struct ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms
	{
		FString Key;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserBinaryRecord__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1945058700
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "GetCurrentUserBinaryRecord", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execGetCurrentUserBinaryRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentUserBinaryRecord(Z_Param_Key,FDModelsUserBinaryRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function GetCurrentUserBinaryRecord

// Begin Class UABBinaryCloudSave Function GetGameBinaryRecord
struct Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics
{
	struct ABBinaryCloudSave_eventGetGameBinaryRecord_Parms
	{
		FString Key;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetGameBinaryRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetGameBinaryRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGameBinaryRecord__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1657675189
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetGameBinaryRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "GetGameBinaryRecord", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::ABBinaryCloudSave_eventGetGameBinaryRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::ABBinaryCloudSave_eventGetGameBinaryRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execGetGameBinaryRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameBinaryRecord(Z_Param_Key,FDModelsGameBinaryRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function GetGameBinaryRecord

// Begin Class UABBinaryCloudSave Function GetPublicUserBinaryRecord
struct Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics
{
	struct ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms
	{
		FString Key;
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserBinaryRecord__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1945058700
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "GetPublicUserBinaryRecord", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execGetPublicUserBinaryRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPublicUserBinaryRecord(Z_Param_Key,Z_Param_UserId,FDModelsUserBinaryRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function GetPublicUserBinaryRecord

// Begin Class UABBinaryCloudSave Function RequestUserBinaryRecordPresignedUrl
struct Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics
{
	struct ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms
	{
		FString Key;
		FString FileType;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms, FileType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileType_MetaData), NewProp_FileType_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBinaryInfo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2185379443
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "RequestUserBinaryRecordPresignedUrl", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execRequestUserBinaryRecordPresignedUrl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestUserBinaryRecordPresignedUrl(Z_Param_Key,Z_Param_FileType,FDModelsBinaryInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function RequestUserBinaryRecordPresignedUrl

// Begin Class UABBinaryCloudSave Function SaveUserBinaryRecord
struct Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics
{
	struct ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms
	{
		FString Key;
		bool bIsPublic;
		FString FileType;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[] = {
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
	static void NewProp_bIsPublic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_bIsPublic_SetBit(void* Obj)
{
	((ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms*)Obj)->bIsPublic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms), &Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms, FileType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileType_MetaData), NewProp_FileType_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_bIsPublic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "SaveUserBinaryRecord", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execSaveUserBinaryRecord)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_bIsPublic);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveUserBinaryRecord(Z_Param_Key,Z_Param_bIsPublic,Z_Param_FileType,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function SaveUserBinaryRecord

// Begin Class UABBinaryCloudSave Function UpdateUserBinaryRecordFile
struct Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics
{
	struct ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms
	{
		FString Key;
		FString FileType;
		FString FileLocation;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileLocation_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileLocation;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms, FileType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileType_MetaData), NewProp_FileType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileLocation = { "FileLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms, FileLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileLocation_MetaData), NewProp_FileLocation_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserBinaryRecord__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1945058700
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "UpdateUserBinaryRecordFile", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execUpdateUserBinaryRecordFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileLocation);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateUserBinaryRecordFile(Z_Param_Key,Z_Param_FileType,Z_Param_FileLocation,FDModelsUserBinaryRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function UpdateUserBinaryRecordFile

// Begin Class UABBinaryCloudSave Function UpdateUserBinaryRecordMetadata
struct Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics
{
	struct ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms
	{
		FString Key;
		bool bIsPublic;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
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
	static void NewProp_bIsPublic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_bIsPublic_SetBit(void* Obj)
{
	((ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms*)Obj)->bIsPublic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms), &Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserBinaryRecord__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1945058700
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_bIsPublic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "UpdateUserBinaryRecordMetadata", nullptr, nullptr, Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBinaryCloudSave::execUpdateUserBinaryRecordMetadata)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_bIsPublic);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateUserBinaryRecordMetadata(Z_Param_Key,Z_Param_bIsPublic,FDModelsUserBinaryRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABBinaryCloudSave Function UpdateUserBinaryRecordMetadata

// Begin Class UABBinaryCloudSave
void UABBinaryCloudSave::StaticRegisterNativesUABBinaryCloudSave()
{
	UClass* Class = UABBinaryCloudSave::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulkGetCurrentUserBinaryRecords", &UABBinaryCloudSave::execBulkGetCurrentUserBinaryRecords },
		{ "BulkGetGameBinaryRecords", &UABBinaryCloudSave::execBulkGetGameBinaryRecords },
		{ "BulkGetPublicUserBinaryRecordsByKeys", &UABBinaryCloudSave::execBulkGetPublicUserBinaryRecordsByKeys },
		{ "BulkGetPublicUserBinaryRecordsByUserIds", &UABBinaryCloudSave::execBulkGetPublicUserBinaryRecordsByUserIds },
		{ "BulkQueryCurrentUserBinaryRecords", &UABBinaryCloudSave::execBulkQueryCurrentUserBinaryRecords },
		{ "BulkQueryGameBinaryRecords", &UABBinaryCloudSave::execBulkQueryGameBinaryRecords },
		{ "BulkQueryPublicUserBinaryRecords", &UABBinaryCloudSave::execBulkQueryPublicUserBinaryRecords },
		{ "DeleteUserBinaryRecord", &UABBinaryCloudSave::execDeleteUserBinaryRecord },
		{ "GetCurrentUserBinaryRecord", &UABBinaryCloudSave::execGetCurrentUserBinaryRecord },
		{ "GetGameBinaryRecord", &UABBinaryCloudSave::execGetGameBinaryRecord },
		{ "GetPublicUserBinaryRecord", &UABBinaryCloudSave::execGetPublicUserBinaryRecord },
		{ "RequestUserBinaryRecordPresignedUrl", &UABBinaryCloudSave::execRequestUserBinaryRecordPresignedUrl },
		{ "SaveUserBinaryRecord", &UABBinaryCloudSave::execSaveUserBinaryRecord },
		{ "UpdateUserBinaryRecordFile", &UABBinaryCloudSave::execUpdateUserBinaryRecordFile },
		{ "UpdateUserBinaryRecordMetadata", &UABBinaryCloudSave::execUpdateUserBinaryRecordMetadata },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABBinaryCloudSave);
UClass* Z_Construct_UClass_UABBinaryCloudSave_NoRegister()
{
	return UABBinaryCloudSave::StaticClass();
}
struct Z_Construct_UClass_UABBinaryCloudSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABBinaryCloudSave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords, "BulkGetCurrentUserBinaryRecords" }, // 2576222299
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords, "BulkGetGameBinaryRecords" }, // 831745038
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys, "BulkGetPublicUserBinaryRecordsByKeys" }, // 1684971757
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds, "BulkGetPublicUserBinaryRecordsByUserIds" }, // 3967876033
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords, "BulkQueryCurrentUserBinaryRecords" }, // 2032238217
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords, "BulkQueryGameBinaryRecords" }, // 3012476377
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords, "BulkQueryPublicUserBinaryRecords" }, // 1010189614
		{ &Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord, "DeleteUserBinaryRecord" }, // 286358119
		{ &Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord, "GetCurrentUserBinaryRecord" }, // 2719035288
		{ &Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord, "GetGameBinaryRecord" }, // 2577209975
		{ &Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord, "GetPublicUserBinaryRecord" }, // 1584504352
		{ &Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl, "RequestUserBinaryRecordPresignedUrl" }, // 2975722921
		{ &Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord, "SaveUserBinaryRecord" }, // 3481047253
		{ &Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile, "UpdateUserBinaryRecordFile" }, // 2670289633
		{ &Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata, "UpdateUserBinaryRecordMetadata" }, // 3428536963
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABBinaryCloudSave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABBinaryCloudSave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABBinaryCloudSave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABBinaryCloudSave_Statics::ClassParams = {
	&UABBinaryCloudSave::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABBinaryCloudSave_Statics::Class_MetaDataParams), Z_Construct_UClass_UABBinaryCloudSave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABBinaryCloudSave()
{
	if (!Z_Registration_Info_UClass_UABBinaryCloudSave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABBinaryCloudSave.OuterSingleton, Z_Construct_UClass_UABBinaryCloudSave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABBinaryCloudSave.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABBinaryCloudSave>()
{
	return UABBinaryCloudSave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABBinaryCloudSave);
UABBinaryCloudSave::~UABBinaryCloudSave() {}
// End Class UABBinaryCloudSave

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABBinaryCloudSave, UABBinaryCloudSave::StaticClass, TEXT("UABBinaryCloudSave"), &Z_Registration_Info_UClass_UABBinaryCloudSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABBinaryCloudSave), 930552503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_2816416676(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

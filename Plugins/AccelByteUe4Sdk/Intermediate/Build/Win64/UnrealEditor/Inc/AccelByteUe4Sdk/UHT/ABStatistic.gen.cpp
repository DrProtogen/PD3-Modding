// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABStatistic.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBulkStatItemInc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABStatistic() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABStatistic();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABStatistic_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsBulkStatItemOperationResultResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGlobalStatItemDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGlobalStatItemPagingSlicedResultResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsStatItemValueResponses__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserStatItemPagingSlicedResultResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABStatistic Function BulkFetchStatItemsValue
struct Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics
{
	struct ABStatistic_eventBulkFetchStatItemsValue_Parms
	{
		FString StatCode;
		TArray<FString> UserIds;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserIds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventBulkFetchStatItemsValue_Parms, StatCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCode_MetaData), NewProp_StatCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventBulkFetchStatItemsValue_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIds_MetaData), NewProp_UserIds_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventBulkFetchStatItemsValue_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsStatItemValueResponses__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2115593929
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventBulkFetchStatItemsValue_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::NewProp_StatCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABStatistic, nullptr, "BulkFetchStatItemsValue", nullptr, nullptr, Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::ABStatistic_eventBulkFetchStatItemsValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::ABStatistic_eventBulkFetchStatItemsValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABStatistic::execBulkFetchStatItemsValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatCode);
	P_GET_TARRAY_REF(FString,Z_Param_Out_UserIds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkFetchStatItemsValue(Z_Param_StatCode,Z_Param_Out_UserIds,FDModelsStatItemValueResponses(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABStatistic Function BulkFetchStatItemsValue

// Begin Class UABStatistic Function CreateUserStatItems
struct Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics
{
	struct ABStatistic_eventCreateUserStatItems_Parms
	{
		TArray<FString> StatCodes;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCodes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatCodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatCodes;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::NewProp_StatCodes_Inner = { "StatCodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::NewProp_StatCodes = { "StatCodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventCreateUserStatItems_Parms, StatCodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCodes_MetaData), NewProp_StatCodes_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventCreateUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsBulkStatItemOperationResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2714564940
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventCreateUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::NewProp_StatCodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::NewProp_StatCodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABStatistic, nullptr, "CreateUserStatItems", nullptr, nullptr, Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::ABStatistic_eventCreateUserStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::ABStatistic_eventCreateUserStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABStatistic_CreateUserStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABStatistic_CreateUserStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABStatistic::execCreateUserStatItems)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_StatCodes);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateUserStatItems(Z_Param_Out_StatCodes,FDArrayModelsBulkStatItemOperationResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABStatistic Function CreateUserStatItems

// Begin Class UABStatistic Function GetAllUserStatItems
struct Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics
{
	struct ABStatistic_eventGetAllUserStatItems_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
		EAccelByteStatisticSortBy SortBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetAllUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserStatItemPagingSlicedResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3862971314
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetAllUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetAllUserStatItems_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetAllUserStatItems_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetAllUserStatItems_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy, METADATA_PARAMS(0, nullptr) }; // 3191525829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::NewProp_SortBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABStatistic, nullptr, "GetAllUserStatItems", nullptr, nullptr, Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::ABStatistic_eventGetAllUserStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::ABStatistic_eventGetAllUserStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABStatistic_GetAllUserStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABStatistic_GetAllUserStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABStatistic::execGetAllUserStatItems)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_ENUM(EAccelByteStatisticSortBy,Z_Param_SortBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllUserStatItems(FDModelsUserStatItemPagingSlicedResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset,EAccelByteStatisticSortBy(Z_Param_SortBy));
	P_NATIVE_END;
}
// End Class UABStatistic Function GetAllUserStatItems

// Begin Class UABStatistic Function GetGlobalStatItemsByStatCode
struct Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics
{
	struct ABStatistic_eventGetGlobalStatItemsByStatCode_Parms
	{
		FString StatCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetGlobalStatItemsByStatCode_Parms, StatCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCode_MetaData), NewProp_StatCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetGlobalStatItemsByStatCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGlobalStatItemDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1730725766
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetGlobalStatItemsByStatCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_StatCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABStatistic, nullptr, "GetGlobalStatItemsByStatCode", nullptr, nullptr, Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::ABStatistic_eventGetGlobalStatItemsByStatCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::ABStatistic_eventGetGlobalStatItemsByStatCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABStatistic::execGetGlobalStatItemsByStatCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGlobalStatItemsByStatCode(Z_Param_StatCode,FDModelsGlobalStatItemDelegate(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABStatistic Function GetGlobalStatItemsByStatCode

// Begin Class UABStatistic Function GetUserStatItems
struct Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics
{
	struct ABStatistic_eventGetUserStatItems_Parms
	{
		TArray<FString> StatCodes;
		TArray<FString> Tags;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
		EAccelByteStatisticSortBy SortBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCodes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatCodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatCodes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_StatCodes_Inner = { "StatCodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_StatCodes = { "StatCodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetUserStatItems_Parms, StatCodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCodes_MetaData), NewProp_StatCodes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetUserStatItems_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserStatItemPagingSlicedResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3862971314
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetUserStatItems_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetUserStatItems_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventGetUserStatItems_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy, METADATA_PARAMS(0, nullptr) }; // 3191525829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_StatCodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_StatCodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::NewProp_SortBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABStatistic, nullptr, "GetUserStatItems", nullptr, nullptr, Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::ABStatistic_eventGetUserStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::ABStatistic_eventGetUserStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABStatistic_GetUserStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABStatistic_GetUserStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABStatistic::execGetUserStatItems)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_StatCodes);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_ENUM(EAccelByteStatisticSortBy,Z_Param_SortBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserStatItems(Z_Param_Out_StatCodes,Z_Param_Out_Tags,FDModelsUserStatItemPagingSlicedResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset,EAccelByteStatisticSortBy(Z_Param_SortBy));
	P_NATIVE_END;
}
// End Class UABStatistic Function GetUserStatItems

// Begin Class UABStatistic Function IncrementUserStatItems
struct Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics
{
	struct ABStatistic_eventIncrementUserStatItems_Parms
	{
		TArray<FAccelByteModelsBulkStatItemInc> Data;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc, METADATA_PARAMS(0, nullptr) }; // 1863839079
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventIncrementUserStatItems_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1863839079
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventIncrementUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsBulkStatItemOperationResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2714564940
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventIncrementUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABStatistic, nullptr, "IncrementUserStatItems", nullptr, nullptr, Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::ABStatistic_eventIncrementUserStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::ABStatistic_eventIncrementUserStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABStatistic_IncrementUserStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABStatistic_IncrementUserStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABStatistic::execIncrementUserStatItems)
{
	P_GET_TARRAY_REF(FAccelByteModelsBulkStatItemInc,Z_Param_Out_Data);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementUserStatItems(Z_Param_Out_Data,FDArrayModelsBulkStatItemOperationResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABStatistic Function IncrementUserStatItems

// Begin Class UABStatistic Function ListGlobalStatItems
struct Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics
{
	struct ABStatistic_eventListGlobalStatItems_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventListGlobalStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGlobalStatItemPagingSlicedResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1400022614
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventListGlobalStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventListGlobalStatItems_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventListGlobalStatItems_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABStatistic, nullptr, "ListGlobalStatItems", nullptr, nullptr, Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::ABStatistic_eventListGlobalStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::ABStatistic_eventListGlobalStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABStatistic_ListGlobalStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABStatistic_ListGlobalStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABStatistic::execListGlobalStatItems)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ListGlobalStatItems(FDModelsGlobalStatItemPagingSlicedResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABStatistic Function ListGlobalStatItems

// Begin Class UABStatistic Function ListGlobalStatItemsWithFilter
struct Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics
{
	struct ABStatistic_eventListGlobalStatItemsWithFilter_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		TArray<FString> StatCodesFilter;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCodesFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatCodesFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatCodesFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventListGlobalStatItemsWithFilter_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGlobalStatItemPagingSlicedResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1400022614
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventListGlobalStatItemsWithFilter_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_StatCodesFilter_Inner = { "StatCodesFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_StatCodesFilter = { "StatCodesFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventListGlobalStatItemsWithFilter_Parms, StatCodesFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCodesFilter_MetaData), NewProp_StatCodesFilter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventListGlobalStatItemsWithFilter_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStatistic_eventListGlobalStatItemsWithFilter_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_StatCodesFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_StatCodesFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABStatistic, nullptr, "ListGlobalStatItemsWithFilter", nullptr, nullptr, Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::ABStatistic_eventListGlobalStatItemsWithFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::ABStatistic_eventListGlobalStatItemsWithFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABStatistic::execListGlobalStatItemsWithFilter)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_TARRAY_REF(FString,Z_Param_Out_StatCodesFilter);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ListGlobalStatItemsWithFilter(FDModelsGlobalStatItemPagingSlicedResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_StatCodesFilter,Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABStatistic Function ListGlobalStatItemsWithFilter

// Begin Class UABStatistic
void UABStatistic::StaticRegisterNativesUABStatistic()
{
	UClass* Class = UABStatistic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulkFetchStatItemsValue", &UABStatistic::execBulkFetchStatItemsValue },
		{ "CreateUserStatItems", &UABStatistic::execCreateUserStatItems },
		{ "GetAllUserStatItems", &UABStatistic::execGetAllUserStatItems },
		{ "GetGlobalStatItemsByStatCode", &UABStatistic::execGetGlobalStatItemsByStatCode },
		{ "GetUserStatItems", &UABStatistic::execGetUserStatItems },
		{ "IncrementUserStatItems", &UABStatistic::execIncrementUserStatItems },
		{ "ListGlobalStatItems", &UABStatistic::execListGlobalStatItems },
		{ "ListGlobalStatItemsWithFilter", &UABStatistic::execListGlobalStatItemsWithFilter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABStatistic);
UClass* Z_Construct_UClass_UABStatistic_NoRegister()
{
	return UABStatistic::StaticClass();
}
struct Z_Construct_UClass_UABStatistic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABStatistic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABStatistic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABStatistic_BulkFetchStatItemsValue, "BulkFetchStatItemsValue" }, // 3790804005
		{ &Z_Construct_UFunction_UABStatistic_CreateUserStatItems, "CreateUserStatItems" }, // 3704391048
		{ &Z_Construct_UFunction_UABStatistic_GetAllUserStatItems, "GetAllUserStatItems" }, // 671674000
		{ &Z_Construct_UFunction_UABStatistic_GetGlobalStatItemsByStatCode, "GetGlobalStatItemsByStatCode" }, // 2027053904
		{ &Z_Construct_UFunction_UABStatistic_GetUserStatItems, "GetUserStatItems" }, // 136517103
		{ &Z_Construct_UFunction_UABStatistic_IncrementUserStatItems, "IncrementUserStatItems" }, // 2888632070
		{ &Z_Construct_UFunction_UABStatistic_ListGlobalStatItems, "ListGlobalStatItems" }, // 2199086756
		{ &Z_Construct_UFunction_UABStatistic_ListGlobalStatItemsWithFilter, "ListGlobalStatItemsWithFilter" }, // 487707368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABStatistic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABStatistic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABStatistic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABStatistic_Statics::ClassParams = {
	&UABStatistic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABStatistic_Statics::Class_MetaDataParams), Z_Construct_UClass_UABStatistic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABStatistic()
{
	if (!Z_Registration_Info_UClass_UABStatistic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABStatistic.OuterSingleton, Z_Construct_UClass_UABStatistic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABStatistic.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABStatistic>()
{
	return UABStatistic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABStatistic);
UABStatistic::~UABStatistic() {}
// End Class UABStatistic

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABStatistic, UABStatistic::StaticClass, TEXT("UABStatistic"), &Z_Registration_Info_UClass_UABStatistic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABStatistic), 342399481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_2582148468(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

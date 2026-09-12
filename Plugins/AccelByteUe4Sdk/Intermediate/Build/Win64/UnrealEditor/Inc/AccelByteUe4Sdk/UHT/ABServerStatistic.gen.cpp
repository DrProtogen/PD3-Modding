// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerStatistic.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBulkStatItemInc.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBulkUserStatItemInc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerStatistic() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerStatistic();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerStatistic_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayBulkStatItemOperationDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DFetchUserStatistic__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGlobalStatItemDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGlobalStatItemPagingSlicedDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserStatItemPagingSlicedDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatItemInc();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerStatistic Function BulkFetchStatItemsValue
struct Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics
{
	struct ABServerStatistic_eventBulkFetchStatItemsValue_Parms
	{
		FString StatCode;
		TArray<FString> UserIds;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[] = {
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventBulkFetchStatItemsValue_Parms, StatCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCode_MetaData), NewProp_StatCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventBulkFetchStatItemsValue_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIds_MetaData), NewProp_UserIds_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventBulkFetchStatItemsValue_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DFetchUserStatistic__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1715490619
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventBulkFetchStatItemsValue_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_StatCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "BulkFetchStatItemsValue", nullptr, nullptr, Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::ABServerStatistic_eventBulkFetchStatItemsValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::ABServerStatistic_eventBulkFetchStatItemsValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerStatistic::execBulkFetchStatItemsValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatCode);
	P_GET_TARRAY_REF(FString,Z_Param_Out_UserIds);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkFetchStatItemsValue(Z_Param_StatCode,Z_Param_Out_UserIds,FDFetchUserStatistic(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerStatistic Function BulkFetchStatItemsValue

// Begin Class UABServerStatistic Function CreateUserStatItems
struct Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics
{
	struct ABServerStatistic_eventCreateUserStatItems_Parms
	{
		FString UserId;
		TArray<FString> StatCodes;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatCodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatCodes;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventCreateUserStatItems_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes_Inner = { "StatCodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes = { "StatCodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventCreateUserStatItems_Parms, StatCodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCodes_MetaData), NewProp_StatCodes_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventCreateUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayBulkStatItemOperationDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3732692107
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventCreateUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "CreateUserStatItems", nullptr, nullptr, Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::ABServerStatistic_eventCreateUserStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::ABServerStatistic_eventCreateUserStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerStatistic::execCreateUserStatItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_TARRAY_REF(FString,Z_Param_Out_StatCodes);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateUserStatItems(Z_Param_UserId,Z_Param_Out_StatCodes,FDArrayBulkStatItemOperationDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerStatistic Function CreateUserStatItems

// Begin Class UABServerStatistic Function GetAllUserStatItems
struct Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics
{
	struct ABServerStatistic_eventGetAllUserStatItems_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
		EAccelByteStatisticSortBy SortBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserStatItemPagingSlicedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 576066940
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy, METADATA_PARAMS(0, nullptr) }; // 3191525829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_SortBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "GetAllUserStatItems", nullptr, nullptr, Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::ABServerStatistic_eventGetAllUserStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::ABServerStatistic_eventGetAllUserStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerStatistic::execGetAllUserStatItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_ENUM(EAccelByteStatisticSortBy,Z_Param_SortBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllUserStatItems(Z_Param_UserId,FDUserStatItemPagingSlicedDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_Limit,Z_Param_Offset,EAccelByteStatisticSortBy(Z_Param_SortBy));
	P_NATIVE_END;
}
// End Class UABServerStatistic Function GetAllUserStatItems

// Begin Class UABServerStatistic Function GetGlobalStatItemsByStatCode
struct Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics
{
	struct ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms
	{
		FString StatCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms, StatCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCode_MetaData), NewProp_StatCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGlobalStatItemDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2366142869
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_StatCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "GetGlobalStatItemsByStatCode", nullptr, nullptr, Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerStatistic::execGetGlobalStatItemsByStatCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatCode);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGlobalStatItemsByStatCode(Z_Param_StatCode,FDGlobalStatItemDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerStatistic Function GetGlobalStatItemsByStatCode

// Begin Class UABServerStatistic Function GetUserStatItems
struct Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics
{
	struct ABServerStatistic_eventGetUserStatItems_Parms
	{
		FString UserId;
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
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCodes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes_Inner = { "StatCodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes = { "StatCodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, StatCodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCodes_MetaData), NewProp_StatCodes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserStatItemPagingSlicedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 576066940
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy, METADATA_PARAMS(0, nullptr) }; // 3191525829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_SortBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "GetUserStatItems", nullptr, nullptr, Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::ABServerStatistic_eventGetUserStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::ABServerStatistic_eventGetUserStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerStatistic_GetUserStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerStatistic::execGetUserStatItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_TARRAY_REF(FString,Z_Param_Out_StatCodes);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_ENUM(EAccelByteStatisticSortBy,Z_Param_SortBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserStatItems(Z_Param_UserId,Z_Param_Out_StatCodes,Z_Param_Out_Tags,FDUserStatItemPagingSlicedDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_Limit,Z_Param_Offset,EAccelByteStatisticSortBy(Z_Param_SortBy));
	P_NATIVE_END;
}
// End Class UABServerStatistic Function GetUserStatItems

// Begin Class UABServerStatistic Function IncrementManyUsersStatItems
struct Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics
{
	struct ABServerStatistic_eventIncrementManyUsersStatItems_Parms
	{
		TArray<FAccelByteModelsBulkUserStatItemInc> Data;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatItemInc, METADATA_PARAMS(0, nullptr) }; // 2732991841
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementManyUsersStatItems_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2732991841
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementManyUsersStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayBulkStatItemOperationDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3732692107
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementManyUsersStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "IncrementManyUsersStatItems", nullptr, nullptr, Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::ABServerStatistic_eventIncrementManyUsersStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::ABServerStatistic_eventIncrementManyUsersStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerStatistic::execIncrementManyUsersStatItems)
{
	P_GET_TARRAY_REF(FAccelByteModelsBulkUserStatItemInc,Z_Param_Out_Data);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementManyUsersStatItems(Z_Param_Out_Data,FDArrayBulkStatItemOperationDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerStatistic Function IncrementManyUsersStatItems

// Begin Class UABServerStatistic Function IncrementUserStatItems
struct Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics
{
	struct ABServerStatistic_eventIncrementUserStatItems_Parms
	{
		FString UserId;
		TArray<FAccelByteModelsBulkStatItemInc> Data;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementUserStatItems_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc, METADATA_PARAMS(0, nullptr) }; // 1863839079
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementUserStatItems_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1863839079
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayBulkStatItemOperationDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3732692107
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "IncrementUserStatItems", nullptr, nullptr, Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::ABServerStatistic_eventIncrementUserStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::ABServerStatistic_eventIncrementUserStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerStatistic::execIncrementUserStatItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_TARRAY_REF(FAccelByteModelsBulkStatItemInc,Z_Param_Out_Data);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementUserStatItems(Z_Param_UserId,Z_Param_Out_Data,FDArrayBulkStatItemOperationDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerStatistic Function IncrementUserStatItems

// Begin Class UABServerStatistic Function ListGlobalStatItems
struct Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics
{
	struct ABServerStatistic_eventListGlobalStatItems_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventListGlobalStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGlobalStatItemPagingSlicedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1874805089
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventListGlobalStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventListGlobalStatItems_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventListGlobalStatItems_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "ListGlobalStatItems", nullptr, nullptr, Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::ABServerStatistic_eventListGlobalStatItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::ABServerStatistic_eventListGlobalStatItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerStatistic::execListGlobalStatItems)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ListGlobalStatItems(FDGlobalStatItemPagingSlicedDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABServerStatistic Function ListGlobalStatItems

// Begin Class UABServerStatistic Function ListGlobalStatItemsWithFilter
struct Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics
{
	struct ABServerStatistic_eventListGlobalStatItemsWithFilter_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		TArray<FString> StatCodes;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatCodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatCodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventListGlobalStatItemsWithFilter_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGlobalStatItemPagingSlicedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1874805089
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventListGlobalStatItemsWithFilter_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_StatCodes_Inner = { "StatCodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_StatCodes = { "StatCodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventListGlobalStatItemsWithFilter_Parms, StatCodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCodes_MetaData), NewProp_StatCodes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventListGlobalStatItemsWithFilter_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerStatistic_eventListGlobalStatItemsWithFilter_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_StatCodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_StatCodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "ListGlobalStatItemsWithFilter", nullptr, nullptr, Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::ABServerStatistic_eventListGlobalStatItemsWithFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::ABServerStatistic_eventListGlobalStatItemsWithFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerStatistic::execListGlobalStatItemsWithFilter)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_TARRAY_REF(FString,Z_Param_Out_StatCodes);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ListGlobalStatItemsWithFilter(FDGlobalStatItemPagingSlicedDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_Out_StatCodes,Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABServerStatistic Function ListGlobalStatItemsWithFilter

// Begin Class UABServerStatistic
void UABServerStatistic::StaticRegisterNativesUABServerStatistic()
{
	UClass* Class = UABServerStatistic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulkFetchStatItemsValue", &UABServerStatistic::execBulkFetchStatItemsValue },
		{ "CreateUserStatItems", &UABServerStatistic::execCreateUserStatItems },
		{ "GetAllUserStatItems", &UABServerStatistic::execGetAllUserStatItems },
		{ "GetGlobalStatItemsByStatCode", &UABServerStatistic::execGetGlobalStatItemsByStatCode },
		{ "GetUserStatItems", &UABServerStatistic::execGetUserStatItems },
		{ "IncrementManyUsersStatItems", &UABServerStatistic::execIncrementManyUsersStatItems },
		{ "IncrementUserStatItems", &UABServerStatistic::execIncrementUserStatItems },
		{ "ListGlobalStatItems", &UABServerStatistic::execListGlobalStatItems },
		{ "ListGlobalStatItemsWithFilter", &UABServerStatistic::execListGlobalStatItemsWithFilter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerStatistic);
UClass* Z_Construct_UClass_UABServerStatistic_NoRegister()
{
	return UABServerStatistic::StaticClass();
}
struct Z_Construct_UClass_UABServerStatistic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerStatistic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue, "BulkFetchStatItemsValue" }, // 933588114
		{ &Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems, "CreateUserStatItems" }, // 956912115
		{ &Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems, "GetAllUserStatItems" }, // 1515324196
		{ &Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode, "GetGlobalStatItemsByStatCode" }, // 3746769530
		{ &Z_Construct_UFunction_UABServerStatistic_GetUserStatItems, "GetUserStatItems" }, // 3682023077
		{ &Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems, "IncrementManyUsersStatItems" }, // 4000465406
		{ &Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems, "IncrementUserStatItems" }, // 389679872
		{ &Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItems, "ListGlobalStatItems" }, // 1273437286
		{ &Z_Construct_UFunction_UABServerStatistic_ListGlobalStatItemsWithFilter, "ListGlobalStatItemsWithFilter" }, // 2921496132
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerStatistic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerStatistic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerStatistic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerStatistic_Statics::ClassParams = {
	&UABServerStatistic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerStatistic_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerStatistic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerStatistic()
{
	if (!Z_Registration_Info_UClass_UABServerStatistic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerStatistic.OuterSingleton, Z_Construct_UClass_UABServerStatistic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerStatistic.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerStatistic>()
{
	return UABServerStatistic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerStatistic);
UABServerStatistic::~UABServerStatistic() {}
// End Class UABServerStatistic

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerStatistic, UABServerStatistic::StaticClass, TEXT("UABServerStatistic"), &Z_Registration_Info_UClass_UABServerStatistic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerStatistic), 336684413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_627715334(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABInventory.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsConsumeUserItemsRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsDeleteUserInventoryItemsRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMoveUserItemsBetweenInventoriesRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUpdateUserInventoryItemRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABInventory() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABInventory();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABInventory_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteInventoryConfigurationSortBy();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteInventoryUtilitiesSortBy();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUserInventoriesSortBy();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUserItemsSortBy();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsDeleteUserItemsResponses__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsMoveUserItemsBetweenInventoriesResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedInventoryTagsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedInventoryTypesResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedItemTypesResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserInventoriesResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserItemsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUpdateUserItemsResponses__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserItemResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserItemsRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDeleteUserInventoryItemsRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMoveUserItemsBetweenInventoriesRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateUserInventoryItemRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABInventory Function BulkDeleteInventoryItems
struct Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics
{
	struct ABInventory_eventBulkDeleteInventoryItems_Parms
	{
		FString InventoryId;
		TArray<FAccelByteModelsDeleteUserInventoryItemsRequest> DeletedItemsRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeletedItemsRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeletedItemsRequest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeletedItemsRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventBulkDeleteInventoryItems_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::NewProp_DeletedItemsRequest_Inner = { "DeletedItemsRequest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsDeleteUserInventoryItemsRequest, METADATA_PARAMS(0, nullptr) }; // 1443351342
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::NewProp_DeletedItemsRequest = { "DeletedItemsRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventBulkDeleteInventoryItems_Parms, DeletedItemsRequest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeletedItemsRequest_MetaData), NewProp_DeletedItemsRequest_MetaData) }; // 1443351342
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventBulkDeleteInventoryItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsDeleteUserItemsResponses__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4222253285
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventBulkDeleteInventoryItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::NewProp_DeletedItemsRequest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::NewProp_DeletedItemsRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABInventory, nullptr, "BulkDeleteInventoryItems", nullptr, nullptr, Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::ABInventory_eventBulkDeleteInventoryItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::ABInventory_eventBulkDeleteInventoryItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABInventory::execBulkDeleteInventoryItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_TARRAY_REF(FAccelByteModelsDeleteUserInventoryItemsRequest,Z_Param_Out_DeletedItemsRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkDeleteInventoryItems(Z_Param_InventoryId,Z_Param_Out_DeletedItemsRequest,FDModelsDeleteUserItemsResponses(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABInventory Function BulkDeleteInventoryItems

// Begin Class UABInventory Function BulkUpdateInventoryItems
struct Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics
{
	struct ABInventory_eventBulkUpdateInventoryItems_Parms
	{
		FString InventoryId;
		TArray<FAccelByteModelsUpdateUserInventoryItemRequest> UpdatedItemsRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedItemsRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedItemsRequest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedItemsRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventBulkUpdateInventoryItems_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::NewProp_UpdatedItemsRequest_Inner = { "UpdatedItemsRequest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsUpdateUserInventoryItemRequest, METADATA_PARAMS(0, nullptr) }; // 572866823
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::NewProp_UpdatedItemsRequest = { "UpdatedItemsRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventBulkUpdateInventoryItems_Parms, UpdatedItemsRequest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedItemsRequest_MetaData), NewProp_UpdatedItemsRequest_MetaData) }; // 572866823
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventBulkUpdateInventoryItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUpdateUserItemsResponses__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3433711465
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventBulkUpdateInventoryItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::NewProp_UpdatedItemsRequest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::NewProp_UpdatedItemsRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABInventory, nullptr, "BulkUpdateInventoryItems", nullptr, nullptr, Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::ABInventory_eventBulkUpdateInventoryItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::ABInventory_eventBulkUpdateInventoryItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABInventory::execBulkUpdateInventoryItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_TARRAY_REF(FAccelByteModelsUpdateUserInventoryItemRequest,Z_Param_Out_UpdatedItemsRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkUpdateInventoryItems(Z_Param_InventoryId,Z_Param_Out_UpdatedItemsRequest,FDModelsUpdateUserItemsResponses(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABInventory Function BulkUpdateInventoryItems

// Begin Class UABInventory Function ConsumeUserInventoryItem
struct Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics
{
	struct ABInventory_eventConsumeUserInventoryItem_Parms
	{
		FString InventoryId;
		FAccelByteModelsConsumeUserItemsRequest ConsumedItemsRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumedItemsRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumedItemsRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventConsumeUserInventoryItem_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::NewProp_ConsumedItemsRequest = { "ConsumedItemsRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventConsumeUserInventoryItem_Parms, ConsumedItemsRequest), Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserItemsRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumedItemsRequest_MetaData), NewProp_ConsumedItemsRequest_MetaData) }; // 531478243
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventConsumeUserInventoryItem_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserItemResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4188717649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventConsumeUserInventoryItem_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::NewProp_ConsumedItemsRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABInventory, nullptr, "ConsumeUserInventoryItem", nullptr, nullptr, Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::ABInventory_eventConsumeUserInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::ABInventory_eventConsumeUserInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABInventory::execConsumeUserInventoryItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_STRUCT_REF(FAccelByteModelsConsumeUserItemsRequest,Z_Param_Out_ConsumedItemsRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeUserInventoryItem(Z_Param_InventoryId,Z_Param_Out_ConsumedItemsRequest,FDModelsUserItemResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABInventory Function ConsumeUserInventoryItem

// Begin Class UABInventory Function GetInventoryConfigurations
struct Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics
{
	struct ABInventory_eventGetInventoryConfigurations_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteInventoryConfigurationSortBy SortBy;
		int32 Limit;
		int32 Offset;
		FString InventoryConfigurationCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryConfigurationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryConfigurationCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryConfigurations_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedInventoryTypesResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1116617440
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryConfigurations_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryConfigurations_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteInventoryConfigurationSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 649047291
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryConfigurations_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryConfigurations_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_InventoryConfigurationCode = { "InventoryConfigurationCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryConfigurations_Parms, InventoryConfigurationCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryConfigurationCode_MetaData), NewProp_InventoryConfigurationCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::NewProp_InventoryConfigurationCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABInventory, nullptr, "GetInventoryConfigurations", nullptr, nullptr, Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::ABInventory_eventGetInventoryConfigurations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::ABInventory_eventGetInventoryConfigurations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABInventory_GetInventoryConfigurations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABInventory_GetInventoryConfigurations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABInventory::execGetInventoryConfigurations)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_ENUM_REF(EAccelByteInventoryConfigurationSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryConfigurationCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInventoryConfigurations(FDModelsPaginatedInventoryTypesResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),(EAccelByteInventoryConfigurationSortBy&)(Z_Param_Out_SortBy),Z_Param_Out_Limit,Z_Param_Out_Offset,Z_Param_InventoryConfigurationCode);
	P_NATIVE_END;
}
// End Class UABInventory Function GetInventoryConfigurations

// Begin Class UABInventory Function GetInventoryTags
struct Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics
{
	struct ABInventory_eventGetInventoryTags_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteInventoryUtilitiesSortBy SortBy;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryTags_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedInventoryTagsResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 152958764
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryTags_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryTags_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteInventoryUtilitiesSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 2404404004
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryTags_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetInventoryTags_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABInventory, nullptr, "GetInventoryTags", nullptr, nullptr, Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::ABInventory_eventGetInventoryTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::ABInventory_eventGetInventoryTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABInventory_GetInventoryTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABInventory_GetInventoryTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABInventory::execGetInventoryTags)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_ENUM_REF(EAccelByteInventoryUtilitiesSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInventoryTags(FDModelsPaginatedInventoryTagsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),(EAccelByteInventoryUtilitiesSortBy&)(Z_Param_Out_SortBy),Z_Param_Out_Limit,Z_Param_Out_Offset);
	P_NATIVE_END;
}
// End Class UABInventory Function GetInventoryTags

// Begin Class UABInventory Function GetItemTypes
struct Z_Construct_UFunction_UABInventory_GetItemTypes_Statics
{
	struct ABInventory_eventGetItemTypes_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteInventoryUtilitiesSortBy SortBy;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetItemTypes_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedItemTypesResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3916453985
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetItemTypes_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetItemTypes_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteInventoryUtilitiesSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 2404404004
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetItemTypes_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetItemTypes_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABInventory, nullptr, "GetItemTypes", nullptr, nullptr, Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::ABInventory_eventGetItemTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::ABInventory_eventGetItemTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABInventory_GetItemTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABInventory_GetItemTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABInventory::execGetItemTypes)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_ENUM_REF(EAccelByteInventoryUtilitiesSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetItemTypes(FDModelsPaginatedItemTypesResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),(EAccelByteInventoryUtilitiesSortBy&)(Z_Param_Out_SortBy),Z_Param_Out_Limit,Z_Param_Out_Offset);
	P_NATIVE_END;
}
// End Class UABInventory Function GetItemTypes

// Begin Class UABInventory Function GetUserInventories
struct Z_Construct_UFunction_UABInventory_GetUserInventories_Statics
{
	struct ABInventory_eventGetUserInventories_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteUserInventoriesSortBy SortBy;
		int32 Limit;
		int32 Offset;
		FString InventoryConfigurationCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryConfigurationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryConfigurationCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventories_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserInventoriesResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3769101044
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventories_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventories_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUserInventoriesSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 2639998106
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventories_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventories_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_InventoryConfigurationCode = { "InventoryConfigurationCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventories_Parms, InventoryConfigurationCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryConfigurationCode_MetaData), NewProp_InventoryConfigurationCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::NewProp_InventoryConfigurationCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABInventory, nullptr, "GetUserInventories", nullptr, nullptr, Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::ABInventory_eventGetUserInventories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::ABInventory_eventGetUserInventories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABInventory_GetUserInventories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABInventory_GetUserInventories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABInventory::execGetUserInventories)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_ENUM_REF(EAccelByteUserInventoriesSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryConfigurationCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserInventories(FDModelsPaginatedUserInventoriesResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),(EAccelByteUserInventoriesSortBy&)(Z_Param_Out_SortBy),Z_Param_Out_Limit,Z_Param_Out_Offset,Z_Param_InventoryConfigurationCode);
	P_NATIVE_END;
}
// End Class UABInventory Function GetUserInventories

// Begin Class UABInventory Function GetUserInventoryAllItems
struct Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics
{
	struct ABInventory_eventGetUserInventoryAllItems_Parms
	{
		FString InventoryId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteUserItemsSortBy SortBy;
		int32 Limit;
		int32 Offset;
		FString SourceItemId;
		FString Tags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceItemId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryAllItems_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryAllItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserItemsResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1423900808
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryAllItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryAllItems_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUserItemsSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 2179130171
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryAllItems_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryAllItems_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_SourceItemId = { "SourceItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryAllItems_Parms, SourceItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceItemId_MetaData), NewProp_SourceItemId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryAllItems_Parms, Tags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_SourceItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABInventory, nullptr, "GetUserInventoryAllItems", nullptr, nullptr, Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::ABInventory_eventGetUserInventoryAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::ABInventory_eventGetUserInventoryAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABInventory::execGetUserInventoryAllItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_ENUM_REF(EAccelByteUserItemsSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceItemId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserInventoryAllItems(Z_Param_InventoryId,FDModelsPaginatedUserItemsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),(EAccelByteUserItemsSortBy&)(Z_Param_Out_SortBy),Z_Param_Limit,Z_Param_Offset,Z_Param_SourceItemId,Z_Param_Tags);
	P_NATIVE_END;
}
// End Class UABInventory Function GetUserInventoryAllItems

// Begin Class UABInventory Function GetUserInventoryItem
struct Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics
{
	struct ABInventory_eventGetUserInventoryItem_Parms
	{
		FString InventoryId;
		FString SlotId;
		FString SourceItemId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceItemId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryItem_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryItem_Parms, SlotId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotId_MetaData), NewProp_SlotId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::NewProp_SourceItemId = { "SourceItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryItem_Parms, SourceItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceItemId_MetaData), NewProp_SourceItemId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryItem_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserItemResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4188717649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventGetUserInventoryItem_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::NewProp_SlotId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::NewProp_SourceItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABInventory, nullptr, "GetUserInventoryItem", nullptr, nullptr, Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::ABInventory_eventGetUserInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::ABInventory_eventGetUserInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABInventory_GetUserInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABInventory_GetUserInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABInventory::execGetUserInventoryItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceItemId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserInventoryItem(Z_Param_InventoryId,Z_Param_SlotId,Z_Param_SourceItemId,FDModelsUserItemResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABInventory Function GetUserInventoryItem

// Begin Class UABInventory Function MoveItemsBetweenInventories
struct Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics
{
	struct ABInventory_eventMoveItemsBetweenInventories_Parms
	{
		FString TargetInventoryId;
		FAccelByteModelsMoveUserItemsBetweenInventoriesRequest MoveItemsRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInventoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveItemsRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetInventoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveItemsRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::NewProp_TargetInventoryId = { "TargetInventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventMoveItemsBetweenInventories_Parms, TargetInventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInventoryId_MetaData), NewProp_TargetInventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::NewProp_MoveItemsRequest = { "MoveItemsRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventMoveItemsBetweenInventories_Parms, MoveItemsRequest), Z_Construct_UScriptStruct_FAccelByteModelsMoveUserItemsBetweenInventoriesRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveItemsRequest_MetaData), NewProp_MoveItemsRequest_MetaData) }; // 2833357517
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventMoveItemsBetweenInventories_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsMoveUserItemsBetweenInventoriesResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2166918024
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABInventory_eventMoveItemsBetweenInventories_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::NewProp_TargetInventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::NewProp_MoveItemsRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABInventory, nullptr, "MoveItemsBetweenInventories", nullptr, nullptr, Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::ABInventory_eventMoveItemsBetweenInventories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::ABInventory_eventMoveItemsBetweenInventories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABInventory::execMoveItemsBetweenInventories)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetInventoryId);
	P_GET_STRUCT_REF(FAccelByteModelsMoveUserItemsBetweenInventoriesRequest,Z_Param_Out_MoveItemsRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveItemsBetweenInventories(Z_Param_TargetInventoryId,Z_Param_Out_MoveItemsRequest,FDModelsMoveUserItemsBetweenInventoriesResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABInventory Function MoveItemsBetweenInventories

// Begin Class UABInventory
void UABInventory::StaticRegisterNativesUABInventory()
{
	UClass* Class = UABInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulkDeleteInventoryItems", &UABInventory::execBulkDeleteInventoryItems },
		{ "BulkUpdateInventoryItems", &UABInventory::execBulkUpdateInventoryItems },
		{ "ConsumeUserInventoryItem", &UABInventory::execConsumeUserInventoryItem },
		{ "GetInventoryConfigurations", &UABInventory::execGetInventoryConfigurations },
		{ "GetInventoryTags", &UABInventory::execGetInventoryTags },
		{ "GetItemTypes", &UABInventory::execGetItemTypes },
		{ "GetUserInventories", &UABInventory::execGetUserInventories },
		{ "GetUserInventoryAllItems", &UABInventory::execGetUserInventoryAllItems },
		{ "GetUserInventoryItem", &UABInventory::execGetUserInventoryItem },
		{ "MoveItemsBetweenInventories", &UABInventory::execMoveItemsBetweenInventories },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABInventory);
UClass* Z_Construct_UClass_UABInventory_NoRegister()
{
	return UABInventory::StaticClass();
}
struct Z_Construct_UClass_UABInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABInventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABInventory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABInventory_BulkDeleteInventoryItems, "BulkDeleteInventoryItems" }, // 3509209074
		{ &Z_Construct_UFunction_UABInventory_BulkUpdateInventoryItems, "BulkUpdateInventoryItems" }, // 1631780675
		{ &Z_Construct_UFunction_UABInventory_ConsumeUserInventoryItem, "ConsumeUserInventoryItem" }, // 3440511554
		{ &Z_Construct_UFunction_UABInventory_GetInventoryConfigurations, "GetInventoryConfigurations" }, // 4241711192
		{ &Z_Construct_UFunction_UABInventory_GetInventoryTags, "GetInventoryTags" }, // 3489112257
		{ &Z_Construct_UFunction_UABInventory_GetItemTypes, "GetItemTypes" }, // 1598915622
		{ &Z_Construct_UFunction_UABInventory_GetUserInventories, "GetUserInventories" }, // 199868695
		{ &Z_Construct_UFunction_UABInventory_GetUserInventoryAllItems, "GetUserInventoryAllItems" }, // 319639928
		{ &Z_Construct_UFunction_UABInventory_GetUserInventoryItem, "GetUserInventoryItem" }, // 3342883642
		{ &Z_Construct_UFunction_UABInventory_MoveItemsBetweenInventories, "MoveItemsBetweenInventories" }, // 2024177180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABInventory_Statics::ClassParams = {
	&UABInventory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UABInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABInventory()
{
	if (!Z_Registration_Info_UClass_UABInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABInventory.OuterSingleton, Z_Construct_UClass_UABInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABInventory.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABInventory>()
{
	return UABInventory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABInventory);
UABInventory::~UABInventory() {}
// End Class UABInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABInventory, UABInventory::StaticClass, TEXT("UABInventory"), &Z_Registration_Info_UClass_UABInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABInventory), 215558962U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_2615767549(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

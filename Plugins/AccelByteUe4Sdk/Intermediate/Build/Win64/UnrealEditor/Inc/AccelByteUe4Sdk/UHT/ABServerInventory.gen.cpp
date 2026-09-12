// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerInventory.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsConsumeUserItemsRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsCreateInventoryRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsDeleteInventoryRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsDeleteUserInventoryItemsRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSaveInventoryItemByInventoryIdRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSaveInventoryItemRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUpdateInventoryItemRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUpdateInventoryRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerInventory() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerInventory();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerInventory_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteInventoriesSortBy();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUserItemsSortBy();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsDeleteUserItemsResponses__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserInventoriesResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserItemsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSaveInventoryItemsResponses__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUpdateAllInventoriesResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUpdateInventoryItemsResponses__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserInventoryResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserItemResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserItemsRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCreateInventoryRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDeleteInventoryRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDeleteUserInventoryItemsRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSaveInventoryItemByInventoryIdRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSaveInventoryItemRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateInventoryItemRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateInventoryRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerInventory Function BulkDeleteUserInventoryItems
struct Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics
{
	struct ABServerInventory_eventBulkDeleteUserInventoryItems_Parms
	{
		FString UserId;
		FString InventoryId;
		TArray<FAccelByteModelsDeleteUserInventoryItemsRequest> DeletedItemsRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeletedItemsRequest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeletedItemsRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkDeleteUserInventoryItems_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkDeleteUserInventoryItems_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_DeletedItemsRequest_Inner = { "DeletedItemsRequest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsDeleteUserInventoryItemsRequest, METADATA_PARAMS(0, nullptr) }; // 1443351342
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_DeletedItemsRequest = { "DeletedItemsRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkDeleteUserInventoryItems_Parms, DeletedItemsRequest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeletedItemsRequest_MetaData), NewProp_DeletedItemsRequest_MetaData) }; // 1443351342
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkDeleteUserInventoryItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsDeleteUserItemsResponses__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4222253285
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkDeleteUserInventoryItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_DeletedItemsRequest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_DeletedItemsRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "BulkDeleteUserInventoryItems", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::ABServerInventory_eventBulkDeleteUserInventoryItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::ABServerInventory_eventBulkDeleteUserInventoryItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execBulkDeleteUserInventoryItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_TARRAY_REF(FAccelByteModelsDeleteUserInventoryItemsRequest,Z_Param_Out_DeletedItemsRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkDeleteUserInventoryItems(Z_Param_UserId,Z_Param_InventoryId,Z_Param_Out_DeletedItemsRequest,FDModelsDeleteUserItemsResponses(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function BulkDeleteUserInventoryItems

// Begin Class UABServerInventory Function BulkSaveInventoryItems
struct Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics
{
	struct ABServerInventory_eventBulkSaveInventoryItems_Parms
	{
		FString UserId;
		TArray<FAccelByteModelsSaveInventoryItemRequest> SaveItemsRequests;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveItemsRequests_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveItemsRequests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveItemsRequests;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkSaveInventoryItems_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::NewProp_SaveItemsRequests_Inner = { "SaveItemsRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsSaveInventoryItemRequest, METADATA_PARAMS(0, nullptr) }; // 2836263243
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::NewProp_SaveItemsRequests = { "SaveItemsRequests", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkSaveInventoryItems_Parms, SaveItemsRequests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveItemsRequests_MetaData), NewProp_SaveItemsRequests_MetaData) }; // 2836263243
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkSaveInventoryItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSaveInventoryItemsResponses__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 822729651
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkSaveInventoryItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::NewProp_SaveItemsRequests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::NewProp_SaveItemsRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "BulkSaveInventoryItems", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::ABServerInventory_eventBulkSaveInventoryItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::ABServerInventory_eventBulkSaveInventoryItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execBulkSaveInventoryItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_TARRAY_REF(FAccelByteModelsSaveInventoryItemRequest,Z_Param_Out_SaveItemsRequests);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkSaveInventoryItems(Z_Param_UserId,Z_Param_Out_SaveItemsRequests,FDModelsSaveInventoryItemsResponses(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function BulkSaveInventoryItems

// Begin Class UABServerInventory Function BulkSaveInventoryItemsByInventoryId
struct Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics
{
	struct ABServerInventory_eventBulkSaveInventoryItemsByInventoryId_Parms
	{
		FString UserId;
		FString InventoryId;
		TArray<FAccelByteModelsSaveInventoryItemByInventoryIdRequest> SaveItemsRequests;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveItemsRequests_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveItemsRequests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveItemsRequests;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkSaveInventoryItemsByInventoryId_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkSaveInventoryItemsByInventoryId_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_SaveItemsRequests_Inner = { "SaveItemsRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsSaveInventoryItemByInventoryIdRequest, METADATA_PARAMS(0, nullptr) }; // 393086963
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_SaveItemsRequests = { "SaveItemsRequests", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkSaveInventoryItemsByInventoryId_Parms, SaveItemsRequests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveItemsRequests_MetaData), NewProp_SaveItemsRequests_MetaData) }; // 393086963
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkSaveInventoryItemsByInventoryId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSaveInventoryItemsResponses__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 822729651
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkSaveInventoryItemsByInventoryId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_SaveItemsRequests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_SaveItemsRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "BulkSaveInventoryItemsByInventoryId", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::ABServerInventory_eventBulkSaveInventoryItemsByInventoryId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::ABServerInventory_eventBulkSaveInventoryItemsByInventoryId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execBulkSaveInventoryItemsByInventoryId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_TARRAY_REF(FAccelByteModelsSaveInventoryItemByInventoryIdRequest,Z_Param_Out_SaveItemsRequests);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkSaveInventoryItemsByInventoryId(Z_Param_UserId,Z_Param_InventoryId,Z_Param_Out_SaveItemsRequests,FDModelsSaveInventoryItemsResponses(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function BulkSaveInventoryItemsByInventoryId

// Begin Class UABServerInventory Function BulkUpdateInventoryItems
struct Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics
{
	struct ABServerInventory_eventBulkUpdateInventoryItems_Parms
	{
		FString UserId;
		FString InventoryId;
		TArray<FAccelByteModelsUpdateInventoryItemRequest> UpdatedItemsRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedItemsRequest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedItemsRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkUpdateInventoryItems_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkUpdateInventoryItems_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_UpdatedItemsRequest_Inner = { "UpdatedItemsRequest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsUpdateInventoryItemRequest, METADATA_PARAMS(0, nullptr) }; // 3018885819
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_UpdatedItemsRequest = { "UpdatedItemsRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkUpdateInventoryItems_Parms, UpdatedItemsRequest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedItemsRequest_MetaData), NewProp_UpdatedItemsRequest_MetaData) }; // 3018885819
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkUpdateInventoryItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUpdateInventoryItemsResponses__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3559208031
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventBulkUpdateInventoryItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_UpdatedItemsRequest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_UpdatedItemsRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "BulkUpdateInventoryItems", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::ABServerInventory_eventBulkUpdateInventoryItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::ABServerInventory_eventBulkUpdateInventoryItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execBulkUpdateInventoryItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_TARRAY_REF(FAccelByteModelsUpdateInventoryItemRequest,Z_Param_Out_UpdatedItemsRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkUpdateInventoryItems(Z_Param_UserId,Z_Param_InventoryId,Z_Param_Out_UpdatedItemsRequest,FDModelsUpdateInventoryItemsResponses(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function BulkUpdateInventoryItems

// Begin Class UABServerInventory Function ConsumeInventoryItem
struct Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics
{
	struct ABServerInventory_eventConsumeInventoryItem_Parms
	{
		FString UserId;
		FString InventoryId;
		FAccelByteModelsConsumeUserItemsRequest ConsumedItemsRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumedItemsRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventConsumeInventoryItem_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventConsumeInventoryItem_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::NewProp_ConsumedItemsRequest = { "ConsumedItemsRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventConsumeInventoryItem_Parms, ConsumedItemsRequest), Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserItemsRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumedItemsRequest_MetaData), NewProp_ConsumedItemsRequest_MetaData) }; // 531478243
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventConsumeInventoryItem_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserItemResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4188717649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventConsumeInventoryItem_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::NewProp_ConsumedItemsRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "ConsumeInventoryItem", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::ABServerInventory_eventConsumeInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::ABServerInventory_eventConsumeInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execConsumeInventoryItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_STRUCT_REF(FAccelByteModelsConsumeUserItemsRequest,Z_Param_Out_ConsumedItemsRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeInventoryItem(Z_Param_UserId,Z_Param_InventoryId,Z_Param_Out_ConsumedItemsRequest,FDModelsUserItemResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function ConsumeInventoryItem

// Begin Class UABServerInventory Function CreateInventory
struct Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics
{
	struct ABServerInventory_eventCreateInventory_Parms
	{
		FAccelByteModelsCreateInventoryRequest CreateInventoryRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateInventoryRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateInventoryRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::NewProp_CreateInventoryRequest = { "CreateInventoryRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventCreateInventory_Parms, CreateInventoryRequest), Z_Construct_UScriptStruct_FAccelByteModelsCreateInventoryRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateInventoryRequest_MetaData), NewProp_CreateInventoryRequest_MetaData) }; // 1722182049
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventCreateInventory_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserInventoryResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3764475460
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventCreateInventory_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::NewProp_CreateInventoryRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "CreateInventory", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::ABServerInventory_eventCreateInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::ABServerInventory_eventCreateInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_CreateInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_CreateInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execCreateInventory)
{
	P_GET_STRUCT_REF(FAccelByteModelsCreateInventoryRequest,Z_Param_Out_CreateInventoryRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateInventory(Z_Param_Out_CreateInventoryRequest,FDModelsUserInventoryResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function CreateInventory

// Begin Class UABServerInventory Function DeleteInventory
struct Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics
{
	struct ABServerInventory_eventDeleteInventory_Parms
	{
		FString InventoryId;
		FAccelByteModelsDeleteInventoryRequest DeleteInventoryRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteInventoryRequest_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeleteInventoryRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventDeleteInventory_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::NewProp_DeleteInventoryRequest = { "DeleteInventoryRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventDeleteInventory_Parms, DeleteInventoryRequest), Z_Construct_UScriptStruct_FAccelByteModelsDeleteInventoryRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteInventoryRequest_MetaData), NewProp_DeleteInventoryRequest_MetaData) }; // 634181015
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventDeleteInventory_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventDeleteInventory_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::NewProp_DeleteInventoryRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "DeleteInventory", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::ABServerInventory_eventDeleteInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::ABServerInventory_eventDeleteInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_DeleteInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_DeleteInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execDeleteInventory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_STRUCT_REF(FAccelByteModelsDeleteInventoryRequest,Z_Param_Out_DeleteInventoryRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteInventory(Z_Param_InventoryId,Z_Param_Out_DeleteInventoryRequest,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function DeleteInventory

// Begin Class UABServerInventory Function GetInventories
struct Z_Construct_UFunction_UABServerInventory_GetInventories_Statics
{
	struct ABServerInventory_eventGetInventories_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		FString UserId;
		FString InventoryConfigurationCode;
		EAccelByteInventoriesSortBy SortBy;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryConfigurationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryConfigurationCode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventories_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserInventoriesResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3769101044
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventories_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventories_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_InventoryConfigurationCode = { "InventoryConfigurationCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventories_Parms, InventoryConfigurationCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryConfigurationCode_MetaData), NewProp_InventoryConfigurationCode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventories_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteInventoriesSortBy, METADATA_PARAMS(0, nullptr) }; // 3409113326
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventories_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventories_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_InventoryConfigurationCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "GetInventories", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::ABServerInventory_eventGetInventories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::ABServerInventory_eventGetInventories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_GetInventories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_GetInventories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execGetInventories)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryConfigurationCode);
	P_GET_ENUM(EAccelByteInventoriesSortBy,Z_Param_SortBy);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInventories(FDModelsPaginatedUserInventoriesResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_UserId,Z_Param_InventoryConfigurationCode,EAccelByteInventoriesSortBy(Z_Param_SortBy),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABServerInventory Function GetInventories

// Begin Class UABServerInventory Function GetInventory
struct Z_Construct_UFunction_UABServerInventory_GetInventory_Statics
{
	struct ABServerInventory_eventGetInventory_Parms
	{
		FString InventoryId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventory_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventory_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserInventoryResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3764475460
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventory_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "GetInventory", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::ABServerInventory_eventGetInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::ABServerInventory_eventGetInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_GetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_GetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execGetInventory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInventory(Z_Param_InventoryId,FDModelsUserInventoryResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function GetInventory

// Begin Class UABServerInventory Function GetInventoryAllItems
struct Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics
{
	struct ABServerInventory_eventGetInventoryAllItems_Parms
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
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryAllItems_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryAllItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserItemsResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1423900808
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryAllItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryAllItems_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUserItemsSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 2179130171
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryAllItems_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryAllItems_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_SourceItemId = { "SourceItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryAllItems_Parms, SourceItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceItemId_MetaData), NewProp_SourceItemId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryAllItems_Parms, Tags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_SourceItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "GetInventoryAllItems", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::ABServerInventory_eventGetInventoryAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::ABServerInventory_eventGetInventoryAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execGetInventoryAllItems)
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
	P_THIS->GetInventoryAllItems(Z_Param_InventoryId,FDModelsPaginatedUserItemsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),(EAccelByteUserItemsSortBy&)(Z_Param_Out_SortBy),Z_Param_Limit,Z_Param_Offset,Z_Param_SourceItemId,Z_Param_Tags);
	P_NATIVE_END;
}
// End Class UABServerInventory Function GetInventoryAllItems

// Begin Class UABServerInventory Function GetInventoryItem
struct Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics
{
	struct ABServerInventory_eventGetInventoryItem_Parms
	{
		FString InventoryId;
		FString SlotId;
		FString SourceItemId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryItem_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryItem_Parms, SlotId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotId_MetaData), NewProp_SlotId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::NewProp_SourceItemId = { "SourceItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryItem_Parms, SourceItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceItemId_MetaData), NewProp_SourceItemId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryItem_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserItemResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4188717649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventGetInventoryItem_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::NewProp_SlotId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::NewProp_SourceItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "GetInventoryItem", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::ABServerInventory_eventGetInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::ABServerInventory_eventGetInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_GetInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_GetInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execGetInventoryItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceItemId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInventoryItem(Z_Param_InventoryId,Z_Param_SlotId,Z_Param_SourceItemId,FDModelsUserItemResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function GetInventoryItem

// Begin Class UABServerInventory Function SaveInventoryItem
struct Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics
{
	struct ABServerInventory_eventSaveInventoryItem_Parms
	{
		FString UserId;
		FAccelByteModelsSaveInventoryItemRequest SaveItemRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveItemRequest_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveItemRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSaveInventoryItem_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::NewProp_SaveItemRequest = { "SaveItemRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSaveInventoryItem_Parms, SaveItemRequest), Z_Construct_UScriptStruct_FAccelByteModelsSaveInventoryItemRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveItemRequest_MetaData), NewProp_SaveItemRequest_MetaData) }; // 2836263243
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSaveInventoryItem_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserItemResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4188717649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSaveInventoryItem_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::NewProp_SaveItemRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "SaveInventoryItem", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::ABServerInventory_eventSaveInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::ABServerInventory_eventSaveInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_SaveInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_SaveInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execSaveInventoryItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_STRUCT_REF(FAccelByteModelsSaveInventoryItemRequest,Z_Param_Out_SaveItemRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveInventoryItem(Z_Param_UserId,Z_Param_Out_SaveItemRequest,FDModelsUserItemResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function SaveInventoryItem

// Begin Class UABServerInventory Function SaveInventoryItemByInventoryId
struct Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics
{
	struct ABServerInventory_eventSaveInventoryItemByInventoryId_Parms
	{
		FString UserId;
		FString InventoryId;
		FAccelByteModelsSaveInventoryItemByInventoryIdRequest SaveItemRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveItemRequest_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveItemRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSaveInventoryItemByInventoryId_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSaveInventoryItemByInventoryId_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::NewProp_SaveItemRequest = { "SaveItemRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSaveInventoryItemByInventoryId_Parms, SaveItemRequest), Z_Construct_UScriptStruct_FAccelByteModelsSaveInventoryItemByInventoryIdRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveItemRequest_MetaData), NewProp_SaveItemRequest_MetaData) }; // 393086963
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSaveInventoryItemByInventoryId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserItemResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4188717649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSaveInventoryItemByInventoryId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::NewProp_SaveItemRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "SaveInventoryItemByInventoryId", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::ABServerInventory_eventSaveInventoryItemByInventoryId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::ABServerInventory_eventSaveInventoryItemByInventoryId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execSaveInventoryItemByInventoryId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_STRUCT_REF(FAccelByteModelsSaveInventoryItemByInventoryIdRequest,Z_Param_Out_SaveItemRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveInventoryItemByInventoryId(Z_Param_UserId,Z_Param_InventoryId,Z_Param_Out_SaveItemRequest,FDModelsUserItemResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function SaveInventoryItemByInventoryId

// Begin Class UABServerInventory Function SyncUserEntitlement
struct Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics
{
	struct ABServerInventory_eventSyncUserEntitlement_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSyncUserEntitlement_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSyncUserEntitlement_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventSyncUserEntitlement_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "SyncUserEntitlement", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::ABServerInventory_eventSyncUserEntitlement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::ABServerInventory_eventSyncUserEntitlement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execSyncUserEntitlement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SyncUserEntitlement(Z_Param_UserId,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function SyncUserEntitlement

// Begin Class UABServerInventory Function UpdateAllUserInventories
struct Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics
{
	struct ABServerInventory_eventUpdateAllUserInventories_Parms
	{
		FString UserId;
		FString InventoryConfigurationCode;
		FAccelByteModelsUpdateInventoryRequest UpdateInventoryRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryConfigurationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInventoryRequest_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryConfigurationCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInventoryRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventUpdateAllUserInventories_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::NewProp_InventoryConfigurationCode = { "InventoryConfigurationCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventUpdateAllUserInventories_Parms, InventoryConfigurationCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryConfigurationCode_MetaData), NewProp_InventoryConfigurationCode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::NewProp_UpdateInventoryRequest = { "UpdateInventoryRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventUpdateAllUserInventories_Parms, UpdateInventoryRequest), Z_Construct_UScriptStruct_FAccelByteModelsUpdateInventoryRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInventoryRequest_MetaData), NewProp_UpdateInventoryRequest_MetaData) }; // 4283458707
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventUpdateAllUserInventories_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUpdateAllInventoriesResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 533043990
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventUpdateAllUserInventories_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::NewProp_InventoryConfigurationCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::NewProp_UpdateInventoryRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "UpdateAllUserInventories", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::ABServerInventory_eventUpdateAllUserInventories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::ABServerInventory_eventUpdateAllUserInventories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execUpdateAllUserInventories)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryConfigurationCode);
	P_GET_STRUCT_REF(FAccelByteModelsUpdateInventoryRequest,Z_Param_Out_UpdateInventoryRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAllUserInventories(Z_Param_UserId,Z_Param_InventoryConfigurationCode,Z_Param_Out_UpdateInventoryRequest,FDModelsUpdateAllInventoriesResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function UpdateAllUserInventories

// Begin Class UABServerInventory Function UpdateInventory
struct Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics
{
	struct ABServerInventory_eventUpdateInventory_Parms
	{
		FString InventoryId;
		FAccelByteModelsUpdateInventoryRequest UpdateInventoryRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInventoryRequest_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInventoryRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventUpdateInventory_Parms, InventoryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryId_MetaData), NewProp_InventoryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::NewProp_UpdateInventoryRequest = { "UpdateInventoryRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventUpdateInventory_Parms, UpdateInventoryRequest), Z_Construct_UScriptStruct_FAccelByteModelsUpdateInventoryRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInventoryRequest_MetaData), NewProp_UpdateInventoryRequest_MetaData) }; // 4283458707
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventUpdateInventory_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserInventoryResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3764475460
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerInventory_eventUpdateInventory_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::NewProp_InventoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::NewProp_UpdateInventoryRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerInventory, nullptr, "UpdateInventory", nullptr, nullptr, Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::ABServerInventory_eventUpdateInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::ABServerInventory_eventUpdateInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerInventory_UpdateInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerInventory_UpdateInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerInventory::execUpdateInventory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InventoryId);
	P_GET_STRUCT_REF(FAccelByteModelsUpdateInventoryRequest,Z_Param_Out_UpdateInventoryRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInventory(Z_Param_InventoryId,Z_Param_Out_UpdateInventoryRequest,FDModelsUserInventoryResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerInventory Function UpdateInventory

// Begin Class UABServerInventory
void UABServerInventory::StaticRegisterNativesUABServerInventory()
{
	UClass* Class = UABServerInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulkDeleteUserInventoryItems", &UABServerInventory::execBulkDeleteUserInventoryItems },
		{ "BulkSaveInventoryItems", &UABServerInventory::execBulkSaveInventoryItems },
		{ "BulkSaveInventoryItemsByInventoryId", &UABServerInventory::execBulkSaveInventoryItemsByInventoryId },
		{ "BulkUpdateInventoryItems", &UABServerInventory::execBulkUpdateInventoryItems },
		{ "ConsumeInventoryItem", &UABServerInventory::execConsumeInventoryItem },
		{ "CreateInventory", &UABServerInventory::execCreateInventory },
		{ "DeleteInventory", &UABServerInventory::execDeleteInventory },
		{ "GetInventories", &UABServerInventory::execGetInventories },
		{ "GetInventory", &UABServerInventory::execGetInventory },
		{ "GetInventoryAllItems", &UABServerInventory::execGetInventoryAllItems },
		{ "GetInventoryItem", &UABServerInventory::execGetInventoryItem },
		{ "SaveInventoryItem", &UABServerInventory::execSaveInventoryItem },
		{ "SaveInventoryItemByInventoryId", &UABServerInventory::execSaveInventoryItemByInventoryId },
		{ "SyncUserEntitlement", &UABServerInventory::execSyncUserEntitlement },
		{ "UpdateAllUserInventories", &UABServerInventory::execUpdateAllUserInventories },
		{ "UpdateInventory", &UABServerInventory::execUpdateInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerInventory);
UClass* Z_Construct_UClass_UABServerInventory_NoRegister()
{
	return UABServerInventory::StaticClass();
}
struct Z_Construct_UClass_UABServerInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerInventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerInventory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerInventory_BulkDeleteUserInventoryItems, "BulkDeleteUserInventoryItems" }, // 2669392035
		{ &Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItems, "BulkSaveInventoryItems" }, // 3280329605
		{ &Z_Construct_UFunction_UABServerInventory_BulkSaveInventoryItemsByInventoryId, "BulkSaveInventoryItemsByInventoryId" }, // 417081043
		{ &Z_Construct_UFunction_UABServerInventory_BulkUpdateInventoryItems, "BulkUpdateInventoryItems" }, // 4163570392
		{ &Z_Construct_UFunction_UABServerInventory_ConsumeInventoryItem, "ConsumeInventoryItem" }, // 1677968115
		{ &Z_Construct_UFunction_UABServerInventory_CreateInventory, "CreateInventory" }, // 1991401547
		{ &Z_Construct_UFunction_UABServerInventory_DeleteInventory, "DeleteInventory" }, // 3131905236
		{ &Z_Construct_UFunction_UABServerInventory_GetInventories, "GetInventories" }, // 4273574667
		{ &Z_Construct_UFunction_UABServerInventory_GetInventory, "GetInventory" }, // 3854815999
		{ &Z_Construct_UFunction_UABServerInventory_GetInventoryAllItems, "GetInventoryAllItems" }, // 345532042
		{ &Z_Construct_UFunction_UABServerInventory_GetInventoryItem, "GetInventoryItem" }, // 493412743
		{ &Z_Construct_UFunction_UABServerInventory_SaveInventoryItem, "SaveInventoryItem" }, // 1571114018
		{ &Z_Construct_UFunction_UABServerInventory_SaveInventoryItemByInventoryId, "SaveInventoryItemByInventoryId" }, // 1529223890
		{ &Z_Construct_UFunction_UABServerInventory_SyncUserEntitlement, "SyncUserEntitlement" }, // 1548323924
		{ &Z_Construct_UFunction_UABServerInventory_UpdateAllUserInventories, "UpdateAllUserInventories" }, // 871006034
		{ &Z_Construct_UFunction_UABServerInventory_UpdateInventory, "UpdateInventory" }, // 942863838
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerInventory_Statics::ClassParams = {
	&UABServerInventory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerInventory()
{
	if (!Z_Registration_Info_UClass_UABServerInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerInventory.OuterSingleton, Z_Construct_UClass_UABServerInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerInventory.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerInventory>()
{
	return UABServerInventory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerInventory);
UABServerInventory::~UABServerInventory() {}
// End Class UABServerInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerInventory, UABServerInventory::StaticClass, TEXT("UABServerInventory"), &Z_Registration_Info_UClass_UABServerInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerInventory), 2268844329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_1393856901(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

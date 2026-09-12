// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABOrder.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsOrderCreate.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUserPreviewOrderRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABOrder() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABOrder();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABOrder_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsOrderInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPagedOrderInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPreviewOrderResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsOrderHistoryInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderCreate();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserPreviewOrderRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABOrder Function CancelOrder
struct Z_Construct_UFunction_UABOrder_CancelOrder_Statics
{
	struct ABOrder_eventCancelOrder_Parms
	{
		FString OrderNo;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderNo;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventCancelOrder_Parms, OrderNo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderNo_MetaData), NewProp_OrderNo_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventCancelOrder_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsOrderInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3293794043
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventCancelOrder_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_CancelOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OrderNo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CancelOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_CancelOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "CancelOrder", nullptr, nullptr, Z_Construct_UFunction_UABOrder_CancelOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CancelOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABOrder_CancelOrder_Statics::ABOrder_eventCancelOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CancelOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABOrder_CancelOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABOrder_CancelOrder_Statics::ABOrder_eventCancelOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABOrder_CancelOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABOrder_CancelOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABOrder::execCancelOrder)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderNo);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelOrder(Z_Param_OrderNo,FDAccelByteModelsOrderInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABOrder Function CancelOrder

// Begin Class UABOrder Function CreateNewOrder
struct Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics
{
	struct ABOrder_eventCreateNewOrder_Parms
	{
		FAccelByteModelsOrderCreate OrderCreateRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderCreateRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrderCreateRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OrderCreateRequest = { "OrderCreateRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventCreateNewOrder_Parms, OrderCreateRequest), Z_Construct_UScriptStruct_FAccelByteModelsOrderCreate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderCreateRequest_MetaData), NewProp_OrderCreateRequest_MetaData) }; // 35120007
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventCreateNewOrder_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsOrderInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3293794043
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventCreateNewOrder_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OrderCreateRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "CreateNewOrder", nullptr, nullptr, Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::ABOrder_eventCreateNewOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::ABOrder_eventCreateNewOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABOrder_CreateNewOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABOrder::execCreateNewOrder)
{
	P_GET_STRUCT_REF(FAccelByteModelsOrderCreate,Z_Param_Out_OrderCreateRequest);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateNewOrder(Z_Param_Out_OrderCreateRequest,FDAccelByteModelsOrderInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABOrder Function CreateNewOrder

// Begin Class UABOrder Function GetUserOrder
struct Z_Construct_UFunction_UABOrder_GetUserOrder_Statics
{
	struct ABOrder_eventGetUserOrder_Parms
	{
		FString OrderNo;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderNo;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrder_Parms, OrderNo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderNo_MetaData), NewProp_OrderNo_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrder_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsOrderInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3293794043
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrder_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OrderNo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "GetUserOrder", nullptr, nullptr, Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::ABOrder_eventGetUserOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::ABOrder_eventGetUserOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABOrder_GetUserOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABOrder::execGetUserOrder)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderNo);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserOrder(Z_Param_OrderNo,FDAccelByteModelsOrderInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABOrder Function GetUserOrder

// Begin Class UABOrder Function GetUserOrderHistory
struct Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics
{
	struct ABOrder_eventGetUserOrderHistory_Parms
	{
		FString OrderNo;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderNo;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrderHistory_Parms, OrderNo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderNo_MetaData), NewProp_OrderNo_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrderHistory_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsOrderHistoryInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2362076757
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrderHistory_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OrderNo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "GetUserOrderHistory", nullptr, nullptr, Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::ABOrder_eventGetUserOrderHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::ABOrder_eventGetUserOrderHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABOrder_GetUserOrderHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABOrder::execGetUserOrderHistory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderNo);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserOrderHistory(Z_Param_OrderNo,FDArrayModelsOrderHistoryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABOrder Function GetUserOrderHistory

// Begin Class UABOrder Function GetUserOrders
struct Z_Construct_UFunction_UABOrder_GetUserOrders_Statics
{
	struct ABOrder_eventGetUserOrders_Parms
	{
		int32 Page;
		int32 Size;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Page_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrders_Parms, Page), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Page_MetaData), NewProp_Page_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrders_Parms, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrders_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPagedOrderInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 759354679
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrders_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Page,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "GetUserOrders", nullptr, nullptr, Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::ABOrder_eventGetUserOrders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::ABOrder_eventGetUserOrders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABOrder_GetUserOrders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABOrder::execGetUserOrders)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Page);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Size);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserOrders(Z_Param_Out_Page,Z_Param_Out_Size,FDAccelByteModelsPagedOrderInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABOrder Function GetUserOrders

// Begin Class UABOrder Function PreviewUserOrder
struct Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics
{
	struct ABOrder_eventPreviewUserOrder_Parms
	{
		FAccelByteModelsUserPreviewOrderRequest OrderPreviewRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderPreviewRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrderPreviewRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::NewProp_OrderPreviewRequest = { "OrderPreviewRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventPreviewUserOrder_Parms, OrderPreviewRequest), Z_Construct_UScriptStruct_FAccelByteModelsUserPreviewOrderRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderPreviewRequest_MetaData), NewProp_OrderPreviewRequest_MetaData) }; // 2392583061
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventPreviewUserOrder_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPreviewOrderResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1955011989
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOrder_eventPreviewUserOrder_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::NewProp_OrderPreviewRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "PreviewUserOrder", nullptr, nullptr, Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::ABOrder_eventPreviewUserOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::ABOrder_eventPreviewUserOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABOrder_PreviewUserOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABOrder_PreviewUserOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABOrder::execPreviewUserOrder)
{
	P_GET_STRUCT_REF(FAccelByteModelsUserPreviewOrderRequest,Z_Param_Out_OrderPreviewRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviewUserOrder(Z_Param_Out_OrderPreviewRequest,FDAccelByteModelsPreviewOrderResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABOrder Function PreviewUserOrder

// Begin Class UABOrder
void UABOrder::StaticRegisterNativesUABOrder()
{
	UClass* Class = UABOrder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelOrder", &UABOrder::execCancelOrder },
		{ "CreateNewOrder", &UABOrder::execCreateNewOrder },
		{ "GetUserOrder", &UABOrder::execGetUserOrder },
		{ "GetUserOrderHistory", &UABOrder::execGetUserOrderHistory },
		{ "GetUserOrders", &UABOrder::execGetUserOrders },
		{ "PreviewUserOrder", &UABOrder::execPreviewUserOrder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABOrder);
UClass* Z_Construct_UClass_UABOrder_NoRegister()
{
	return UABOrder::StaticClass();
}
struct Z_Construct_UClass_UABOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABOrder_CancelOrder, "CancelOrder" }, // 2989068757
		{ &Z_Construct_UFunction_UABOrder_CreateNewOrder, "CreateNewOrder" }, // 801305206
		{ &Z_Construct_UFunction_UABOrder_GetUserOrder, "GetUserOrder" }, // 3593427503
		{ &Z_Construct_UFunction_UABOrder_GetUserOrderHistory, "GetUserOrderHistory" }, // 4030845104
		{ &Z_Construct_UFunction_UABOrder_GetUserOrders, "GetUserOrders" }, // 3072979398
		{ &Z_Construct_UFunction_UABOrder_PreviewUserOrder, "PreviewUserOrder" }, // 4158500785
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABOrder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABOrder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABOrder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABOrder_Statics::ClassParams = {
	&UABOrder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABOrder_Statics::Class_MetaDataParams), Z_Construct_UClass_UABOrder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABOrder()
{
	if (!Z_Registration_Info_UClass_UABOrder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABOrder.OuterSingleton, Z_Construct_UClass_UABOrder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABOrder.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABOrder>()
{
	return UABOrder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABOrder);
UABOrder::~UABOrder() {}
// End Class UABOrder

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABOrder, UABOrder::StaticClass, TEXT("UABOrder"), &Z_Registration_Info_UClass_UABOrder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABOrder), 1482710938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_91557492(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABEntitlement.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsAttributes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsEntitlementSyncBase.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPlatformSyncMobileApple.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPlatformSyncMobileGoogle.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsTwitchDropEntitlement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABEntitlement() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABEntitlement();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABEntitlement_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAppType();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformSync();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementHistoryPagingResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementInfoResponses__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementOwnershipResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementPagingSlicedResultResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPlatformSyncMobileGoogleResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPlatformValidateUserItemPurchaseResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsDistributionReceiverResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAttributes();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementSyncBase();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileApple();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogle();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsTwitchDropEntitlement();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABEntitlement Function ConsumeUserEntitlement
struct Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics
{
	struct ABEntitlement_eventConsumeUserEntitlement_Parms
	{
		FString EntitlementId;
		int32 UseCount;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitlementId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntitlementId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UseCount;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_EntitlementId = { "EntitlementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventConsumeUserEntitlement_Parms, EntitlementId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitlementId_MetaData), NewProp_EntitlementId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_UseCount = { "UseCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventConsumeUserEntitlement_Parms, UseCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCount_MetaData), NewProp_UseCount_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventConsumeUserEntitlement_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3204570733
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventConsumeUserEntitlement_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_EntitlementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_UseCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "ConsumeUserEntitlement", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::ABEntitlement_eventConsumeUserEntitlement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::ABEntitlement_eventConsumeUserEntitlement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execConsumeUserEntitlement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UseCount);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeUserEntitlement(Z_Param_EntitlementId,Z_Param_Out_UseCount,FDAccelByteModelsEntitlementInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function ConsumeUserEntitlement

// Begin Class UABEntitlement Function CreateDistributionReceiver
struct Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics
{
	struct ABEntitlement_eventCreateDistributionReceiver_Parms
	{
		FString ExtUserId;
		FAccelByteModelsAttributes Attributes;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_ExtUserId = { "ExtUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventCreateDistributionReceiver_Parms, ExtUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtUserId_MetaData), NewProp_ExtUserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventCreateDistributionReceiver_Parms, Attributes), Z_Construct_UScriptStruct_FAccelByteModelsAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 103475718
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventCreateDistributionReceiver_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventCreateDistributionReceiver_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_ExtUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "CreateDistributionReceiver", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::ABEntitlement_eventCreateDistributionReceiver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::ABEntitlement_eventCreateDistributionReceiver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execCreateDistributionReceiver)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExtUserId);
	P_GET_STRUCT_REF(FAccelByteModelsAttributes,Z_Param_Out_Attributes);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateDistributionReceiver(Z_Param_ExtUserId,Z_Param_Out_Attributes,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function CreateDistributionReceiver

// Begin Class UABEntitlement Function DeleteDistributionReceiver
struct Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics
{
	struct ABEntitlement_eventDeleteDistributionReceiver_Parms
	{
		FString ExtUserId;
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_ExtUserId = { "ExtUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventDeleteDistributionReceiver_Parms, ExtUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtUserId_MetaData), NewProp_ExtUserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventDeleteDistributionReceiver_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventDeleteDistributionReceiver_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventDeleteDistributionReceiver_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_ExtUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "DeleteDistributionReceiver", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::ABEntitlement_eventDeleteDistributionReceiver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::ABEntitlement_eventDeleteDistributionReceiver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execDeleteDistributionReceiver)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExtUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteDistributionReceiver(Z_Param_ExtUserId,Z_Param_UserId,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function DeleteDistributionReceiver

// Begin Class UABEntitlement Function GetCurrentUserEntitlementHistory
struct Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics
{
	struct ABEntitlement_eventGetCurrentUserEntitlementHistory_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteEntitlementClass EntitlementClass;
		FDateTime StartDate;
		FDateTime EndDate;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitlementClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EntitlementClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EntitlementClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartDate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetCurrentUserEntitlementHistory_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementHistoryPagingResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3342440149
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetCurrentUserEntitlementHistory_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_EntitlementClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_EntitlementClass = { "EntitlementClass", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetCurrentUserEntitlementHistory_Parms, EntitlementClass), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitlementClass_MetaData), NewProp_EntitlementClass_MetaData) }; // 2373159630
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetCurrentUserEntitlementHistory_Parms, StartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetCurrentUserEntitlementHistory_Parms, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetCurrentUserEntitlementHistory_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetCurrentUserEntitlementHistory_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_EntitlementClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_EntitlementClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_StartDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetCurrentUserEntitlementHistory", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::ABEntitlement_eventGetCurrentUserEntitlementHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::ABEntitlement_eventGetCurrentUserEntitlementHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execGetCurrentUserEntitlementHistory)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_ENUM_REF(EAccelByteEntitlementClass,Z_Param_Out_EntitlementClass);
	P_GET_STRUCT(FDateTime,Z_Param_StartDate);
	P_GET_STRUCT(FDateTime,Z_Param_EndDate);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentUserEntitlementHistory(FDAccelByteModelsEntitlementHistoryPagingResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),(EAccelByteEntitlementClass&)(Z_Param_Out_EntitlementClass),Z_Param_StartDate,Z_Param_EndDate,Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABEntitlement Function GetCurrentUserEntitlementHistory

// Begin Class UABEntitlement Function GetDistributionReceiver
struct Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics
{
	struct ABEntitlement_eventGetDistributionReceiver_Parms
	{
		FString PublisherNamespace;
		FString PublisherUserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublisherNamespace_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublisherUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublisherNamespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublisherUserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherNamespace = { "PublisherNamespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetDistributionReceiver_Parms, PublisherNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublisherNamespace_MetaData), NewProp_PublisherNamespace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherUserId = { "PublisherUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetDistributionReceiver_Parms, PublisherUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublisherUserId_MetaData), NewProp_PublisherUserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetDistributionReceiver_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsDistributionReceiverResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1947235565
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetDistributionReceiver_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherNamespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetDistributionReceiver", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::ABEntitlement_eventGetDistributionReceiver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::ABEntitlement_eventGetDistributionReceiver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execGetDistributionReceiver)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PublisherNamespace);
	P_GET_PROPERTY(FStrProperty,Z_Param_PublisherUserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetDistributionReceiver(Z_Param_PublisherNamespace,Z_Param_PublisherUserId,FDArrayModelsDistributionReceiverResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function GetDistributionReceiver

// Begin Class UABEntitlement Function GetUserEntitlementById
struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics
{
	struct ABEntitlement_eventGetUserEntitlementById_Parms
	{
		FString Entitlementid;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entitlementid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Entitlementid;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_Entitlementid = { "Entitlementid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementById_Parms, Entitlementid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entitlementid_MetaData), NewProp_Entitlementid_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementById_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3204570733
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementById_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_Entitlementid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementById", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::ABEntitlement_eventGetUserEntitlementById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::ABEntitlement_eventGetUserEntitlementById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementById)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Entitlementid);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserEntitlementById(Z_Param_Entitlementid,FDAccelByteModelsEntitlementInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function GetUserEntitlementById

// Begin Class UABEntitlement Function GetUserEntitlementByIds
struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics
{
	struct ABEntitlement_eventGetUserEntitlementByIds_Parms
	{
		TArray<FString> EntitlementIds;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		bool bAvailablePlatformOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitlementIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntitlementIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EntitlementIds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static void NewProp_bAvailablePlatformOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvailablePlatformOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_EntitlementIds_Inner = { "EntitlementIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_EntitlementIds = { "EntitlementIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementByIds_Parms, EntitlementIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitlementIds_MetaData), NewProp_EntitlementIds_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementByIds_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementInfoResponses__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1114433147
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementByIds_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
void Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_bAvailablePlatformOnly_SetBit(void* Obj)
{
	((ABEntitlement_eventGetUserEntitlementByIds_Parms*)Obj)->bAvailablePlatformOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_bAvailablePlatformOnly = { "bAvailablePlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABEntitlement_eventGetUserEntitlementByIds_Parms), &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_bAvailablePlatformOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_EntitlementIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_EntitlementIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::NewProp_bAvailablePlatformOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementByIds", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::ABEntitlement_eventGetUserEntitlementByIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::ABEntitlement_eventGetUserEntitlementByIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementByIds)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_EntitlementIds);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_UBOOL(Z_Param_bAvailablePlatformOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserEntitlementByIds(Z_Param_Out_EntitlementIds,FDAccelByteModelsEntitlementInfoResponses(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_bAvailablePlatformOnly);
	P_NATIVE_END;
}
// End Class UABEntitlement Function GetUserEntitlementByIds

// Begin Class UABEntitlement Function GetUserEntitlementOwnershipAny
struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics
{
	struct ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms
	{
		TArray<FString> ItemIds;
		TArray<FString> AppIds;
		TArray<FString> Skus;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AppIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Skus_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Skus;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds_Inner = { "ItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds = { "ItemIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms, ItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIds_MetaData), NewProp_ItemIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds_Inner = { "AppIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds = { "AppIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms, AppIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppIds_MetaData), NewProp_AppIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus_Inner = { "Skus", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus = { "Skus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms, Skus), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skus_MetaData), NewProp_Skus_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementOwnershipResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3656511628
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementOwnershipAny", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementOwnershipAny)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_ItemIds);
	P_GET_TARRAY_REF(FString,Z_Param_Out_AppIds);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Skus);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserEntitlementOwnershipAny(Z_Param_Out_ItemIds,Z_Param_Out_AppIds,Z_Param_Out_Skus,FDAccelByteModelsEntitlementOwnershipResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function GetUserEntitlementOwnershipAny

// Begin Class UABEntitlement Function GetUserEntitlementOwnershipByAppId
struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics
{
	struct ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms
	{
		FString AppId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementOwnershipResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3656511628
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementOwnershipByAppId", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementOwnershipByAppId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AppId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserEntitlementOwnershipByAppId(Z_Param_AppId,FDAccelByteModelsEntitlementOwnershipResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function GetUserEntitlementOwnershipByAppId

// Begin Class UABEntitlement Function GetUserEntitlementOwnershipByItemId
struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics
{
	struct ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms
	{
		FString ItemId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementOwnershipResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3656511628
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementOwnershipByItemId", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementOwnershipByItemId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserEntitlementOwnershipByItemId(Z_Param_ItemId,FDAccelByteModelsEntitlementOwnershipResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function GetUserEntitlementOwnershipByItemId

// Begin Class UABEntitlement Function GetUserEntitlementOwnershipBySku
struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics
{
	struct ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms
	{
		FString Sku;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sku;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_Sku = { "Sku", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms, Sku), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sku_MetaData), NewProp_Sku_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementOwnershipResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3656511628
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_Sku,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementOwnershipBySku", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementOwnershipBySku)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Sku);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserEntitlementOwnershipBySku(Z_Param_Sku,FDAccelByteModelsEntitlementOwnershipResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function GetUserEntitlementOwnershipBySku

// Begin Class UABEntitlement Function QueryUserEntitlements
struct Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics
{
	struct ABEntitlement_eventQueryUserEntitlements_Parms
	{
		FString EntitlementName;
		TArray<FString> ItemIds;
		int32 Offset;
		int32 Limit;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteEntitlementClass EntitlementClass;
		EAccelByteAppType AppType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitlementName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntitlementName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemIds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EntitlementClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EntitlementClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AppType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AppType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementName = { "EntitlementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, EntitlementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitlementName_MetaData), NewProp_EntitlementName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds_Inner = { "ItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds = { "ItemIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, ItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIds_MetaData), NewProp_ItemIds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementPagingSlicedResultResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2602392682
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementClass = { "EntitlementClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, EntitlementClass), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass, METADATA_PARAMS(0, nullptr) }; // 2373159630
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_AppType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_AppType = { "AppType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, AppType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAppType, METADATA_PARAMS(0, nullptr) }; // 874377324
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_AppType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_AppType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "QueryUserEntitlements", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::ABEntitlement_eventQueryUserEntitlements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::ABEntitlement_eventQueryUserEntitlements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execQueryUserEntitlements)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementName);
	P_GET_TARRAY_REF(FString,Z_Param_Out_ItemIds);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_ENUM(EAccelByteEntitlementClass,Z_Param_EntitlementClass);
	P_GET_ENUM(EAccelByteAppType,Z_Param_AppType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryUserEntitlements(Z_Param_EntitlementName,Z_Param_Out_ItemIds,Z_Param_Out_Offset,Z_Param_Out_Limit,FDAccelByteModelsEntitlementPagingSlicedResultResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),EAccelByteEntitlementClass(Z_Param_EntitlementClass),EAccelByteAppType(Z_Param_AppType));
	P_NATIVE_END;
}
// End Class UABEntitlement Function QueryUserEntitlements

// Begin Class UABEntitlement Function SyncMobilePlatformPurchaseApple
struct Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics
{
	struct ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms
	{
		FAccelByteModelsPlatformSyncMobileApple SyncRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_SyncRequest = { "SyncRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms, SyncRequest), Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileApple, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncRequest_MetaData), NewProp_SyncRequest_MetaData) }; // 3916656127
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_SyncRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncMobilePlatformPurchaseApple", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execSyncMobilePlatformPurchaseApple)
{
	P_GET_STRUCT_REF(FAccelByteModelsPlatformSyncMobileApple,Z_Param_Out_SyncRequest);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SyncMobilePlatformPurchaseApple(Z_Param_Out_SyncRequest,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function SyncMobilePlatformPurchaseApple

// Begin Class UABEntitlement Function SyncMobilePlatformPurchaseGoogle
struct Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics
{
	struct ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms
	{
		FAccelByteModelsPlatformSyncMobileGoogle SyncRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_SyncRequest = { "SyncRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms, SyncRequest), Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncRequest_MetaData), NewProp_SyncRequest_MetaData) }; // 2173124403
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_SyncRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncMobilePlatformPurchaseGoogle", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execSyncMobilePlatformPurchaseGoogle)
{
	P_GET_STRUCT_REF(FAccelByteModelsPlatformSyncMobileGoogle,Z_Param_Out_SyncRequest);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SyncMobilePlatformPurchaseGoogle(Z_Param_Out_SyncRequest,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function SyncMobilePlatformPurchaseGoogle

// Begin Class UABEntitlement Function SyncMobilePlatformPurchaseGooglePlay
struct Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics
{
	struct ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms
	{
		FAccelByteModelsPlatformSyncMobileGoogle SyncRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_SyncRequest = { "SyncRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms, SyncRequest), Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncRequest_MetaData), NewProp_SyncRequest_MetaData) }; // 2173124403
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPlatformSyncMobileGoogleResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2644560444
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_SyncRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncMobilePlatformPurchaseGooglePlay", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execSyncMobilePlatformPurchaseGooglePlay)
{
	P_GET_STRUCT_REF(FAccelByteModelsPlatformSyncMobileGoogle,Z_Param_Out_SyncRequest);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SyncMobilePlatformPurchaseGooglePlay(Z_Param_Out_SyncRequest,FDAccelByteModelsPlatformSyncMobileGoogleResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function SyncMobilePlatformPurchaseGooglePlay

// Begin Class UABEntitlement Function SyncPlatformPurchase
struct Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics
{
	struct ABEntitlement_eventSyncPlatformPurchase_Parms
	{
		EAccelBytePlatformSync PlatformType;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchase_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformSync, METADATA_PARAMS(0, nullptr) }; // 413542632
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchase_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchase_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncPlatformPurchase", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::ABEntitlement_eventSyncPlatformPurchase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::ABEntitlement_eventSyncPlatformPurchase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execSyncPlatformPurchase)
{
	P_GET_ENUM(EAccelBytePlatformSync,Z_Param_PlatformType);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SyncPlatformPurchase(EAccelBytePlatformSync(Z_Param_PlatformType),FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function SyncPlatformPurchase

// Begin Class UABEntitlement Function SyncPlatformPurchaseSingleItem
struct Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics
{
	struct ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms
	{
		FAccelByteModelsEntitlementSyncBase EntitlementSyncBase;
		EAccelBytePlatformSync PlatformType;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitlementSyncBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntitlementSyncBase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_EntitlementSyncBase = { "EntitlementSyncBase", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms, EntitlementSyncBase), Z_Construct_UScriptStruct_FAccelByteModelsEntitlementSyncBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitlementSyncBase_MetaData), NewProp_EntitlementSyncBase_MetaData) }; // 1681379430
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformSync, METADATA_PARAMS(0, nullptr) }; // 413542632
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_EntitlementSyncBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncPlatformPurchaseSingleItem", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execSyncPlatformPurchaseSingleItem)
{
	P_GET_STRUCT_REF(FAccelByteModelsEntitlementSyncBase,Z_Param_Out_EntitlementSyncBase);
	P_GET_ENUM(EAccelBytePlatformSync,Z_Param_PlatformType);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SyncPlatformPurchaseSingleItem(Z_Param_Out_EntitlementSyncBase,EAccelBytePlatformSync(Z_Param_PlatformType),FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function SyncPlatformPurchaseSingleItem

// Begin Class UABEntitlement Function SyncTwitchDropEntitlement
struct Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics
{
	struct ABEntitlement_eventSyncTwitchDropEntitlement_Parms
	{
		FAccelByteModelsTwitchDropEntitlement TwitchDropModel;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwitchDropModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwitchDropModel;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_TwitchDropModel = { "TwitchDropModel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncTwitchDropEntitlement_Parms, TwitchDropModel), Z_Construct_UScriptStruct_FAccelByteModelsTwitchDropEntitlement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwitchDropModel_MetaData), NewProp_TwitchDropModel_MetaData) }; // 3972295980
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncTwitchDropEntitlement_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventSyncTwitchDropEntitlement_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_TwitchDropModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncTwitchDropEntitlement", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::ABEntitlement_eventSyncTwitchDropEntitlement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::ABEntitlement_eventSyncTwitchDropEntitlement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execSyncTwitchDropEntitlement)
{
	P_GET_STRUCT_REF(FAccelByteModelsTwitchDropEntitlement,Z_Param_Out_TwitchDropModel);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SyncTwitchDropEntitlement(Z_Param_Out_TwitchDropModel,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function SyncTwitchDropEntitlement

// Begin Class UABEntitlement Function UpdateDistributionReceiver
struct Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics
{
	struct ABEntitlement_eventUpdateDistributionReceiver_Parms
	{
		FString ExtUserId;
		FAccelByteModelsAttributes Attributes;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_ExtUserId = { "ExtUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventUpdateDistributionReceiver_Parms, ExtUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtUserId_MetaData), NewProp_ExtUserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventUpdateDistributionReceiver_Parms, Attributes), Z_Construct_UScriptStruct_FAccelByteModelsAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 103475718
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventUpdateDistributionReceiver_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventUpdateDistributionReceiver_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_ExtUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "UpdateDistributionReceiver", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::ABEntitlement_eventUpdateDistributionReceiver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::ABEntitlement_eventUpdateDistributionReceiver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execUpdateDistributionReceiver)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExtUserId);
	P_GET_STRUCT_REF(FAccelByteModelsAttributes,Z_Param_Out_Attributes);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDistributionReceiver(Z_Param_ExtUserId,Z_Param_Out_Attributes,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function UpdateDistributionReceiver

// Begin Class UABEntitlement Function ValidateUserItemPurchaseCondition
struct Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics
{
	struct ABEntitlement_eventValidateUserItemPurchaseCondition_Parms
	{
		TArray<FString> Items;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventValidateUserItemPurchaseCondition_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventValidateUserItemPurchaseCondition_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPlatformValidateUserItemPurchaseResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2883164417
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABEntitlement_eventValidateUserItemPurchaseCondition_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "ValidateUserItemPurchaseCondition", nullptr, nullptr, Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::ABEntitlement_eventValidateUserItemPurchaseCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::ABEntitlement_eventValidateUserItemPurchaseCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABEntitlement::execValidateUserItemPurchaseCondition)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Items);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ValidateUserItemPurchaseCondition(Z_Param_Out_Items,FDAccelByteModelsPlatformValidateUserItemPurchaseResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABEntitlement Function ValidateUserItemPurchaseCondition

// Begin Class UABEntitlement
void UABEntitlement::StaticRegisterNativesUABEntitlement()
{
	UClass* Class = UABEntitlement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConsumeUserEntitlement", &UABEntitlement::execConsumeUserEntitlement },
		{ "CreateDistributionReceiver", &UABEntitlement::execCreateDistributionReceiver },
		{ "DeleteDistributionReceiver", &UABEntitlement::execDeleteDistributionReceiver },
		{ "GetCurrentUserEntitlementHistory", &UABEntitlement::execGetCurrentUserEntitlementHistory },
		{ "GetDistributionReceiver", &UABEntitlement::execGetDistributionReceiver },
		{ "GetUserEntitlementById", &UABEntitlement::execGetUserEntitlementById },
		{ "GetUserEntitlementByIds", &UABEntitlement::execGetUserEntitlementByIds },
		{ "GetUserEntitlementOwnershipAny", &UABEntitlement::execGetUserEntitlementOwnershipAny },
		{ "GetUserEntitlementOwnershipByAppId", &UABEntitlement::execGetUserEntitlementOwnershipByAppId },
		{ "GetUserEntitlementOwnershipByItemId", &UABEntitlement::execGetUserEntitlementOwnershipByItemId },
		{ "GetUserEntitlementOwnershipBySku", &UABEntitlement::execGetUserEntitlementOwnershipBySku },
		{ "QueryUserEntitlements", &UABEntitlement::execQueryUserEntitlements },
		{ "SyncMobilePlatformPurchaseApple", &UABEntitlement::execSyncMobilePlatformPurchaseApple },
		{ "SyncMobilePlatformPurchaseGoogle", &UABEntitlement::execSyncMobilePlatformPurchaseGoogle },
		{ "SyncMobilePlatformPurchaseGooglePlay", &UABEntitlement::execSyncMobilePlatformPurchaseGooglePlay },
		{ "SyncPlatformPurchase", &UABEntitlement::execSyncPlatformPurchase },
		{ "SyncPlatformPurchaseSingleItem", &UABEntitlement::execSyncPlatformPurchaseSingleItem },
		{ "SyncTwitchDropEntitlement", &UABEntitlement::execSyncTwitchDropEntitlement },
		{ "UpdateDistributionReceiver", &UABEntitlement::execUpdateDistributionReceiver },
		{ "ValidateUserItemPurchaseCondition", &UABEntitlement::execValidateUserItemPurchaseCondition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABEntitlement);
UClass* Z_Construct_UClass_UABEntitlement_NoRegister()
{
	return UABEntitlement::StaticClass();
}
struct Z_Construct_UClass_UABEntitlement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABEntitlement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement, "ConsumeUserEntitlement" }, // 4245962769
		{ &Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver, "CreateDistributionReceiver" }, // 2990140177
		{ &Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver, "DeleteDistributionReceiver" }, // 699055743
		{ &Z_Construct_UFunction_UABEntitlement_GetCurrentUserEntitlementHistory, "GetCurrentUserEntitlementHistory" }, // 4277701075
		{ &Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver, "GetDistributionReceiver" }, // 555151035
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById, "GetUserEntitlementById" }, // 3315871023
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementByIds, "GetUserEntitlementByIds" }, // 3999720174
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny, "GetUserEntitlementOwnershipAny" }, // 2328316092
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId, "GetUserEntitlementOwnershipByAppId" }, // 2210707656
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId, "GetUserEntitlementOwnershipByItemId" }, // 4286385707
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku, "GetUserEntitlementOwnershipBySku" }, // 2171232182
		{ &Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements, "QueryUserEntitlements" }, // 1903700966
		{ &Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple, "SyncMobilePlatformPurchaseApple" }, // 2168517304
		{ &Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle, "SyncMobilePlatformPurchaseGoogle" }, // 1894512809
		{ &Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay, "SyncMobilePlatformPurchaseGooglePlay" }, // 3602288085
		{ &Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase, "SyncPlatformPurchase" }, // 1860503895
		{ &Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem, "SyncPlatformPurchaseSingleItem" }, // 4043578532
		{ &Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement, "SyncTwitchDropEntitlement" }, // 3878763419
		{ &Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver, "UpdateDistributionReceiver" }, // 2600877422
		{ &Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition, "ValidateUserItemPurchaseCondition" }, // 2736877078
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABEntitlement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABEntitlement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABEntitlement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABEntitlement_Statics::ClassParams = {
	&UABEntitlement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABEntitlement_Statics::Class_MetaDataParams), Z_Construct_UClass_UABEntitlement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABEntitlement()
{
	if (!Z_Registration_Info_UClass_UABEntitlement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABEntitlement.OuterSingleton, Z_Construct_UClass_UABEntitlement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABEntitlement.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABEntitlement>()
{
	return UABEntitlement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABEntitlement);
UABEntitlement::~UABEntitlement() {}
// End Class UABEntitlement

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABEntitlement, UABEntitlement::StaticClass, TEXT("UABEntitlement"), &Z_Registration_Info_UClass_UABEntitlement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABEntitlement), 3692470816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_2091733116(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerUGC.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUGCFilterRequestV2.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUGCSearchContentsRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUGCUpdateRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerUGC() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerUGC();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerUGC_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentSortByV2();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUgcOrderBy();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUgcSortBy();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCBulkContentResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCBulkContentResponseV2__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCContentPageResponseV2__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCContentPagingResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCContentResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCContentResponseV2__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsPagingResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsPagingResponseV2__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCServerResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCSearchContentsRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerUGC Function DeleteContentByShareCode
struct Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics
{
	struct ABServerUGC_eventDeleteContentByShareCode_Parms
	{
		FString UserId;
		FString ChannelId;
		FString ShareCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareCode_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShareCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventDeleteContentByShareCode_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventDeleteContentByShareCode_Parms, ChannelId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelId_MetaData), NewProp_ChannelId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ShareCode = { "ShareCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventDeleteContentByShareCode_Parms, ShareCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareCode_MetaData), NewProp_ShareCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventDeleteContentByShareCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventDeleteContentByShareCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ShareCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "DeleteContentByShareCode", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::ABServerUGC_eventDeleteContentByShareCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::ABServerUGC_eventDeleteContentByShareCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execDeleteContentByShareCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChannelId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ShareCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteContentByShareCode(Z_Param_UserId,Z_Param_ChannelId,Z_Param_ShareCode,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerUGC Function DeleteContentByShareCode

// Begin Class UABServerUGC Function ModifyContentByShareCode
struct Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics
{
	struct ABServerUGC_eventModifyContentByShareCode_Parms
	{
		FString UserId;
		FString ChannelId;
		FString ShareCode;
		FAccelByteModelsUGCUpdateRequest ModifyRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyRequest_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShareCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, ChannelId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelId_MetaData), NewProp_ChannelId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ShareCode = { "ShareCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, ShareCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareCode_MetaData), NewProp_ShareCode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ModifyRequest = { "ModifyRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, ModifyRequest), Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyRequest_MetaData), NewProp_ModifyRequest_MetaData) }; // 65955993
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCServerResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 952840976
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ShareCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ModifyRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "ModifyContentByShareCode", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::ABServerUGC_eventModifyContentByShareCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::ABServerUGC_eventModifyContentByShareCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execModifyContentByShareCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChannelId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ShareCode);
	P_GET_STRUCT_REF(FAccelByteModelsUGCUpdateRequest,Z_Param_Out_ModifyRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyContentByShareCode(Z_Param_UserId,Z_Param_ChannelId,Z_Param_ShareCode,Z_Param_Out_ModifyRequest,FDModelsUGCServerResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerUGC Function ModifyContentByShareCode

// Begin Class UABServerUGC Function PublicGetContentBulk
struct Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics
{
	struct ABServerUGC_eventPublicGetContentBulk_Parms
	{
		TArray<FString> ContentIds;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContentIds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::NewProp_ContentIds_Inner = { "ContentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::NewProp_ContentIds = { "ContentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentBulk_Parms, ContentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentIds_MetaData), NewProp_ContentIds_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentBulk_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCBulkContentResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3956299759
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentBulk_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::NewProp_ContentIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::NewProp_ContentIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicGetContentBulk", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::ABServerUGC_eventPublicGetContentBulk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::ABServerUGC_eventPublicGetContentBulk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicGetContentBulk)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_ContentIds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicGetContentBulk(Z_Param_Out_ContentIds,FDModelsUGCBulkContentResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicGetContentBulk

// Begin Class UABServerUGC Function PublicGetContentBulkByIdsV2
struct Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics
{
	struct ABServerUGC_eventPublicGetContentBulkByIdsV2_Parms
	{
		TArray<FString> ContentIds;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContentIds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::NewProp_ContentIds_Inner = { "ContentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::NewProp_ContentIds = { "ContentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentBulkByIdsV2_Parms, ContentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentIds_MetaData), NewProp_ContentIds_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentBulkByIdsV2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCBulkContentResponseV2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3958582074
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentBulkByIdsV2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::NewProp_ContentIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::NewProp_ContentIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicGetContentBulkByIdsV2", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::ABServerUGC_eventPublicGetContentBulkByIdsV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::ABServerUGC_eventPublicGetContentBulkByIdsV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicGetContentBulkByIdsV2)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_ContentIds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicGetContentBulkByIdsV2(Z_Param_Out_ContentIds,FDModelsUGCBulkContentResponseV2(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicGetContentBulkByIdsV2

// Begin Class UABServerUGC Function PublicGetContentByContentId
struct Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics
{
	struct ABServerUGC_eventPublicGetContentByContentId_Parms
	{
		FString ContentId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::NewProp_ContentId = { "ContentId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByContentId_Parms, ContentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentId_MetaData), NewProp_ContentId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByContentId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCContentResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3126357082
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByContentId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::NewProp_ContentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicGetContentByContentId", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::ABServerUGC_eventPublicGetContentByContentId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::ABServerUGC_eventPublicGetContentByContentId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicGetContentByContentId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicGetContentByContentId(Z_Param_ContentId,FDModelsUGCContentResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicGetContentByContentId

// Begin Class UABServerUGC Function PublicGetContentByContentIdV2
struct Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics
{
	struct ABServerUGC_eventPublicGetContentByContentIdV2_Parms
	{
		FString ContentId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::NewProp_ContentId = { "ContentId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByContentIdV2_Parms, ContentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentId_MetaData), NewProp_ContentId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByContentIdV2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCContentResponseV2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2221744759
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByContentIdV2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::NewProp_ContentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicGetContentByContentIdV2", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::ABServerUGC_eventPublicGetContentByContentIdV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::ABServerUGC_eventPublicGetContentByContentIdV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicGetContentByContentIdV2)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicGetContentByContentIdV2(Z_Param_ContentId,FDModelsUGCContentResponseV2(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicGetContentByContentIdV2

// Begin Class UABServerUGC Function PublicGetContentByShareCode
struct Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics
{
	struct ABServerUGC_eventPublicGetContentByShareCode_Parms
	{
		FString ShareCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShareCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::NewProp_ShareCode = { "ShareCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByShareCode_Parms, ShareCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareCode_MetaData), NewProp_ShareCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByShareCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCContentResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3126357082
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByShareCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::NewProp_ShareCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicGetContentByShareCode", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::ABServerUGC_eventPublicGetContentByShareCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::ABServerUGC_eventPublicGetContentByShareCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicGetContentByShareCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ShareCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicGetContentByShareCode(Z_Param_ShareCode,FDModelsUGCContentResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicGetContentByShareCode

// Begin Class UABServerUGC Function PublicGetContentByShareCodeV2
struct Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics
{
	struct ABServerUGC_eventPublicGetContentByShareCodeV2_Parms
	{
		FString ShareCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShareCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::NewProp_ShareCode = { "ShareCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByShareCodeV2_Parms, ShareCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareCode_MetaData), NewProp_ShareCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByShareCodeV2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCContentResponseV2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2221744759
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetContentByShareCodeV2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::NewProp_ShareCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicGetContentByShareCodeV2", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::ABServerUGC_eventPublicGetContentByShareCodeV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::ABServerUGC_eventPublicGetContentByShareCodeV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicGetContentByShareCodeV2)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ShareCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicGetContentByShareCodeV2(Z_Param_ShareCode,FDModelsUGCContentResponseV2(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicGetContentByShareCodeV2

// Begin Class UABServerUGC Function PublicGetUserContent
struct Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics
{
	struct ABServerUGC_eventPublicGetUserContent_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetUserContent_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetUserContent_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCContentPagingResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1018761850
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetUserContent_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetUserContent_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetUserContent_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicGetUserContent", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::ABServerUGC_eventPublicGetUserContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::ABServerUGC_eventPublicGetUserContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicGetUserContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicGetUserContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicGetUserContent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicGetUserContent(Z_Param_UserId,FDModelsUGCContentPagingResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicGetUserContent

// Begin Class UABServerUGC Function PublicGetUserContentsV2
struct Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics
{
	struct ABServerUGC_eventPublicGetUserContentsV2_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetUserContentsV2_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetUserContentsV2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCContentPageResponseV2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 687401363
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetUserContentsV2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetUserContentsV2_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicGetUserContentsV2_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicGetUserContentsV2", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::ABServerUGC_eventPublicGetUserContentsV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::ABServerUGC_eventPublicGetUserContentsV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicGetUserContentsV2)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicGetUserContentsV2(Z_Param_UserId,FDModelsUGCContentPageResponseV2(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicGetUserContentsV2

// Begin Class UABServerUGC Function PublicSearchAllContents
struct Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics
{
	struct ABServerUGC_eventPublicSearchAllContents_Parms
	{
		FAccelByteModelsUGCSearchContentsRequest Request;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchAllContents_Parms, Request), Z_Construct_UScriptStruct_FAccelByteModelsUGCSearchContentsRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3855964181
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchAllContents_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsPagingResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1736721112
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchAllContents_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchAllContents_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchAllContents_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicSearchAllContents", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::ABServerUGC_eventPublicSearchAllContents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::ABServerUGC_eventPublicSearchAllContents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicSearchAllContents)
{
	P_GET_STRUCT_REF(FAccelByteModelsUGCSearchContentsRequest,Z_Param_Out_Request);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicSearchAllContents(Z_Param_Out_Request,FDModelsUGCSearchContentsPagingResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicSearchAllContents

// Begin Class UABServerUGC Function PublicSearchContents
struct Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics
{
	struct ABServerUGC_eventPublicSearchContents_Parms
	{
		FString Name;
		FString Creator;
		FString Type;
		FString Subtype;
		TArray<FString> Tags;
		bool IsOfficial;
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteUgcSortBy SortBy;
		EAccelByteUgcOrderBy OrderBy;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Creator_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subtype_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Creator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Subtype;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static void NewProp_IsOfficial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOfficial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OrderBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OrderBy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Creator = { "Creator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, Creator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Creator_MetaData), NewProp_Creator_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Subtype = { "Subtype", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, Subtype), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subtype_MetaData), NewProp_Subtype_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
void Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_IsOfficial_SetBit(void* Obj)
{
	((ABServerUGC_eventPublicSearchContents_Parms*)Obj)->IsOfficial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_IsOfficial = { "IsOfficial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABServerUGC_eventPublicSearchContents_Parms), &Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_IsOfficial_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsPagingResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1736721112
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUgcSortBy, METADATA_PARAMS(0, nullptr) }; // 1504983999
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_OrderBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_OrderBy = { "OrderBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, OrderBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUgcOrderBy, METADATA_PARAMS(0, nullptr) }; // 1235560746
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContents_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Creator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Subtype,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_IsOfficial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_OrderBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_OrderBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicSearchContents", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::ABServerUGC_eventPublicSearchContents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::ABServerUGC_eventPublicSearchContents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicSearchContents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicSearchContents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicSearchContents)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_Creator);
	P_GET_PROPERTY(FStrProperty,Z_Param_Type);
	P_GET_PROPERTY(FStrProperty,Z_Param_Subtype);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
	P_GET_UBOOL(Z_Param_IsOfficial);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_ENUM(EAccelByteUgcSortBy,Z_Param_SortBy);
	P_GET_ENUM(EAccelByteUgcOrderBy,Z_Param_OrderBy);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicSearchContents(Z_Param_Name,Z_Param_Creator,Z_Param_Type,Z_Param_Subtype,Z_Param_Out_Tags,Z_Param_IsOfficial,Z_Param_UserId,FDModelsUGCSearchContentsPagingResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),EAccelByteUgcSortBy(Z_Param_SortBy),EAccelByteUgcOrderBy(Z_Param_OrderBy),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicSearchContents

// Begin Class UABServerUGC Function PublicSearchContentsSpecificToChannelV2
struct Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics
{
	struct ABServerUGC_eventPublicSearchContentsSpecificToChannelV2_Parms
	{
		FString ChannelId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
		EAccelByteUGCContentSortByV2 SortBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsSpecificToChannelV2_Parms, ChannelId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelId_MetaData), NewProp_ChannelId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsSpecificToChannelV2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsPagingResponseV2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 790405669
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsSpecificToChannelV2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsSpecificToChannelV2_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsSpecificToChannelV2_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsSpecificToChannelV2_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentSortByV2, METADATA_PARAMS(0, nullptr) }; // 1577757989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::NewProp_SortBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicSearchContentsSpecificToChannelV2", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::ABServerUGC_eventPublicSearchContentsSpecificToChannelV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::ABServerUGC_eventPublicSearchContentsSpecificToChannelV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicSearchContentsSpecificToChannelV2)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ChannelId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_ENUM(EAccelByteUGCContentSortByV2,Z_Param_SortBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicSearchContentsSpecificToChannelV2(Z_Param_ChannelId,FDModelsUGCSearchContentsPagingResponseV2(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset,EAccelByteUGCContentSortByV2(Z_Param_SortBy));
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicSearchContentsSpecificToChannelV2

// Begin Class UABServerUGC Function PublicSearchContentsV2
struct Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics
{
	struct ABServerUGC_eventPublicSearchContentsV2_Parms
	{
		FAccelByteModelsUGCFilterRequestV2 Filter;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
		EAccelByteUGCContentSortByV2 SortBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsV2_Parms, Filter), Z_Construct_UScriptStruct_FAccelByteModelsUGCFilterRequestV2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 2260097112
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsV2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsPagingResponseV2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 790405669
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsV2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsV2_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsV2_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventPublicSearchContentsV2_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentSortByV2, METADATA_PARAMS(0, nullptr) }; // 1577757989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::NewProp_SortBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "PublicSearchContentsV2", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::ABServerUGC_eventPublicSearchContentsV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::ABServerUGC_eventPublicSearchContentsV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execPublicSearchContentsV2)
{
	P_GET_STRUCT_REF(FAccelByteModelsUGCFilterRequestV2,Z_Param_Out_Filter);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_ENUM(EAccelByteUGCContentSortByV2,Z_Param_SortBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublicSearchContentsV2(Z_Param_Out_Filter,FDModelsUGCSearchContentsPagingResponseV2(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset,EAccelByteUGCContentSortByV2(Z_Param_SortBy));
	P_NATIVE_END;
}
// End Class UABServerUGC Function PublicSearchContentsV2

// Begin Class UABServerUGC Function SearchContents
struct Z_Construct_UFunction_UABServerUGC_SearchContents_Statics
{
	struct ABServerUGC_eventSearchContents_Parms
	{
		FAccelByteModelsUGCSearchContentsRequest Request;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContents_Parms, Request), Z_Construct_UScriptStruct_FAccelByteModelsUGCSearchContentsRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3855964181
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContents_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1723832538
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContents_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContents_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContents_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "SearchContents", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::ABServerUGC_eventSearchContents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::ABServerUGC_eventSearchContents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_SearchContents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execSearchContents)
{
	P_GET_STRUCT_REF(FAccelByteModelsUGCSearchContentsRequest,Z_Param_Out_Request);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SearchContents(Z_Param_Out_Request,FDModelsUGCSearchContentsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABServerUGC Function SearchContents

// Begin Class UABServerUGC Function SearchContentsSpecificToChannel
struct Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics
{
	struct ABServerUGC_eventSearchContentsSpecificToChannel_Parms
	{
		FString ChannelId;
		FAccelByteModelsUGCSearchContentsRequest Request;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, ChannelId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelId_MetaData), NewProp_ChannelId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, Request), Z_Construct_UScriptStruct_FAccelByteModelsUGCSearchContentsRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3855964181
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1723832538
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "SearchContentsSpecificToChannel", nullptr, nullptr, Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::ABServerUGC_eventSearchContentsSpecificToChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::ABServerUGC_eventSearchContentsSpecificToChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerUGC::execSearchContentsSpecificToChannel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ChannelId);
	P_GET_STRUCT_REF(FAccelByteModelsUGCSearchContentsRequest,Z_Param_Out_Request);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SearchContentsSpecificToChannel(Z_Param_ChannelId,Z_Param_Out_Request,FDModelsUGCSearchContentsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABServerUGC Function SearchContentsSpecificToChannel

// Begin Class UABServerUGC
void UABServerUGC::StaticRegisterNativesUABServerUGC()
{
	UClass* Class = UABServerUGC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteContentByShareCode", &UABServerUGC::execDeleteContentByShareCode },
		{ "ModifyContentByShareCode", &UABServerUGC::execModifyContentByShareCode },
		{ "PublicGetContentBulk", &UABServerUGC::execPublicGetContentBulk },
		{ "PublicGetContentBulkByIdsV2", &UABServerUGC::execPublicGetContentBulkByIdsV2 },
		{ "PublicGetContentByContentId", &UABServerUGC::execPublicGetContentByContentId },
		{ "PublicGetContentByContentIdV2", &UABServerUGC::execPublicGetContentByContentIdV2 },
		{ "PublicGetContentByShareCode", &UABServerUGC::execPublicGetContentByShareCode },
		{ "PublicGetContentByShareCodeV2", &UABServerUGC::execPublicGetContentByShareCodeV2 },
		{ "PublicGetUserContent", &UABServerUGC::execPublicGetUserContent },
		{ "PublicGetUserContentsV2", &UABServerUGC::execPublicGetUserContentsV2 },
		{ "PublicSearchAllContents", &UABServerUGC::execPublicSearchAllContents },
		{ "PublicSearchContents", &UABServerUGC::execPublicSearchContents },
		{ "PublicSearchContentsSpecificToChannelV2", &UABServerUGC::execPublicSearchContentsSpecificToChannelV2 },
		{ "PublicSearchContentsV2", &UABServerUGC::execPublicSearchContentsV2 },
		{ "SearchContents", &UABServerUGC::execSearchContents },
		{ "SearchContentsSpecificToChannel", &UABServerUGC::execSearchContentsSpecificToChannel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerUGC);
UClass* Z_Construct_UClass_UABServerUGC_NoRegister()
{
	return UABServerUGC::StaticClass();
}
struct Z_Construct_UClass_UABServerUGC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerUGC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode, "DeleteContentByShareCode" }, // 3308656742
		{ &Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode, "ModifyContentByShareCode" }, // 706646329
		{ &Z_Construct_UFunction_UABServerUGC_PublicGetContentBulk, "PublicGetContentBulk" }, // 2814071030
		{ &Z_Construct_UFunction_UABServerUGC_PublicGetContentBulkByIdsV2, "PublicGetContentBulkByIdsV2" }, // 2672701512
		{ &Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentId, "PublicGetContentByContentId" }, // 3594868717
		{ &Z_Construct_UFunction_UABServerUGC_PublicGetContentByContentIdV2, "PublicGetContentByContentIdV2" }, // 2080825698
		{ &Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCode, "PublicGetContentByShareCode" }, // 2396741863
		{ &Z_Construct_UFunction_UABServerUGC_PublicGetContentByShareCodeV2, "PublicGetContentByShareCodeV2" }, // 2576279062
		{ &Z_Construct_UFunction_UABServerUGC_PublicGetUserContent, "PublicGetUserContent" }, // 389591317
		{ &Z_Construct_UFunction_UABServerUGC_PublicGetUserContentsV2, "PublicGetUserContentsV2" }, // 3296376868
		{ &Z_Construct_UFunction_UABServerUGC_PublicSearchAllContents, "PublicSearchAllContents" }, // 3654788631
		{ &Z_Construct_UFunction_UABServerUGC_PublicSearchContents, "PublicSearchContents" }, // 3195381746
		{ &Z_Construct_UFunction_UABServerUGC_PublicSearchContentsSpecificToChannelV2, "PublicSearchContentsSpecificToChannelV2" }, // 2390276955
		{ &Z_Construct_UFunction_UABServerUGC_PublicSearchContentsV2, "PublicSearchContentsV2" }, // 1522270157
		{ &Z_Construct_UFunction_UABServerUGC_SearchContents, "SearchContents" }, // 3988433248
		{ &Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel, "SearchContentsSpecificToChannel" }, // 1453383305
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerUGC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerUGC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerUGC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerUGC_Statics::ClassParams = {
	&UABServerUGC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerUGC_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerUGC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerUGC()
{
	if (!Z_Registration_Info_UClass_UABServerUGC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerUGC.OuterSingleton, Z_Construct_UClass_UABServerUGC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerUGC.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerUGC>()
{
	return UABServerUGC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerUGC);
UABServerUGC::~UABServerUGC() {}
// End Class UABServerUGC

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerUGC, UABServerUGC::StaticClass, TEXT("UABServerUGC"), &Z_Registration_Info_UClass_UABServerUGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerUGC), 1061488799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_2874279301(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

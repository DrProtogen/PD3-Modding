// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABSeasonPass.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSeasonClaimRewardRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSeasonPass() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSeasonPass();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSeasonPass_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSeasonClaimRewardResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSeasonInfo__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserSeasonInfo__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABSeasonPass Function BulkClaimRewards
struct Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics
{
	struct ABSeasonPass_eventBulkClaimRewards_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventBulkClaimRewards_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSeasonClaimRewardResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2059131774
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventBulkClaimRewards_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSeasonPass, nullptr, "BulkClaimRewards", nullptr, nullptr, Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::ABSeasonPass_eventBulkClaimRewards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::ABSeasonPass_eventBulkClaimRewards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSeasonPass::execBulkClaimRewards)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkClaimRewards(FDModelsSeasonClaimRewardResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSeasonPass Function BulkClaimRewards

// Begin Class UABSeasonPass Function ClaimRewards
struct Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics
{
	struct ABSeasonPass_eventClaimRewards_Parms
	{
		FAccelByteModelsSeasonClaimRewardRequest RewardRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RewardRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_RewardRequest = { "RewardRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventClaimRewards_Parms, RewardRequest), Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardRequest_MetaData), NewProp_RewardRequest_MetaData) }; // 120187840
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventClaimRewards_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSeasonClaimRewardResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2059131774
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventClaimRewards_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_RewardRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSeasonPass, nullptr, "ClaimRewards", nullptr, nullptr, Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::ABSeasonPass_eventClaimRewards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::ABSeasonPass_eventClaimRewards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSeasonPass_ClaimRewards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSeasonPass::execClaimRewards)
{
	P_GET_STRUCT_REF(FAccelByteModelsSeasonClaimRewardRequest,Z_Param_Out_RewardRequest);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClaimRewards(Z_Param_Out_RewardRequest,FDModelsSeasonClaimRewardResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSeasonPass Function ClaimRewards

// Begin Class UABSeasonPass Function GetCurrentSeason
struct Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics
{
	struct ABSeasonPass_eventGetCurrentSeason_Parms
	{
		FString Language;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventGetCurrentSeason_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventGetCurrentSeason_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSeasonInfo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1352371206
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventGetCurrentSeason_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSeasonPass, nullptr, "GetCurrentSeason", nullptr, nullptr, Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::ABSeasonPass_eventGetCurrentSeason_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::ABSeasonPass_eventGetCurrentSeason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSeasonPass::execGetCurrentSeason)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentSeason(Z_Param_Language,FDModelsSeasonInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSeasonPass Function GetCurrentSeason

// Begin Class UABSeasonPass Function GetCurrentUserSeason
struct Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics
{
	struct ABSeasonPass_eventGetCurrentUserSeason_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventGetCurrentUserSeason_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserSeasonInfo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1198627595
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventGetCurrentUserSeason_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSeasonPass, nullptr, "GetCurrentUserSeason", nullptr, nullptr, Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::ABSeasonPass_eventGetCurrentUserSeason_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::ABSeasonPass_eventGetCurrentUserSeason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSeasonPass::execGetCurrentUserSeason)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentUserSeason(FDModelsUserSeasonInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSeasonPass Function GetCurrentUserSeason

// Begin Class UABSeasonPass Function GetUserSeason
struct Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics
{
	struct ABSeasonPass_eventGetUserSeason_Parms
	{
		FString SeasonId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeasonId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SeasonId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_SeasonId = { "SeasonId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventGetUserSeason_Parms, SeasonId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeasonId_MetaData), NewProp_SeasonId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventGetUserSeason_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserSeasonInfo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1198627595
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSeasonPass_eventGetUserSeason_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_SeasonId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSeasonPass, nullptr, "GetUserSeason", nullptr, nullptr, Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::ABSeasonPass_eventGetUserSeason_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::ABSeasonPass_eventGetUserSeason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSeasonPass_GetUserSeason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSeasonPass::execGetUserSeason)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SeasonId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserSeason(Z_Param_SeasonId,FDModelsUserSeasonInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABSeasonPass Function GetUserSeason

// Begin Class UABSeasonPass
void UABSeasonPass::StaticRegisterNativesUABSeasonPass()
{
	UClass* Class = UABSeasonPass::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulkClaimRewards", &UABSeasonPass::execBulkClaimRewards },
		{ "ClaimRewards", &UABSeasonPass::execClaimRewards },
		{ "GetCurrentSeason", &UABSeasonPass::execGetCurrentSeason },
		{ "GetCurrentUserSeason", &UABSeasonPass::execGetCurrentUserSeason },
		{ "GetUserSeason", &UABSeasonPass::execGetUserSeason },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABSeasonPass);
UClass* Z_Construct_UClass_UABSeasonPass_NoRegister()
{
	return UABSeasonPass::StaticClass();
}
struct Z_Construct_UClass_UABSeasonPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABSeasonPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards, "BulkClaimRewards" }, // 2587173335
		{ &Z_Construct_UFunction_UABSeasonPass_ClaimRewards, "ClaimRewards" }, // 3451624648
		{ &Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason, "GetCurrentSeason" }, // 3705889153
		{ &Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason, "GetCurrentUserSeason" }, // 522810167
		{ &Z_Construct_UFunction_UABSeasonPass_GetUserSeason, "GetUserSeason" }, // 2696120613
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABSeasonPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABSeasonPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABSeasonPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABSeasonPass_Statics::ClassParams = {
	&UABSeasonPass::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABSeasonPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UABSeasonPass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABSeasonPass()
{
	if (!Z_Registration_Info_UClass_UABSeasonPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABSeasonPass.OuterSingleton, Z_Construct_UClass_UABSeasonPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABSeasonPass.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABSeasonPass>()
{
	return UABSeasonPass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABSeasonPass);
UABSeasonPass::~UABSeasonPass() {}
// End Class UABSeasonPass

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABSeasonPass, UABSeasonPass::StaticClass, TEXT("UABSeasonPass"), &Z_Registration_Info_UClass_UABSeasonPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABSeasonPass), 3903872929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_2298979593(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

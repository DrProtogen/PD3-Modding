// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABChallenge.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsChallengeRewardClaimRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABChallenge() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABChallenge();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABChallenge_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteModelsChallengeRewardStatus();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteModelsChallengeSortBy();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteModelsChallengeStatus();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsChallengeGetRewardStatusResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsChallengeProgressResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsChallengeRewardsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGetChallengesResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChallengeRewardClaimRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABChallenge Function ClaimReward
struct Z_Construct_UFunction_UABChallenge_ClaimReward_Statics
{
	struct ABChallenge_eventClaimReward_Parms
	{
		FAccelByteModelsChallengeRewardClaimRequest Request;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABChallenge.h" },
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventClaimReward_Parms, Request), Z_Construct_UScriptStruct_FAccelByteModelsChallengeRewardClaimRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 4211280703
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventClaimReward_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsChallengeRewardsResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3945747705
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventClaimReward_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABChallenge, nullptr, "ClaimReward", nullptr, nullptr, Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::ABChallenge_eventClaimReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::ABChallenge_eventClaimReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABChallenge_ClaimReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABChallenge_ClaimReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABChallenge::execClaimReward)
{
	P_GET_STRUCT_REF(FAccelByteModelsChallengeRewardClaimRequest,Z_Param_Out_Request);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClaimReward(Z_Param_Out_Request,FDModelsChallengeRewardsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABChallenge Function ClaimReward

// Begin Class UABChallenge Function EvaluateChallengeProgress
struct Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics
{
	struct ABChallenge_eventEvaluateChallengeProgress_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABChallenge.h" },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventEvaluateChallengeProgress_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventEvaluateChallengeProgress_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABChallenge, nullptr, "EvaluateChallengeProgress", nullptr, nullptr, Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::ABChallenge_eventEvaluateChallengeProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::ABChallenge_eventEvaluateChallengeProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABChallenge::execEvaluateChallengeProgress)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EvaluateChallengeProgress(FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABChallenge Function EvaluateChallengeProgress

// Begin Class UABChallenge Function GetChallengeList
struct Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics
{
	struct ABChallenge_eventGetChallengeList_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		TArray<FString> OptionalTags;
		EAccelByteModelsChallengeSortBy SortBy;
		EAccelByteModelsChallengeStatus Status;
		int64 Offset;
		int64 Limit;
		FString Keyword;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABChallenge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keyword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Offset;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Limit;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keyword;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeList_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGetChallengesResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1391580971
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeList_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_OptionalTags_Inner = { "OptionalTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_OptionalTags = { "OptionalTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeList_Parms, OptionalTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalTags_MetaData), NewProp_OptionalTags_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeList_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteModelsChallengeSortBy, METADATA_PARAMS(0, nullptr) }; // 609502421
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeList_Parms, Status), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteModelsChallengeStatus, METADATA_PARAMS(0, nullptr) }; // 3497181954
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeList_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeList_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_Keyword = { "Keyword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeList_Parms, Keyword), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keyword_MetaData), NewProp_Keyword_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_OptionalTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_OptionalTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::NewProp_Keyword,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABChallenge, nullptr, "GetChallengeList", nullptr, nullptr, Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::ABChallenge_eventGetChallengeList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::ABChallenge_eventGetChallengeList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABChallenge_GetChallengeList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABChallenge_GetChallengeList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABChallenge::execGetChallengeList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OptionalTags);
	P_GET_ENUM(EAccelByteModelsChallengeSortBy,Z_Param_SortBy);
	P_GET_ENUM(EAccelByteModelsChallengeStatus,Z_Param_Status);
	P_GET_PROPERTY(FInt64Property,Z_Param_Offset);
	P_GET_PROPERTY(FInt64Property,Z_Param_Limit);
	P_GET_PROPERTY(FStrProperty,Z_Param_Keyword);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetChallengeList(FDModelsGetChallengesResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_OptionalTags,EAccelByteModelsChallengeSortBy(Z_Param_SortBy),EAccelByteModelsChallengeStatus(Z_Param_Status),Z_Param_Offset,Z_Param_Limit,Z_Param_Keyword);
	P_NATIVE_END;
}
// End Class UABChallenge Function GetChallengeList

// Begin Class UABChallenge Function GetChallengeProgress
struct Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics
{
	struct ABChallenge_eventGetChallengeProgress_Parms
	{
		FString ChallengeCode;
		FString GoalCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		TArray<FString> OptionalTags;
		int64 Offset;
		int64 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABChallenge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChallengeCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GoalCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalTags;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Offset;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_ChallengeCode = { "ChallengeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeProgress_Parms, ChallengeCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeCode_MetaData), NewProp_ChallengeCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_GoalCode = { "GoalCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeProgress_Parms, GoalCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalCode_MetaData), NewProp_GoalCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeProgress_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsChallengeProgressResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1310347908
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeProgress_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_OptionalTags_Inner = { "OptionalTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_OptionalTags = { "OptionalTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeProgress_Parms, OptionalTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalTags_MetaData), NewProp_OptionalTags_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeProgress_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallengeProgress_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_ChallengeCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_GoalCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_OptionalTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_OptionalTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABChallenge, nullptr, "GetChallengeProgress", nullptr, nullptr, Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::ABChallenge_eventGetChallengeProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::ABChallenge_eventGetChallengeProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABChallenge_GetChallengeProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABChallenge_GetChallengeProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABChallenge::execGetChallengeProgress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ChallengeCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_GoalCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OptionalTags);
	P_GET_PROPERTY(FInt64Property,Z_Param_Offset);
	P_GET_PROPERTY(FInt64Property,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetChallengeProgress(Z_Param_ChallengeCode,Z_Param_GoalCode,FDModelsChallengeProgressResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_OptionalTags,Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABChallenge Function GetChallengeProgress

// Begin Class UABChallenge Function GetChallenges
struct Z_Construct_UFunction_UABChallenge_GetChallenges_Statics
{
	struct ABChallenge_eventGetChallenges_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteModelsChallengeSortBy SortBy;
		EAccelByteModelsChallengeStatus Status;
		int64 Offset;
		int64 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABChallenge.h" },
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
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Offset;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallenges_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGetChallengesResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1391580971
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallenges_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallenges_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteModelsChallengeSortBy, METADATA_PARAMS(0, nullptr) }; // 609502421
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallenges_Parms, Status), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteModelsChallengeStatus, METADATA_PARAMS(0, nullptr) }; // 3497181954
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallenges_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetChallenges_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABChallenge, nullptr, "GetChallenges", nullptr, nullptr, Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::ABChallenge_eventGetChallenges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::ABChallenge_eventGetChallenges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABChallenge_GetChallenges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABChallenge_GetChallenges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABChallenge::execGetChallenges)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_ENUM(EAccelByteModelsChallengeSortBy,Z_Param_SortBy);
	P_GET_ENUM(EAccelByteModelsChallengeStatus,Z_Param_Status);
	P_GET_PROPERTY(FInt64Property,Z_Param_Offset);
	P_GET_PROPERTY(FInt64Property,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetChallenges(FDModelsGetChallengesResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),EAccelByteModelsChallengeSortBy(Z_Param_SortBy),EAccelByteModelsChallengeStatus(Z_Param_Status),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABChallenge Function GetChallenges

// Begin Class UABChallenge Function GetPreviousChallengeProgresses
struct Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics
{
	struct ABChallenge_eventGetPreviousChallengeProgresses_Parms
	{
		FString ChallengeCode;
		int32 Index;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		TArray<FString> OptionalTags;
		FString GoalCode;
		int64 Offset;
		int64 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABChallenge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChallengeCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GoalCode;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Offset;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_ChallengeCode = { "ChallengeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetPreviousChallengeProgresses_Parms, ChallengeCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeCode_MetaData), NewProp_ChallengeCode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetPreviousChallengeProgresses_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetPreviousChallengeProgresses_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsChallengeProgressResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1310347908
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetPreviousChallengeProgresses_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_OptionalTags_Inner = { "OptionalTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_OptionalTags = { "OptionalTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetPreviousChallengeProgresses_Parms, OptionalTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalTags_MetaData), NewProp_OptionalTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_GoalCode = { "GoalCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetPreviousChallengeProgresses_Parms, GoalCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalCode_MetaData), NewProp_GoalCode_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetPreviousChallengeProgresses_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetPreviousChallengeProgresses_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_ChallengeCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_OptionalTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_OptionalTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_GoalCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABChallenge, nullptr, "GetPreviousChallengeProgresses", nullptr, nullptr, Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::ABChallenge_eventGetPreviousChallengeProgresses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::ABChallenge_eventGetPreviousChallengeProgresses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABChallenge::execGetPreviousChallengeProgresses)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ChallengeCode);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OptionalTags);
	P_GET_PROPERTY(FStrProperty,Z_Param_GoalCode);
	P_GET_PROPERTY(FInt64Property,Z_Param_Offset);
	P_GET_PROPERTY(FInt64Property,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPreviousChallengeProgresses(Z_Param_ChallengeCode,Z_Param_Index,FDModelsChallengeProgressResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_OptionalTags,Z_Param_GoalCode,Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABChallenge Function GetPreviousChallengeProgresses

// Begin Class UABChallenge Function GetRewards
struct Z_Construct_UFunction_UABChallenge_GetRewards_Statics
{
	struct ABChallenge_eventGetRewards_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteModelsChallengeRewardStatus Status;
		EAccelByteModelsChallengeSortBy SortBy;
		int64 Offset;
		int64 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABChallenge.h" },
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
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Offset;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetRewards_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsChallengeGetRewardStatusResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3183047330
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetRewards_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetRewards_Parms, Status), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteModelsChallengeRewardStatus, METADATA_PARAMS(0, nullptr) }; // 1165554191
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetRewards_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteModelsChallengeSortBy, METADATA_PARAMS(0, nullptr) }; // 609502421
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetRewards_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABChallenge_eventGetRewards_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABChallenge_GetRewards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABChallenge_GetRewards_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetRewards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABChallenge_GetRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABChallenge, nullptr, "GetRewards", nullptr, nullptr, Z_Construct_UFunction_UABChallenge_GetRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetRewards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABChallenge_GetRewards_Statics::ABChallenge_eventGetRewards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABChallenge_GetRewards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABChallenge_GetRewards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABChallenge_GetRewards_Statics::ABChallenge_eventGetRewards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABChallenge_GetRewards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABChallenge_GetRewards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABChallenge::execGetRewards)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_ENUM(EAccelByteModelsChallengeRewardStatus,Z_Param_Status);
	P_GET_ENUM(EAccelByteModelsChallengeSortBy,Z_Param_SortBy);
	P_GET_PROPERTY(FInt64Property,Z_Param_Offset);
	P_GET_PROPERTY(FInt64Property,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRewards(FDModelsChallengeGetRewardStatusResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),EAccelByteModelsChallengeRewardStatus(Z_Param_Status),EAccelByteModelsChallengeSortBy(Z_Param_SortBy),Z_Param_Offset,Z_Param_Limit);
	P_NATIVE_END;
}
// End Class UABChallenge Function GetRewards

// Begin Class UABChallenge
void UABChallenge::StaticRegisterNativesUABChallenge()
{
	UClass* Class = UABChallenge::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClaimReward", &UABChallenge::execClaimReward },
		{ "EvaluateChallengeProgress", &UABChallenge::execEvaluateChallengeProgress },
		{ "GetChallengeList", &UABChallenge::execGetChallengeList },
		{ "GetChallengeProgress", &UABChallenge::execGetChallengeProgress },
		{ "GetChallenges", &UABChallenge::execGetChallenges },
		{ "GetPreviousChallengeProgresses", &UABChallenge::execGetPreviousChallengeProgresses },
		{ "GetRewards", &UABChallenge::execGetRewards },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABChallenge);
UClass* Z_Construct_UClass_UABChallenge_NoRegister()
{
	return UABChallenge::StaticClass();
}
struct Z_Construct_UClass_UABChallenge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABChallenge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABChallenge.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABChallenge_ClaimReward, "ClaimReward" }, // 4219313162
		{ &Z_Construct_UFunction_UABChallenge_EvaluateChallengeProgress, "EvaluateChallengeProgress" }, // 3572338619
		{ &Z_Construct_UFunction_UABChallenge_GetChallengeList, "GetChallengeList" }, // 1225261703
		{ &Z_Construct_UFunction_UABChallenge_GetChallengeProgress, "GetChallengeProgress" }, // 59284603
		{ &Z_Construct_UFunction_UABChallenge_GetChallenges, "GetChallenges" }, // 1625191489
		{ &Z_Construct_UFunction_UABChallenge_GetPreviousChallengeProgresses, "GetPreviousChallengeProgresses" }, // 960420456
		{ &Z_Construct_UFunction_UABChallenge_GetRewards, "GetRewards" }, // 4111768863
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABChallenge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABChallenge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABChallenge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABChallenge_Statics::ClassParams = {
	&UABChallenge::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABChallenge_Statics::Class_MetaDataParams), Z_Construct_UClass_UABChallenge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABChallenge()
{
	if (!Z_Registration_Info_UClass_UABChallenge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABChallenge.OuterSingleton, Z_Construct_UClass_UABChallenge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABChallenge.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABChallenge>()
{
	return UABChallenge::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABChallenge);
UABChallenge::~UABChallenge() {}
// End Class UABChallenge

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABChallenge, UABChallenge::StaticClass, TEXT("UABChallenge"), &Z_Registration_Info_UClass_UABChallenge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABChallenge), 3548688805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_567229490(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

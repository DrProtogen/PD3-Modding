// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABLeaderboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABLeaderboard() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABLeaderboard();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABLeaderboard_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLeaderboardTimeFrame();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBaseLeaderboardData__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBulkUserRankingDataV3__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultV3__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedLeaderboardData__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRankingDataResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRankingDataV3__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABLeaderboard Function GetBulkUserRankingV3
struct Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics
{
	struct ABLeaderboard_eventGetBulkUserRankingV3_Parms
	{
		TArray<FString> UserIds;
		FString LeaderboardCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetBulkUserRankingV3_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIds_MetaData), NewProp_UserIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetBulkUserRankingV3_Parms, LeaderboardCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardCode_MetaData), NewProp_LeaderboardCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetBulkUserRankingV3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBulkUserRankingDataV3__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1615705785
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetBulkUserRankingV3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_LeaderboardCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetBulkUserRankingV3", nullptr, nullptr, Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::ABLeaderboard_eventGetBulkUserRankingV3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::ABLeaderboard_eventGetBulkUserRankingV3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLeaderboard::execGetBulkUserRankingV3)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_UserIds);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBulkUserRankingV3(Z_Param_Out_UserIds,Z_Param_LeaderboardCode,FDModelsBulkUserRankingDataV3(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABLeaderboard Function GetBulkUserRankingV3

// Begin Class UABLeaderboard Function GetLeaderboards
struct Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics
{
	struct ABLeaderboard_eventGetLeaderboards_Parms
	{
		int32 Offset;
		int32 Limit;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboards_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboards_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboards_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedLeaderboardData__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 872886706
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboards_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetLeaderboards", nullptr, nullptr, Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::ABLeaderboard_eventGetLeaderboards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::ABLeaderboard_eventGetLeaderboards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLeaderboard_GetLeaderboards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLeaderboard::execGetLeaderboards)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLeaderboards(Z_Param_Offset,Z_Param_Limit,FDModelsPaginatedLeaderboardData(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABLeaderboard Function GetLeaderboards

// Begin Class UABLeaderboard Function GetLeaderboardsV3
struct Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics
{
	struct ABLeaderboard_eventGetLeaderboardsV3_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboardsV3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedLeaderboardData__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 872886706
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboardsV3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboardsV3_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboardsV3_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetLeaderboardsV3", nullptr, nullptr, Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::ABLeaderboard_eventGetLeaderboardsV3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::ABLeaderboard_eventGetLeaderboardsV3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLeaderboard::execGetLeaderboardsV3)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLeaderboardsV3(FDModelsPaginatedLeaderboardData(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABLeaderboard Function GetLeaderboardsV3

// Begin Class UABLeaderboard Function GetLeaderboardV3
struct Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics
{
	struct ABLeaderboard_eventGetLeaderboardV3_Parms
	{
		FString LeaderboardCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboardV3_Parms, LeaderboardCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardCode_MetaData), NewProp_LeaderboardCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboardV3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBaseLeaderboardData__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3886837889
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboardV3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::NewProp_LeaderboardCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetLeaderboardV3", nullptr, nullptr, Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::ABLeaderboard_eventGetLeaderboardV3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::ABLeaderboard_eventGetLeaderboardV3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLeaderboard::execGetLeaderboardV3)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLeaderboardV3(Z_Param_LeaderboardCode,FDModelsBaseLeaderboardData(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABLeaderboard Function GetLeaderboardV3

// Begin Class UABLeaderboard Function GetRankingByCycle
struct Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics
{
	struct ABLeaderboard_eventGetRankingByCycle_Parms
	{
		FString LeaderboardCode;
		FString CycleId;
		int32 Offset;
		int32 Limit;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CycleId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, LeaderboardCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardCode_MetaData), NewProp_LeaderboardCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_CycleId = { "CycleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, CycleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleId_MetaData), NewProp_CycleId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultV3__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1912931466
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_LeaderboardCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_CycleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetRankingByCycle", nullptr, nullptr, Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::ABLeaderboard_eventGetRankingByCycle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::ABLeaderboard_eventGetRankingByCycle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLeaderboard::execGetRankingByCycle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_CycleId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRankingByCycle(Z_Param_LeaderboardCode,Z_Param_CycleId,Z_Param_Offset,Z_Param_Limit,FDModelsLeaderboardRankingResultV3(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABLeaderboard Function GetRankingByCycle

// Begin Class UABLeaderboard Function GetRankingByCycleV3
struct Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics
{
	struct ABLeaderboard_eventGetRankingByCycleV3_Parms
	{
		FString LeaderboardCode;
		FString CycleId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Limit;
		int32 Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CycleId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycleV3_Parms, LeaderboardCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardCode_MetaData), NewProp_LeaderboardCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_CycleId = { "CycleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycleV3_Parms, CycleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleId_MetaData), NewProp_CycleId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycleV3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultV3__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1912931466
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycleV3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycleV3_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycleV3_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_LeaderboardCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_CycleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetRankingByCycleV3", nullptr, nullptr, Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::ABLeaderboard_eventGetRankingByCycleV3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::ABLeaderboard_eventGetRankingByCycleV3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLeaderboard::execGetRankingByCycleV3)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_CycleId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRankingByCycleV3(Z_Param_LeaderboardCode,Z_Param_CycleId,FDModelsLeaderboardRankingResultV3(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UABLeaderboard Function GetRankingByCycleV3

// Begin Class UABLeaderboard Function GetRankings
struct Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics
{
	struct ABLeaderboard_eventGetRankings_Parms
	{
		FString LeaderboardCode;
		EAccelByteLeaderboardTimeFrame TimeFrame;
		int32 Offset;
		int32 Limit;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeFrame_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, LeaderboardCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardCode_MetaData), NewProp_LeaderboardCode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame = { "TimeFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, TimeFrame), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLeaderboardTimeFrame, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeFrame_MetaData), NewProp_TimeFrame_MetaData) }; // 3605198778
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1528842093
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_LeaderboardCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetRankings", nullptr, nullptr, Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::ABLeaderboard_eventGetRankings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::ABLeaderboard_eventGetRankings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLeaderboard_GetRankings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLeaderboard::execGetRankings)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
	P_GET_ENUM_REF(EAccelByteLeaderboardTimeFrame,Z_Param_Out_TimeFrame);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRankings(Z_Param_LeaderboardCode,(EAccelByteLeaderboardTimeFrame&)(Z_Param_Out_TimeFrame),Z_Param_Offset,Z_Param_Limit,FDModelsLeaderboardRankingResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABLeaderboard Function GetRankings

// Begin Class UABLeaderboard Function GetRankingsV3
struct Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics
{
	struct ABLeaderboard_eventGetRankingsV3_Parms
	{
		FString LeaderboardCode;
		int32 Offset;
		int32 Limit;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingsV3_Parms, LeaderboardCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardCode_MetaData), NewProp_LeaderboardCode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingsV3_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingsV3_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingsV3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultV3__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1912931466
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingsV3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_LeaderboardCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetRankingsV3", nullptr, nullptr, Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::ABLeaderboard_eventGetRankingsV3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::ABLeaderboard_eventGetRankingsV3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLeaderboard_GetRankingsV3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLeaderboard::execGetRankingsV3)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRankingsV3(Z_Param_LeaderboardCode,Z_Param_Offset,Z_Param_Limit,FDModelsLeaderboardRankingResultV3(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABLeaderboard Function GetRankingsV3

// Begin Class UABLeaderboard Function GetUserRanking
struct Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics
{
	struct ABLeaderboard_eventGetUserRanking_Parms
	{
		FString UserId;
		FString LeaderboardCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRanking_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRanking_Parms, LeaderboardCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardCode_MetaData), NewProp_LeaderboardCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRanking_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRankingDataResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1585926051
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRanking_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_LeaderboardCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetUserRanking", nullptr, nullptr, Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::ABLeaderboard_eventGetUserRanking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::ABLeaderboard_eventGetUserRanking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLeaderboard_GetUserRanking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLeaderboard::execGetUserRanking)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserRanking(Z_Param_UserId,Z_Param_LeaderboardCode,FDModelsUserRankingDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABLeaderboard Function GetUserRanking

// Begin Class UABLeaderboard Function GetUserRankingV3
struct Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics
{
	struct ABLeaderboard_eventGetUserRankingV3_Parms
	{
		FString UserId;
		FString LeaderboardCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRankingV3_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRankingV3_Parms, LeaderboardCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardCode_MetaData), NewProp_LeaderboardCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRankingV3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRankingDataV3__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1990142
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRankingV3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_LeaderboardCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetUserRankingV3", nullptr, nullptr, Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::ABLeaderboard_eventGetUserRankingV3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::ABLeaderboard_eventGetUserRankingV3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLeaderboard::execGetUserRankingV3)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserRankingV3(Z_Param_UserId,Z_Param_LeaderboardCode,FDModelsUserRankingDataV3(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABLeaderboard Function GetUserRankingV3

// Begin Class UABLeaderboard
void UABLeaderboard::StaticRegisterNativesUABLeaderboard()
{
	UClass* Class = UABLeaderboard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBulkUserRankingV3", &UABLeaderboard::execGetBulkUserRankingV3 },
		{ "GetLeaderboards", &UABLeaderboard::execGetLeaderboards },
		{ "GetLeaderboardsV3", &UABLeaderboard::execGetLeaderboardsV3 },
		{ "GetLeaderboardV3", &UABLeaderboard::execGetLeaderboardV3 },
		{ "GetRankingByCycle", &UABLeaderboard::execGetRankingByCycle },
		{ "GetRankingByCycleV3", &UABLeaderboard::execGetRankingByCycleV3 },
		{ "GetRankings", &UABLeaderboard::execGetRankings },
		{ "GetRankingsV3", &UABLeaderboard::execGetRankingsV3 },
		{ "GetUserRanking", &UABLeaderboard::execGetUserRanking },
		{ "GetUserRankingV3", &UABLeaderboard::execGetUserRankingV3 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABLeaderboard);
UClass* Z_Construct_UClass_UABLeaderboard_NoRegister()
{
	return UABLeaderboard::StaticClass();
}
struct Z_Construct_UClass_UABLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABLeaderboard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3, "GetBulkUserRankingV3" }, // 1815575078
		{ &Z_Construct_UFunction_UABLeaderboard_GetLeaderboards, "GetLeaderboards" }, // 657446110
		{ &Z_Construct_UFunction_UABLeaderboard_GetLeaderboardsV3, "GetLeaderboardsV3" }, // 3688311764
		{ &Z_Construct_UFunction_UABLeaderboard_GetLeaderboardV3, "GetLeaderboardV3" }, // 3581001925
		{ &Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle, "GetRankingByCycle" }, // 378970031
		{ &Z_Construct_UFunction_UABLeaderboard_GetRankingByCycleV3, "GetRankingByCycleV3" }, // 3990781449
		{ &Z_Construct_UFunction_UABLeaderboard_GetRankings, "GetRankings" }, // 145422171
		{ &Z_Construct_UFunction_UABLeaderboard_GetRankingsV3, "GetRankingsV3" }, // 1610422600
		{ &Z_Construct_UFunction_UABLeaderboard_GetUserRanking, "GetUserRanking" }, // 824435453
		{ &Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3, "GetUserRankingV3" }, // 2888726988
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABLeaderboard_Statics::ClassParams = {
	&UABLeaderboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UABLeaderboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABLeaderboard()
{
	if (!Z_Registration_Info_UClass_UABLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABLeaderboard.OuterSingleton, Z_Construct_UClass_UABLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABLeaderboard.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABLeaderboard>()
{
	return UABLeaderboard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABLeaderboard);
UABLeaderboard::~UABLeaderboard() {}
// End Class UABLeaderboard

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABLeaderboard, UABLeaderboard::StaticClass, TEXT("UABLeaderboard"), &Z_Registration_Info_UClass_UABLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABLeaderboard), 2354846829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_2716735116(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

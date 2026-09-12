// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABAchievement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAchievement() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABAchievement();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABAchievement_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementListSortBy();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementStatus();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsMultiLanguageAchievementResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGlobalAchievementContributorsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGlobalAchievementUserContributedResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedPublicAchievementResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedPublicTagResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserAchievementResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserGlobalAchievementResponse__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABAchievement Function ClaimGlobalAchievements
struct Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics
{
	struct ABAchievement_eventClaimGlobalAchievements_Parms
	{
		FString AchievementCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventClaimGlobalAchievements_Parms, AchievementCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementCode_MetaData), NewProp_AchievementCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventClaimGlobalAchievements_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventClaimGlobalAchievements_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_AchievementCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "ClaimGlobalAchievements", nullptr, nullptr, Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::ABAchievement_eventClaimGlobalAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::ABAchievement_eventClaimGlobalAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAchievement::execClaimGlobalAchievements)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClaimGlobalAchievements(Z_Param_AchievementCode,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAchievement Function ClaimGlobalAchievements

// Begin Class UABAchievement Function GetAchievement
struct Z_Construct_UFunction_UABAchievement_GetAchievement_Statics
{
	struct ABAchievement_eventGetAchievement_Parms
	{
		FString AchievementCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventGetAchievement_Parms, AchievementCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementCode_MetaData), NewProp_AchievementCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventGetAchievement_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsMultiLanguageAchievementResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4274493152
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventGetAchievement_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_AchievementCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "GetAchievement", nullptr, nullptr, Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::ABAchievement_eventGetAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::ABAchievement_eventGetAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAchievement_GetAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAchievement::execGetAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAchievement(Z_Param_AchievementCode,FDModelsMultiLanguageAchievementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAchievement Function GetAchievement

// Begin Class UABAchievement Function GetTags
struct Z_Construct_UFunction_UABAchievement_GetTags_Statics
{
	struct ABAchievement_eventGetTags_Parms
	{
		FString Name;
		EAccelByteAchievementListSortBy SortBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 1767011743
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedPublicTagResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 375406239
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_GetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "GetTags", nullptr, nullptr, Z_Construct_UFunction_UABAchievement_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAchievement_GetTags_Statics::ABAchievement_eventGetTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAchievement_GetTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAchievement_GetTags_Statics::ABAchievement_eventGetTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAchievement_GetTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAchievement_GetTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAchievement::execGetTags)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_ENUM_REF(EAccelByteAchievementListSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTags(Z_Param_Name,(EAccelByteAchievementListSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedPublicTagResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
	P_NATIVE_END;
}
// End Class UABAchievement Function GetTags

// Begin Class UABAchievement Function QueryAchievements
struct Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics
{
	struct ABAchievement_eventQueryAchievements_Parms
	{
		FString Language;
		EAccelByteAchievementListSortBy SortBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
		FString TagQuery;
		bool bGlobal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagQuery;
	static void NewProp_bGlobal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 1767011743
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedPublicAchievementResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 779401195
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, TagQuery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) };
void Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_bGlobal_SetBit(void* Obj)
{
	((ABAchievement_eventQueryAchievements_Parms*)Obj)->bGlobal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_bGlobal = { "bGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABAchievement_eventQueryAchievements_Parms), &Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_bGlobal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_TagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_bGlobal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryAchievements", nullptr, nullptr, Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::ABAchievement_eventQueryAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::ABAchievement_eventQueryAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAchievement_QueryAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAchievement::execQueryAchievements)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_ENUM_REF(EAccelByteAchievementListSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_GET_PROPERTY(FStrProperty,Z_Param_TagQuery);
	P_GET_UBOOL(Z_Param_bGlobal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryAchievements(Z_Param_Language,(EAccelByteAchievementListSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedPublicAchievementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit,Z_Param_TagQuery,Z_Param_bGlobal);
	P_NATIVE_END;
}
// End Class UABAchievement Function QueryAchievements

// Begin Class UABAchievement Function QueryGlobalAchievementContributors
struct Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics
{
	struct ABAchievement_eventQueryGlobalAchievementContributors_Parms
	{
		FString AchievementCode;
		EAccelByteGlobalAchievementContributorsSortBy SortBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, AchievementCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementCode_MetaData), NewProp_AchievementCode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 1727596344
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGlobalAchievementContributorsResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3881708619
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_AchievementCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryGlobalAchievementContributors", nullptr, nullptr, Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::ABAchievement_eventQueryGlobalAchievementContributors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::ABAchievement_eventQueryGlobalAchievementContributors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAchievement::execQueryGlobalAchievementContributors)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
	P_GET_ENUM_REF(EAccelByteGlobalAchievementContributorsSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryGlobalAchievementContributors(Z_Param_AchievementCode,(EAccelByteGlobalAchievementContributorsSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedGlobalAchievementContributorsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
	P_NATIVE_END;
}
// End Class UABAchievement Function QueryGlobalAchievementContributors

// Begin Class UABAchievement Function QueryGlobalAchievements
struct Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics
{
	struct ABAchievement_eventQueryGlobalAchievements_Parms
	{
		FString AchievementCode;
		EAccelByteGlobalAchievementStatus AchievementStatus;
		EAccelByteGlobalAchievementListSortBy SortBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AchievementStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AchievementStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, AchievementCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementCode_MetaData), NewProp_AchievementCode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus = { "AchievementStatus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, AchievementStatus), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementStatus_MetaData), NewProp_AchievementStatus_MetaData) }; // 75755208
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementListSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 4055965266
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserGlobalAchievementResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2252395966
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryGlobalAchievements", nullptr, nullptr, Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::ABAchievement_eventQueryGlobalAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::ABAchievement_eventQueryGlobalAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAchievement::execQueryGlobalAchievements)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
	P_GET_ENUM_REF(EAccelByteGlobalAchievementStatus,Z_Param_Out_AchievementStatus);
	P_GET_ENUM_REF(EAccelByteGlobalAchievementListSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryGlobalAchievements(Z_Param_AchievementCode,(EAccelByteGlobalAchievementStatus&)(Z_Param_Out_AchievementStatus),(EAccelByteGlobalAchievementListSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedUserGlobalAchievementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
	P_NATIVE_END;
}
// End Class UABAchievement Function QueryGlobalAchievements

// Begin Class UABAchievement Function QueryGlobalAchievementUserContributed
struct Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics
{
	struct ABAchievement_eventQueryGlobalAchievementUserContributed_Parms
	{
		FString AchievementCode;
		EAccelByteGlobalAchievementContributorsSortBy SortBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, AchievementCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementCode_MetaData), NewProp_AchievementCode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 1727596344
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGlobalAchievementUserContributedResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4161494579
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_AchievementCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryGlobalAchievementUserContributed", nullptr, nullptr, Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::ABAchievement_eventQueryGlobalAchievementUserContributed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::ABAchievement_eventQueryGlobalAchievementUserContributed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAchievement::execQueryGlobalAchievementUserContributed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
	P_GET_ENUM_REF(EAccelByteGlobalAchievementContributorsSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryGlobalAchievementUserContributed(Z_Param_AchievementCode,(EAccelByteGlobalAchievementContributorsSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedGlobalAchievementUserContributedResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
	P_NATIVE_END;
}
// End Class UABAchievement Function QueryGlobalAchievementUserContributed

// Begin Class UABAchievement Function QueryUserAchievements
struct Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics
{
	struct ABAchievement_eventQueryUserAchievements_Parms
	{
		EAccelByteAchievementListSortBy SortBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
		bool PreferUnlocked;
		FString TagQuery;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static void NewProp_PreferUnlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreferUnlocked;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 1767011743
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserAchievementResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2401933369
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
void Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_PreferUnlocked_SetBit(void* Obj)
{
	((ABAchievement_eventQueryUserAchievements_Parms*)Obj)->PreferUnlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_PreferUnlocked = { "PreferUnlocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABAchievement_eventQueryUserAchievements_Parms), &Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_PreferUnlocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, TagQuery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_PreferUnlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_TagQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryUserAchievements", nullptr, nullptr, Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::ABAchievement_eventQueryUserAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::ABAchievement_eventQueryUserAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAchievement_QueryUserAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAchievement::execQueryUserAchievements)
{
	P_GET_ENUM_REF(EAccelByteAchievementListSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_GET_UBOOL(Z_Param_PreferUnlocked);
	P_GET_PROPERTY(FStrProperty,Z_Param_TagQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryUserAchievements((EAccelByteAchievementListSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedUserAchievementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit,Z_Param_PreferUnlocked,Z_Param_TagQuery);
	P_NATIVE_END;
}
// End Class UABAchievement Function QueryUserAchievements

// Begin Class UABAchievement Function QueryUserAchievementsV2
struct Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics
{
	struct ABAchievement_eventQueryUserAchievementsV2_Parms
	{
		EAccelByteGlobalAchievementListSortBy SortBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		int32 Offset;
		int32 Limit;
		bool PreferUnlocked;
		FString TagQuery;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static void NewProp_PreferUnlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreferUnlocked;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievementsV2_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementListSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 4055965266
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievementsV2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserAchievementResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2401933369
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievementsV2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievementsV2_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievementsV2_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
void Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_PreferUnlocked_SetBit(void* Obj)
{
	((ABAchievement_eventQueryUserAchievementsV2_Parms*)Obj)->PreferUnlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_PreferUnlocked = { "PreferUnlocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABAchievement_eventQueryUserAchievementsV2_Parms), &Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_PreferUnlocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievementsV2_Parms, TagQuery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_PreferUnlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::NewProp_TagQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryUserAchievementsV2", nullptr, nullptr, Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::ABAchievement_eventQueryUserAchievementsV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::ABAchievement_eventQueryUserAchievementsV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAchievement::execQueryUserAchievementsV2)
{
	P_GET_ENUM_REF(EAccelByteGlobalAchievementListSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_GET_UBOOL(Z_Param_PreferUnlocked);
	P_GET_PROPERTY(FStrProperty,Z_Param_TagQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryUserAchievementsV2((EAccelByteGlobalAchievementListSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedUserAchievementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit,Z_Param_PreferUnlocked,Z_Param_TagQuery);
	P_NATIVE_END;
}
// End Class UABAchievement Function QueryUserAchievementsV2

// Begin Class UABAchievement Function UnlockAchievement
struct Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics
{
	struct ABAchievement_eventUnlockAchievement_Parms
	{
		FString AchievementCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventUnlockAchievement_Parms, AchievementCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementCode_MetaData), NewProp_AchievementCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventUnlockAchievement_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAchievement_eventUnlockAchievement_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_AchievementCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "UnlockAchievement", nullptr, nullptr, Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::ABAchievement_eventUnlockAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::ABAchievement_eventUnlockAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAchievement_UnlockAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAchievement::execUnlockAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlockAchievement(Z_Param_AchievementCode,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAchievement Function UnlockAchievement

// Begin Class UABAchievement
void UABAchievement::StaticRegisterNativesUABAchievement()
{
	UClass* Class = UABAchievement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClaimGlobalAchievements", &UABAchievement::execClaimGlobalAchievements },
		{ "GetAchievement", &UABAchievement::execGetAchievement },
		{ "GetTags", &UABAchievement::execGetTags },
		{ "QueryAchievements", &UABAchievement::execQueryAchievements },
		{ "QueryGlobalAchievementContributors", &UABAchievement::execQueryGlobalAchievementContributors },
		{ "QueryGlobalAchievements", &UABAchievement::execQueryGlobalAchievements },
		{ "QueryGlobalAchievementUserContributed", &UABAchievement::execQueryGlobalAchievementUserContributed },
		{ "QueryUserAchievements", &UABAchievement::execQueryUserAchievements },
		{ "QueryUserAchievementsV2", &UABAchievement::execQueryUserAchievementsV2 },
		{ "UnlockAchievement", &UABAchievement::execUnlockAchievement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABAchievement);
UClass* Z_Construct_UClass_UABAchievement_NoRegister()
{
	return UABAchievement::StaticClass();
}
struct Z_Construct_UClass_UABAchievement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABAchievement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements, "ClaimGlobalAchievements" }, // 776502327
		{ &Z_Construct_UFunction_UABAchievement_GetAchievement, "GetAchievement" }, // 2165336234
		{ &Z_Construct_UFunction_UABAchievement_GetTags, "GetTags" }, // 811797053
		{ &Z_Construct_UFunction_UABAchievement_QueryAchievements, "QueryAchievements" }, // 4285416569
		{ &Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors, "QueryGlobalAchievementContributors" }, // 4043877615
		{ &Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements, "QueryGlobalAchievements" }, // 3182702162
		{ &Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed, "QueryGlobalAchievementUserContributed" }, // 3449061207
		{ &Z_Construct_UFunction_UABAchievement_QueryUserAchievements, "QueryUserAchievements" }, // 4289790128
		{ &Z_Construct_UFunction_UABAchievement_QueryUserAchievementsV2, "QueryUserAchievementsV2" }, // 1530081614
		{ &Z_Construct_UFunction_UABAchievement_UnlockAchievement, "UnlockAchievement" }, // 3484538513
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABAchievement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABAchievement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABAchievement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABAchievement_Statics::ClassParams = {
	&UABAchievement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABAchievement_Statics::Class_MetaDataParams), Z_Construct_UClass_UABAchievement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABAchievement()
{
	if (!Z_Registration_Info_UClass_UABAchievement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABAchievement.OuterSingleton, Z_Construct_UClass_UABAchievement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABAchievement.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABAchievement>()
{
	return UABAchievement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABAchievement);
UABAchievement::~UABAchievement() {}
// End Class UABAchievement

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABAchievement, UABAchievement::StaticClass, TEXT("UABAchievement"), &Z_Registration_Info_UClass_UABAchievement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABAchievement), 1559383863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_964391213(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABReward.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABReward() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABReward();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABReward_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRewardListSortBy();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsQueryReward__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsRewardInfo__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABReward Function GetRewardByRewardCode
struct Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics
{
	struct ABReward_eventGetRewardByRewardCode_Parms
	{
		FString RewardCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABReward.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RewardCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_RewardCode = { "RewardCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardCode_Parms, RewardCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardCode_MetaData), NewProp_RewardCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsRewardInfo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 919021729
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_RewardCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABReward, nullptr, "GetRewardByRewardCode", nullptr, nullptr, Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::ABReward_eventGetRewardByRewardCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::ABReward_eventGetRewardByRewardCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABReward_GetRewardByRewardCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABReward::execGetRewardByRewardCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RewardCode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRewardByRewardCode(Z_Param_RewardCode,FDModelsRewardInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABReward Function GetRewardByRewardCode

// Begin Class UABReward Function GetRewardByRewardId
struct Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics
{
	struct ABReward_eventGetRewardByRewardId_Parms
	{
		FString RewardId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABReward.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RewardId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_RewardId = { "RewardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardId_Parms, RewardId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardId_MetaData), NewProp_RewardId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsRewardInfo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 919021729
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_RewardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABReward, nullptr, "GetRewardByRewardId", nullptr, nullptr, Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::ABReward_eventGetRewardByRewardId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::ABReward_eventGetRewardByRewardId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABReward_GetRewardByRewardId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABReward::execGetRewardByRewardId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RewardId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRewardByRewardId(Z_Param_RewardId,FDModelsRewardInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABReward Function GetRewardByRewardId

// Begin Class UABReward Function QueryRewards
struct Z_Construct_UFunction_UABReward_QueryRewards_Statics
{
	struct ABReward_eventQueryRewards_Parms
	{
		FString EventTopic;
		int32 Offset;
		int32 Limit;
		EAccelByteRewardListSortBy SortBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABReward.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTopic_MetaData[] = {
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventTopic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_EventTopic = { "EventTopic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, EventTopic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTopic_MetaData), NewProp_EventTopic_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRewardListSortBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 2219842624
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsQueryReward__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4180170381
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABReward_QueryRewards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_EventTopic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_QueryRewards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABReward, nullptr, "QueryRewards", nullptr, nullptr, Z_Construct_UFunction_UABReward_QueryRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_QueryRewards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABReward_QueryRewards_Statics::ABReward_eventQueryRewards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_QueryRewards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABReward_QueryRewards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABReward_QueryRewards_Statics::ABReward_eventQueryRewards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABReward_QueryRewards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABReward_QueryRewards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABReward::execQueryRewards)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EventTopic);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_GET_ENUM_REF(EAccelByteRewardListSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryRewards(Z_Param_EventTopic,Z_Param_Offset,Z_Param_Limit,(EAccelByteRewardListSortBy&)(Z_Param_Out_SortBy),FDModelsQueryReward(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABReward Function QueryRewards

// Begin Class UABReward
void UABReward::StaticRegisterNativesUABReward()
{
	UClass* Class = UABReward::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRewardByRewardCode", &UABReward::execGetRewardByRewardCode },
		{ "GetRewardByRewardId", &UABReward::execGetRewardByRewardId },
		{ "QueryRewards", &UABReward::execQueryRewards },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABReward);
UClass* Z_Construct_UClass_UABReward_NoRegister()
{
	return UABReward::StaticClass();
}
struct Z_Construct_UClass_UABReward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABReward.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABReward.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABReward_GetRewardByRewardCode, "GetRewardByRewardCode" }, // 80009329
		{ &Z_Construct_UFunction_UABReward_GetRewardByRewardId, "GetRewardByRewardId" }, // 3419957440
		{ &Z_Construct_UFunction_UABReward_QueryRewards, "QueryRewards" }, // 3192051551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABReward>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABReward_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABReward_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABReward_Statics::ClassParams = {
	&UABReward::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABReward_Statics::Class_MetaDataParams), Z_Construct_UClass_UABReward_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABReward()
{
	if (!Z_Registration_Info_UClass_UABReward.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABReward.OuterSingleton, Z_Construct_UClass_UABReward_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABReward.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABReward>()
{
	return UABReward::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABReward);
UABReward::~UABReward() {}
// End Class UABReward

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABReward, UABReward::StaticClass, TEXT("UABReward"), &Z_Registration_Info_UClass_UABReward, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABReward), 1431425852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_722991772(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerMatchmaking.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMatchmakingResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerMatchmaking() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerMatchmaking();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerMatchmaking_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingResultDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerMatchmaking Function ActivateSessionStatusPolling
struct Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics
{
	struct ABServerMatchmaking_eventActivateSessionStatusPolling_Parms
	{
		FString MatchId;
		int32 IntervalSec;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntervalSec;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventActivateSessionStatusPolling_Parms, MatchId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchId_MetaData), NewProp_MatchId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_IntervalSec = { "IntervalSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventActivateSessionStatusPolling_Parms, IntervalSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventActivateSessionStatusPolling_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingResultDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3154702464
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventActivateSessionStatusPolling_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_MatchId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_IntervalSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "ActivateSessionStatusPolling", nullptr, nullptr, Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::ABServerMatchmaking_eventActivateSessionStatusPolling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::ABServerMatchmaking_eventActivateSessionStatusPolling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerMatchmaking::execActivateSessionStatusPolling)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
	P_GET_PROPERTY(FIntProperty,Z_Param_IntervalSec);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateSessionStatusPolling(Z_Param_MatchId,Z_Param_IntervalSec,FDMatchmakingResultDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerMatchmaking Function ActivateSessionStatusPolling

// Begin Class UABServerMatchmaking Function AddUserToSession
struct Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics
{
	struct ABServerMatchmaking_eventAddUserToSession_Parms
	{
		FString ChannelName;
		FString MatchId;
		FString UserId;
		FString OptionalPartyId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalPartyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalPartyId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, ChannelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelName_MetaData), NewProp_ChannelName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, MatchId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchId_MetaData), NewProp_MatchId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OptionalPartyId = { "OptionalPartyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, OptionalPartyId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalPartyId_MetaData), NewProp_OptionalPartyId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_ChannelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_MatchId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OptionalPartyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "AddUserToSession", nullptr, nullptr, Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::ABServerMatchmaking_eventAddUserToSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::ABServerMatchmaking_eventAddUserToSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerMatchmaking::execAddUserToSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ChannelName);
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_OptionalPartyId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddUserToSession(Z_Param_ChannelName,Z_Param_MatchId,Z_Param_UserId,Z_Param_OptionalPartyId,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerMatchmaking Function AddUserToSession

// Begin Class UABServerMatchmaking Function DeactivateStatusPolling
struct Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "DeactivateStatusPolling", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerMatchmaking::execDeactivateStatusPolling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateStatusPolling();
	P_NATIVE_END;
}
// End Class UABServerMatchmaking Function DeactivateStatusPolling

// Begin Class UABServerMatchmaking Function DequeueJoinableSession
struct Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics
{
	struct ABServerMatchmaking_eventDequeueJoinableSession_Parms
	{
		FString MatchId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventDequeueJoinableSession_Parms, MatchId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchId_MetaData), NewProp_MatchId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventDequeueJoinableSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventDequeueJoinableSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_MatchId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "DequeueJoinableSession", nullptr, nullptr, Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::ABServerMatchmaking_eventDequeueJoinableSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::ABServerMatchmaking_eventDequeueJoinableSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerMatchmaking::execDequeueJoinableSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DequeueJoinableSession(Z_Param_MatchId,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerMatchmaking Function DequeueJoinableSession

// Begin Class UABServerMatchmaking Function EnqueueJoinableSession
struct Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics
{
	struct ABServerMatchmaking_eventEnqueueJoinableSession_Parms
	{
		FAccelByteModelsMatchmakingResult MatchmakingResult;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchmakingResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchmakingResult;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_MatchmakingResult = { "MatchmakingResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventEnqueueJoinableSession_Parms, MatchmakingResult), Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchmakingResult_MetaData), NewProp_MatchmakingResult_MetaData) }; // 522785936
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventEnqueueJoinableSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventEnqueueJoinableSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_MatchmakingResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "EnqueueJoinableSession", nullptr, nullptr, Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::ABServerMatchmaking_eventEnqueueJoinableSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::ABServerMatchmaking_eventEnqueueJoinableSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerMatchmaking::execEnqueueJoinableSession)
{
	P_GET_STRUCT_REF(FAccelByteModelsMatchmakingResult,Z_Param_Out_MatchmakingResult);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnqueueJoinableSession(Z_Param_Out_MatchmakingResult,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerMatchmaking Function EnqueueJoinableSession

// Begin Class UABServerMatchmaking Function QuerySessionStatus
struct Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics
{
	struct ABServerMatchmaking_eventQuerySessionStatus_Parms
	{
		FString MatchId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventQuerySessionStatus_Parms, MatchId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchId_MetaData), NewProp_MatchId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventQuerySessionStatus_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingResultDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3154702464
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventQuerySessionStatus_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_MatchId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "QuerySessionStatus", nullptr, nullptr, Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::ABServerMatchmaking_eventQuerySessionStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::ABServerMatchmaking_eventQuerySessionStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerMatchmaking::execQuerySessionStatus)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuerySessionStatus(Z_Param_MatchId,FDMatchmakingResultDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerMatchmaking Function QuerySessionStatus

// Begin Class UABServerMatchmaking Function RebalanceMatchmakingBasedOnMMR
struct Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics
{
	struct ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms
	{
		FString MatchId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms, MatchId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchId_MetaData), NewProp_MatchId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingResultDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3154702464
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_MatchId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "RebalanceMatchmakingBasedOnMMR", nullptr, nullptr, Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerMatchmaking::execRebalanceMatchmakingBasedOnMMR)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RebalanceMatchmakingBasedOnMMR(Z_Param_MatchId,FDMatchmakingResultDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerMatchmaking Function RebalanceMatchmakingBasedOnMMR

// Begin Class UABServerMatchmaking Function RemoveUserFromSession
struct Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics
{
	struct ABServerMatchmaking_eventRemoveUserFromSession_Parms
	{
		FString ChannelName;
		FString MatchId;
		FString UserId;
		FAccelByteModelsMatchmakingResult OptionalBody;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalBody;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, ChannelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelName_MetaData), NewProp_ChannelName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, MatchId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchId_MetaData), NewProp_MatchId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OptionalBody = { "OptionalBody", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, OptionalBody), Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalBody_MetaData), NewProp_OptionalBody_MetaData) }; // 522785936
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_ChannelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_MatchId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OptionalBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "RemoveUserFromSession", nullptr, nullptr, Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::ABServerMatchmaking_eventRemoveUserFromSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::ABServerMatchmaking_eventRemoveUserFromSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerMatchmaking::execRemoveUserFromSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ChannelName);
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_STRUCT_REF(FAccelByteModelsMatchmakingResult,Z_Param_Out_OptionalBody);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveUserFromSession(Z_Param_ChannelName,Z_Param_MatchId,Z_Param_UserId,Z_Param_Out_OptionalBody,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerMatchmaking Function RemoveUserFromSession

// Begin Class UABServerMatchmaking
void UABServerMatchmaking::StaticRegisterNativesUABServerMatchmaking()
{
	UClass* Class = UABServerMatchmaking::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateSessionStatusPolling", &UABServerMatchmaking::execActivateSessionStatusPolling },
		{ "AddUserToSession", &UABServerMatchmaking::execAddUserToSession },
		{ "DeactivateStatusPolling", &UABServerMatchmaking::execDeactivateStatusPolling },
		{ "DequeueJoinableSession", &UABServerMatchmaking::execDequeueJoinableSession },
		{ "EnqueueJoinableSession", &UABServerMatchmaking::execEnqueueJoinableSession },
		{ "QuerySessionStatus", &UABServerMatchmaking::execQuerySessionStatus },
		{ "RebalanceMatchmakingBasedOnMMR", &UABServerMatchmaking::execRebalanceMatchmakingBasedOnMMR },
		{ "RemoveUserFromSession", &UABServerMatchmaking::execRemoveUserFromSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerMatchmaking);
UClass* Z_Construct_UClass_UABServerMatchmaking_NoRegister()
{
	return UABServerMatchmaking::StaticClass();
}
struct Z_Construct_UClass_UABServerMatchmaking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerMatchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling, "ActivateSessionStatusPolling" }, // 2281347692
		{ &Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession, "AddUserToSession" }, // 754423972
		{ &Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling, "DeactivateStatusPolling" }, // 2951669201
		{ &Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession, "DequeueJoinableSession" }, // 3335181169
		{ &Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession, "EnqueueJoinableSession" }, // 3039931507
		{ &Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus, "QuerySessionStatus" }, // 1819758809
		{ &Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR, "RebalanceMatchmakingBasedOnMMR" }, // 1212649290
		{ &Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession, "RemoveUserFromSession" }, // 864012227
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerMatchmaking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerMatchmaking_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerMatchmaking_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerMatchmaking_Statics::ClassParams = {
	&UABServerMatchmaking::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerMatchmaking_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerMatchmaking_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerMatchmaking()
{
	if (!Z_Registration_Info_UClass_UABServerMatchmaking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerMatchmaking.OuterSingleton, Z_Construct_UClass_UABServerMatchmaking_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerMatchmaking.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerMatchmaking>()
{
	return UABServerMatchmaking::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerMatchmaking);
UABServerMatchmaking::~UABServerMatchmaking() {}
// End Class UABServerMatchmaking

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerMatchmaking, UABServerMatchmaking::StaticClass, TEXT("UABServerMatchmaking"), &Z_Registration_Info_UClass_UABServerMatchmaking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerMatchmaking), 3674184893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_4041660749(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

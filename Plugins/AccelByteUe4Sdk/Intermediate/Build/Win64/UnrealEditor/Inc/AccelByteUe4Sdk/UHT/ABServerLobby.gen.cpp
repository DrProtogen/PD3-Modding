// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerLobby.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerLobby() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerLobby();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerLobby_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDataPartyResponseDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListBlockedUserResponseDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListBlockerResponseDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDataNotifDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPayloadModifier__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSessionAttributeAllResponseDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSessionAttributeResponseDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerLobby Function GetListOfBlockedUsers
struct Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics
{
	struct ABServerLobby_eventGetListOfBlockedUsers_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockedUsers_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockedUsers_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListBlockedUserResponseDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1070224487
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockedUsers_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetListOfBlockedUsers", nullptr, nullptr, Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::ABServerLobby_eventGetListOfBlockedUsers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::ABServerLobby_eventGetListOfBlockedUsers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerLobby::execGetListOfBlockedUsers)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetListOfBlockedUsers(Z_Param_UserId,FDListBlockedUserResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerLobby Function GetListOfBlockedUsers

// Begin Class UABServerLobby Function GetListOfBlockers
struct Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics
{
	struct ABServerLobby_eventGetListOfBlockers_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockers_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockers_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListBlockerResponseDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3495715558
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockers_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetListOfBlockers", nullptr, nullptr, Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::ABServerLobby_eventGetListOfBlockers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::ABServerLobby_eventGetListOfBlockers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerLobby_GetListOfBlockers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerLobby::execGetListOfBlockers)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetListOfBlockers(Z_Param_UserId,FDListBlockerResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerLobby Function GetListOfBlockers

// Begin Class UABServerLobby Function GetPartyDataByUserId
struct Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics
{
	struct ABServerLobby_eventGetPartyDataByUserId_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyDataByUserId_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyDataByUserId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDataPartyResponseDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1747303857
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyDataByUserId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetPartyDataByUserId", nullptr, nullptr, Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::ABServerLobby_eventGetPartyDataByUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::ABServerLobby_eventGetPartyDataByUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerLobby::execGetPartyDataByUserId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPartyDataByUserId(Z_Param_UserId,FDDataPartyResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerLobby Function GetPartyDataByUserId

// Begin Class UABServerLobby Function GetPartyStorage
struct Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics
{
	struct ABServerLobby_eventGetPartyStorage_Parms
	{
		FString PartyId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartyId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_PartyId = { "PartyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyStorage_Parms, PartyId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyId_MetaData), NewProp_PartyId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyStorage_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDataNotifDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1277926944
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyStorage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_PartyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetPartyStorage", nullptr, nullptr, Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::ABServerLobby_eventGetPartyStorage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::ABServerLobby_eventGetPartyStorage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerLobby_GetPartyStorage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerLobby::execGetPartyStorage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PartyId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPartyStorage(Z_Param_PartyId,FDPartyDataNotifDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerLobby Function GetPartyStorage

// Begin Class UABServerLobby Function GetSessionAttribute
struct Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics
{
	struct ABServerLobby_eventGetSessionAttribute_Parms
	{
		FString UserId;
		FString Key;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttribute_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttribute_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttribute_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSessionAttributeResponseDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3559614426
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttribute_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetSessionAttribute", nullptr, nullptr, Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::ABServerLobby_eventGetSessionAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::ABServerLobby_eventGetSessionAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerLobby_GetSessionAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerLobby::execGetSessionAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSessionAttribute(Z_Param_UserId,Z_Param_Key,FDSessionAttributeResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerLobby Function GetSessionAttribute

// Begin Class UABServerLobby Function GetSessionAttributeAll
struct Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics
{
	struct ABServerLobby_eventGetSessionAttributeAll_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttributeAll_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttributeAll_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSessionAttributeAllResponseDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 464692310
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttributeAll_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetSessionAttributeAll", nullptr, nullptr, Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::ABServerLobby_eventGetSessionAttributeAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::ABServerLobby_eventGetSessionAttributeAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerLobby::execGetSessionAttributeAll)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSessionAttributeAll(Z_Param_UserId,FDSessionAttributeAllResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerLobby Function GetSessionAttributeAll

// Begin Class UABServerLobby Function SetSessionAttribute
struct Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics
{
	struct ABServerLobby_eventSetSessionAttribute_Parms
	{
		FString UserId;
		TMap<FString,FString> Attributes;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttribute_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttribute_Parms, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttribute_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttribute_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "SetSessionAttribute", nullptr, nullptr, Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::ABServerLobby_eventSetSessionAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::ABServerLobby_eventSetSessionAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerLobby_SetSessionAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerLobby::execSetSessionAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_Attributes);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSessionAttribute(Z_Param_UserId,Z_Param_Out_Attributes,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerLobby Function SetSessionAttribute

// Begin Class UABServerLobby Function SetSessionAttributeString
struct Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics
{
	struct ABServerLobby_eventSetSessionAttributeString_Parms
	{
		FString UserId;
		FString Key;
		FString Value;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttributeString_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttributeString_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttributeString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttributeString_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttributeString_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "SetSessionAttributeString", nullptr, nullptr, Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::ABServerLobby_eventSetSessionAttributeString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::ABServerLobby_eventSetSessionAttributeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerLobby::execSetSessionAttributeString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSessionAttributeString(Z_Param_UserId,Z_Param_Key,Z_Param_Value,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerLobby Function SetSessionAttributeString

// Begin Class UABServerLobby Function WritePartyStorage
struct Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics
{
	struct ABServerLobby_eventWritePartyStorage_Parms
	{
		FString PartyId;
		FScriptDelegate PayloadModifier;
		int32 RetryAttempt;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetryAttempt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartyId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PayloadModifier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RetryAttempt;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PartyId = { "PartyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventWritePartyStorage_Parms, PartyId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyId_MetaData), NewProp_PartyId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PayloadModifier = { "PayloadModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventWritePartyStorage_Parms, PayloadModifier), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPayloadModifier__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1663334133
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_RetryAttempt = { "RetryAttempt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventWritePartyStorage_Parms, RetryAttempt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetryAttempt_MetaData), NewProp_RetryAttempt_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventWritePartyStorage_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDataNotifDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1277926944
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerLobby_eventWritePartyStorage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PartyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PayloadModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_RetryAttempt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "WritePartyStorage", nullptr, nullptr, Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::ABServerLobby_eventWritePartyStorage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::ABServerLobby_eventWritePartyStorage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerLobby_WritePartyStorage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerLobby::execWritePartyStorage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PartyId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_PayloadModifier);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RetryAttempt);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WritePartyStorage(Z_Param_PartyId,FDPayloadModifier(Z_Param_PayloadModifier),Z_Param_Out_RetryAttempt,FDPartyDataNotifDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerLobby Function WritePartyStorage

// Begin Class UABServerLobby
void UABServerLobby::StaticRegisterNativesUABServerLobby()
{
	UClass* Class = UABServerLobby::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetListOfBlockedUsers", &UABServerLobby::execGetListOfBlockedUsers },
		{ "GetListOfBlockers", &UABServerLobby::execGetListOfBlockers },
		{ "GetPartyDataByUserId", &UABServerLobby::execGetPartyDataByUserId },
		{ "GetPartyStorage", &UABServerLobby::execGetPartyStorage },
		{ "GetSessionAttribute", &UABServerLobby::execGetSessionAttribute },
		{ "GetSessionAttributeAll", &UABServerLobby::execGetSessionAttributeAll },
		{ "SetSessionAttribute", &UABServerLobby::execSetSessionAttribute },
		{ "SetSessionAttributeString", &UABServerLobby::execSetSessionAttributeString },
		{ "WritePartyStorage", &UABServerLobby::execWritePartyStorage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerLobby);
UClass* Z_Construct_UClass_UABServerLobby_NoRegister()
{
	return UABServerLobby::StaticClass();
}
struct Z_Construct_UClass_UABServerLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerLobby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers, "GetListOfBlockedUsers" }, // 4223954137
		{ &Z_Construct_UFunction_UABServerLobby_GetListOfBlockers, "GetListOfBlockers" }, // 651317732
		{ &Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId, "GetPartyDataByUserId" }, // 3415649394
		{ &Z_Construct_UFunction_UABServerLobby_GetPartyStorage, "GetPartyStorage" }, // 2260951599
		{ &Z_Construct_UFunction_UABServerLobby_GetSessionAttribute, "GetSessionAttribute" }, // 1290699232
		{ &Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll, "GetSessionAttributeAll" }, // 3768238866
		{ &Z_Construct_UFunction_UABServerLobby_SetSessionAttribute, "SetSessionAttribute" }, // 4058716085
		{ &Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString, "SetSessionAttributeString" }, // 3631695580
		{ &Z_Construct_UFunction_UABServerLobby_WritePartyStorage, "WritePartyStorage" }, // 327787425
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerLobby_Statics::ClassParams = {
	&UABServerLobby::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerLobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerLobby()
{
	if (!Z_Registration_Info_UClass_UABServerLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerLobby.OuterSingleton, Z_Construct_UClass_UABServerLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerLobby.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerLobby>()
{
	return UABServerLobby::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerLobby);
UABServerLobby::~UABServerLobby() {}
// End Class UABServerLobby

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerLobby, UABServerLobby::StaticClass, TEXT("UABServerLobby"), &Z_Registration_Info_UClass_UABServerLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerLobby), 3748097912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_3530676795(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABBlock.h"
#include "AccelByteUe4Sdk/Public/BlockPlayerRequest.h"
#include "AccelByteUe4Sdk/Public/UnblockPlayerRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABBlock() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABBlock();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABBlock_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBlockPlayerNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBlockPlayerResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOfBlockedUserResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOfBlockersResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnblockPlayerNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnblockPlayerResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBlockPlayerRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUnblockPlayerRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABBlock Function BlockPlayer
struct Z_Construct_UFunction_UABBlock_BlockPlayer_Statics
{
	struct ABBlock_eventBlockPlayer_Parms
	{
		FBlockPlayerRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventBlockPlayer_Parms, Request), Z_Construct_UScriptStruct_FBlockPlayerRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 4265038448
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventBlockPlayer_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBlockPlayerResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1083757536
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventBlockPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "BlockPlayer", nullptr, nullptr, Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::ABBlock_eventBlockPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::ABBlock_eventBlockPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBlock_BlockPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBlock::execBlockPlayer)
{
	P_GET_STRUCT_REF(FBlockPlayerRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BlockPlayer(Z_Param_Out_Request,FDBlockPlayerResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABBlock Function BlockPlayer

// Begin Class UABBlock Function GetListOfBlockedUsers
struct Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics
{
	struct ABBlock_eventGetListOfBlockedUsers_Parms
	{
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventGetListOfBlockedUsers_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOfBlockedUserResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1557647972
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventGetListOfBlockedUsers_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "GetListOfBlockedUsers", nullptr, nullptr, Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::ABBlock_eventGetListOfBlockedUsers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::ABBlock_eventGetListOfBlockedUsers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBlock::execGetListOfBlockedUsers)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetListOfBlockedUsers(FDListOfBlockedUserResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABBlock Function GetListOfBlockedUsers

// Begin Class UABBlock Function GetListOfBlockers
struct Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics
{
	struct ABBlock_eventGetListOfBlockers_Parms
	{
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventGetListOfBlockers_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOfBlockersResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3494343310
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventGetListOfBlockers_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "GetListOfBlockers", nullptr, nullptr, Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::ABBlock_eventGetListOfBlockers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::ABBlock_eventGetListOfBlockers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBlock_GetListOfBlockers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBlock::execGetListOfBlockers)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetListOfBlockers(FDListOfBlockersResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABBlock Function GetListOfBlockers

// Begin Class UABBlock Function SetBlockPlayerNotifDelegate
struct Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics
{
	struct ABBlock_eventSetBlockPlayerNotifDelegate_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventSetBlockPlayerNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBlockPlayerNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3663439449
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "SetBlockPlayerNotifDelegate", nullptr, nullptr, Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::ABBlock_eventSetBlockPlayerNotifDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::ABBlock_eventSetBlockPlayerNotifDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBlock::execSetBlockPlayerNotifDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlockPlayerNotifDelegate(FDBlockPlayerNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABBlock Function SetBlockPlayerNotifDelegate

// Begin Class UABBlock Function SetUnblockPlayerNotifDelegate
struct Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics
{
	struct ABBlock_eventSetUnblockPlayerNotifDelegate_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventSetUnblockPlayerNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnblockPlayerNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1283491054
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "SetUnblockPlayerNotifDelegate", nullptr, nullptr, Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::ABBlock_eventSetUnblockPlayerNotifDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::ABBlock_eventSetUnblockPlayerNotifDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBlock::execSetUnblockPlayerNotifDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUnblockPlayerNotifDelegate(FDUnblockPlayerNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABBlock Function SetUnblockPlayerNotifDelegate

// Begin Class UABBlock Function UnblockPlayer
struct Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics
{
	struct ABBlock_eventUnblockPlayer_Parms
	{
		FUnblockPlayerRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventUnblockPlayer_Parms, Request), Z_Construct_UScriptStruct_FUnblockPlayerRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1489548293
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventUnblockPlayer_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnblockPlayerResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3829747279
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBlock_eventUnblockPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "UnblockPlayer", nullptr, nullptr, Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::ABBlock_eventUnblockPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::ABBlock_eventUnblockPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABBlock_UnblockPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABBlock::execUnblockPlayer)
{
	P_GET_STRUCT_REF(FUnblockPlayerRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnblockPlayer(Z_Param_Out_Request,FDUnblockPlayerResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABBlock Function UnblockPlayer

// Begin Class UABBlock
void UABBlock::StaticRegisterNativesUABBlock()
{
	UClass* Class = UABBlock::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BlockPlayer", &UABBlock::execBlockPlayer },
		{ "GetListOfBlockedUsers", &UABBlock::execGetListOfBlockedUsers },
		{ "GetListOfBlockers", &UABBlock::execGetListOfBlockers },
		{ "SetBlockPlayerNotifDelegate", &UABBlock::execSetBlockPlayerNotifDelegate },
		{ "SetUnblockPlayerNotifDelegate", &UABBlock::execSetUnblockPlayerNotifDelegate },
		{ "UnblockPlayer", &UABBlock::execUnblockPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABBlock);
UClass* Z_Construct_UClass_UABBlock_NoRegister()
{
	return UABBlock::StaticClass();
}
struct Z_Construct_UClass_UABBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABBlock_BlockPlayer, "BlockPlayer" }, // 1744729403
		{ &Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers, "GetListOfBlockedUsers" }, // 1330420547
		{ &Z_Construct_UFunction_UABBlock_GetListOfBlockers, "GetListOfBlockers" }, // 1685109738
		{ &Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate, "SetBlockPlayerNotifDelegate" }, // 3024914342
		{ &Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate, "SetUnblockPlayerNotifDelegate" }, // 4286815490
		{ &Z_Construct_UFunction_UABBlock_UnblockPlayer, "UnblockPlayer" }, // 3382394270
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABBlock_Statics::ClassParams = {
	&UABBlock::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UABBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABBlock()
{
	if (!Z_Registration_Info_UClass_UABBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABBlock.OuterSingleton, Z_Construct_UClass_UABBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABBlock.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABBlock>()
{
	return UABBlock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABBlock);
UABBlock::~UABBlock() {}
// End Class UABBlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABBlock, UABBlock::StaticClass, TEXT("UABBlock"), &Z_Registration_Info_UClass_UABBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABBlock), 850911146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_1428418495(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

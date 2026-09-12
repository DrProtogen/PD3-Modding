// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABFriends.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBulkFriendsRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABFriends() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABFriends();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABFriends_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAcceptFriendsNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAcceptFriendsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelFriendsNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelFriendsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetFriendshipStatusResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListIncomingFriendsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOutgoingFriendsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoadFriendListResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRejectFriendsNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRejectFriendsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRequestFriendsNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRequestFriendsResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnfriendNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnfriendResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkFriendsRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABFriends Function AcceptFriend
struct Z_Construct_UFunction_UABFriends_AcceptFriend_Statics
{
	struct ABFriends_eventAcceptFriend_Parms
	{
		FString UserId;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventAcceptFriend_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventAcceptFriend_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAcceptFriendsResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1610436608
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventAcceptFriend_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "AcceptFriend", nullptr, nullptr, Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::ABFriends_eventAcceptFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::ABFriends_eventAcceptFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_AcceptFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execAcceptFriend)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AcceptFriend(Z_Param_UserId,FDAcceptFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFriends Function AcceptFriend

// Begin Class UABFriends Function BulkFriendRequest
struct Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics
{
	struct ABFriends_eventBulkFriendRequest_Parms
	{
		FAccelByteModelsBulkFriendsRequest UserIds;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserIds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventBulkFriendRequest_Parms, UserIds), Z_Construct_UScriptStruct_FAccelByteModelsBulkFriendsRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIds_MetaData), NewProp_UserIds_MetaData) }; // 3417894954
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventBulkFriendRequest_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventBulkFriendRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_UserIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "BulkFriendRequest", nullptr, nullptr, Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::ABFriends_eventBulkFriendRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::ABFriends_eventBulkFriendRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_BulkFriendRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execBulkFriendRequest)
{
	P_GET_STRUCT_REF(FAccelByteModelsBulkFriendsRequest,Z_Param_Out_UserIds);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkFriendRequest(Z_Param_Out_UserIds,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFriends Function BulkFriendRequest

// Begin Class UABFriends Function CancelFriendRequest
struct Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics
{
	struct ABFriends_eventCancelFriendRequest_Parms
	{
		FString UserId;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventCancelFriendRequest_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventCancelFriendRequest_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelFriendsResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3137372031
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventCancelFriendRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "CancelFriendRequest", nullptr, nullptr, Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::ABFriends_eventCancelFriendRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::ABFriends_eventCancelFriendRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_CancelFriendRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execCancelFriendRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelFriendRequest(Z_Param_UserId,FDCancelFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFriends Function CancelFriendRequest

// Begin Class UABFriends Function GetFriendshipStatus
struct Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics
{
	struct ABFriends_eventGetFriendshipStatus_Parms
	{
		FString UserId;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventGetFriendshipStatus_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventGetFriendshipStatus_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetFriendshipStatusResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 167120610
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventGetFriendshipStatus_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "GetFriendshipStatus", nullptr, nullptr, Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::ABFriends_eventGetFriendshipStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::ABFriends_eventGetFriendshipStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_GetFriendshipStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execGetFriendshipStatus)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFriendshipStatus(Z_Param_UserId,FDGetFriendshipStatusResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFriends Function GetFriendshipStatus

// Begin Class UABFriends Function ListIncomingFriends
struct Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics
{
	struct ABFriends_eventListIncomingFriends_Parms
	{
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventListIncomingFriends_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListIncomingFriendsResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2951297651
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventListIncomingFriends_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "ListIncomingFriends", nullptr, nullptr, Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::ABFriends_eventListIncomingFriends_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::ABFriends_eventListIncomingFriends_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_ListIncomingFriends()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execListIncomingFriends)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ListIncomingFriends(FDListIncomingFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFriends Function ListIncomingFriends

// Begin Class UABFriends Function ListOutgoingFriends
struct Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics
{
	struct ABFriends_eventListOutgoingFriends_Parms
	{
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventListOutgoingFriends_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOutgoingFriendsResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3083595602
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventListOutgoingFriends_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "ListOutgoingFriends", nullptr, nullptr, Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::ABFriends_eventListOutgoingFriends_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::ABFriends_eventListOutgoingFriends_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_ListOutgoingFriends()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execListOutgoingFriends)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ListOutgoingFriends(FDListOutgoingFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFriends Function ListOutgoingFriends

// Begin Class UABFriends Function LoadFriendsList
struct Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics
{
	struct ABFriends_eventLoadFriendsList_Parms
	{
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventLoadFriendsList_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoadFriendListResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3439813498
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventLoadFriendsList_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "LoadFriendsList", nullptr, nullptr, Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::ABFriends_eventLoadFriendsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::ABFriends_eventLoadFriendsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_LoadFriendsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execLoadFriendsList)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadFriendsList(FDLoadFriendListResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFriends Function LoadFriendsList

// Begin Class UABFriends Function RejectFriend
struct Z_Construct_UFunction_UABFriends_RejectFriend_Statics
{
	struct ABFriends_eventRejectFriend_Parms
	{
		FString UserId;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventRejectFriend_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventRejectFriend_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRejectFriendsResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3107622634
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventRejectFriend_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_RejectFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RejectFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_RejectFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "RejectFriend", nullptr, nullptr, Z_Construct_UFunction_UABFriends_RejectFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RejectFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_RejectFriend_Statics::ABFriends_eventRejectFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RejectFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_RejectFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_RejectFriend_Statics::ABFriends_eventRejectFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_RejectFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_RejectFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execRejectFriend)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RejectFriend(Z_Param_UserId,FDRejectFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFriends Function RejectFriend

// Begin Class UABFriends Function RequestFriend
struct Z_Construct_UFunction_UABFriends_RequestFriend_Statics
{
	struct ABFriends_eventRequestFriend_Parms
	{
		FString UserId;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventRequestFriend_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventRequestFriend_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRequestFriendsResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 527039367
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventRequestFriend_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_RequestFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RequestFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_RequestFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "RequestFriend", nullptr, nullptr, Z_Construct_UFunction_UABFriends_RequestFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RequestFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_RequestFriend_Statics::ABFriends_eventRequestFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RequestFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_RequestFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_RequestFriend_Statics::ABFriends_eventRequestFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_RequestFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_RequestFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execRequestFriend)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestFriend(Z_Param_UserId,FDRequestFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFriends Function RequestFriend

// Begin Class UABFriends Function SetOnCancelFriendsNotifDelegate
struct Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics
{
	struct ABFriends_eventSetOnCancelFriendsNotifDelegate_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventSetOnCancelFriendsNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelFriendsNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 442123577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "SetOnCancelFriendsNotifDelegate", nullptr, nullptr, Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::ABFriends_eventSetOnCancelFriendsNotifDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::ABFriends_eventSetOnCancelFriendsNotifDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execSetOnCancelFriendsNotifDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnCancelFriendsNotifDelegate(FDCancelFriendsNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABFriends Function SetOnCancelFriendsNotifDelegate

// Begin Class UABFriends Function SetOnFriendRequestAcceptedNotifDelegate
struct Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics
{
	struct ABFriends_eventSetOnFriendRequestAcceptedNotifDelegate_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventSetOnFriendRequestAcceptedNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAcceptFriendsNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3416353011
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "SetOnFriendRequestAcceptedNotifDelegate", nullptr, nullptr, Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::ABFriends_eventSetOnFriendRequestAcceptedNotifDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::ABFriends_eventSetOnFriendRequestAcceptedNotifDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execSetOnFriendRequestAcceptedNotifDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnFriendRequestAcceptedNotifDelegate(FDAcceptFriendsNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABFriends Function SetOnFriendRequestAcceptedNotifDelegate

// Begin Class UABFriends Function SetOnIncomingRequestFriendsNotifDelegate
struct Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics
{
	struct ABFriends_eventSetOnIncomingRequestFriendsNotifDelegate_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventSetOnIncomingRequestFriendsNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRequestFriendsNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 171340463
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "SetOnIncomingRequestFriendsNotifDelegate", nullptr, nullptr, Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::ABFriends_eventSetOnIncomingRequestFriendsNotifDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::ABFriends_eventSetOnIncomingRequestFriendsNotifDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execSetOnIncomingRequestFriendsNotifDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnIncomingRequestFriendsNotifDelegate(FDRequestFriendsNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABFriends Function SetOnIncomingRequestFriendsNotifDelegate

// Begin Class UABFriends Function SetOnRejectFriendsNotifDelegate
struct Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics
{
	struct ABFriends_eventSetOnRejectFriendsNotifDelegate_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventSetOnRejectFriendsNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRejectFriendsNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1405478714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "SetOnRejectFriendsNotifDelegate", nullptr, nullptr, Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::ABFriends_eventSetOnRejectFriendsNotifDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::ABFriends_eventSetOnRejectFriendsNotifDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execSetOnRejectFriendsNotifDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnRejectFriendsNotifDelegate(FDRejectFriendsNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABFriends Function SetOnRejectFriendsNotifDelegate

// Begin Class UABFriends Function SetOnUnfriendNotifDelegate
struct Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics
{
	struct ABFriends_eventSetOnUnfriendNotifDelegate_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventSetOnUnfriendNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnfriendNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3643812049
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "SetOnUnfriendNotifDelegate", nullptr, nullptr, Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::ABFriends_eventSetOnUnfriendNotifDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::ABFriends_eventSetOnUnfriendNotifDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execSetOnUnfriendNotifDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnUnfriendNotifDelegate(FDUnfriendNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABFriends Function SetOnUnfriendNotifDelegate

// Begin Class UABFriends Function Unfriend
struct Z_Construct_UFunction_UABFriends_Unfriend_Statics
{
	struct ABFriends_eventUnfriend_Parms
	{
		FString UserId;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventUnfriend_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventUnfriend_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnfriendResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2831320674
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFriends_eventUnfriend_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_Unfriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_Unfriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_Unfriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "Unfriend", nullptr, nullptr, Z_Construct_UFunction_UABFriends_Unfriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_Unfriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFriends_Unfriend_Statics::ABFriends_eventUnfriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_Unfriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFriends_Unfriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFriends_Unfriend_Statics::ABFriends_eventUnfriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFriends_Unfriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFriends_Unfriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFriends::execUnfriend)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unfriend(Z_Param_UserId,FDUnfriendResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFriends Function Unfriend

// Begin Class UABFriends
void UABFriends::StaticRegisterNativesUABFriends()
{
	UClass* Class = UABFriends::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptFriend", &UABFriends::execAcceptFriend },
		{ "BulkFriendRequest", &UABFriends::execBulkFriendRequest },
		{ "CancelFriendRequest", &UABFriends::execCancelFriendRequest },
		{ "GetFriendshipStatus", &UABFriends::execGetFriendshipStatus },
		{ "ListIncomingFriends", &UABFriends::execListIncomingFriends },
		{ "ListOutgoingFriends", &UABFriends::execListOutgoingFriends },
		{ "LoadFriendsList", &UABFriends::execLoadFriendsList },
		{ "RejectFriend", &UABFriends::execRejectFriend },
		{ "RequestFriend", &UABFriends::execRequestFriend },
		{ "SetOnCancelFriendsNotifDelegate", &UABFriends::execSetOnCancelFriendsNotifDelegate },
		{ "SetOnFriendRequestAcceptedNotifDelegate", &UABFriends::execSetOnFriendRequestAcceptedNotifDelegate },
		{ "SetOnIncomingRequestFriendsNotifDelegate", &UABFriends::execSetOnIncomingRequestFriendsNotifDelegate },
		{ "SetOnRejectFriendsNotifDelegate", &UABFriends::execSetOnRejectFriendsNotifDelegate },
		{ "SetOnUnfriendNotifDelegate", &UABFriends::execSetOnUnfriendNotifDelegate },
		{ "Unfriend", &UABFriends::execUnfriend },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABFriends);
UClass* Z_Construct_UClass_UABFriends_NoRegister()
{
	return UABFriends::StaticClass();
}
struct Z_Construct_UClass_UABFriends_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABFriends.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABFriends_AcceptFriend, "AcceptFriend" }, // 2364314487
		{ &Z_Construct_UFunction_UABFriends_BulkFriendRequest, "BulkFriendRequest" }, // 2478407839
		{ &Z_Construct_UFunction_UABFriends_CancelFriendRequest, "CancelFriendRequest" }, // 3148885850
		{ &Z_Construct_UFunction_UABFriends_GetFriendshipStatus, "GetFriendshipStatus" }, // 2546696095
		{ &Z_Construct_UFunction_UABFriends_ListIncomingFriends, "ListIncomingFriends" }, // 3120853872
		{ &Z_Construct_UFunction_UABFriends_ListOutgoingFriends, "ListOutgoingFriends" }, // 1935401531
		{ &Z_Construct_UFunction_UABFriends_LoadFriendsList, "LoadFriendsList" }, // 1288600924
		{ &Z_Construct_UFunction_UABFriends_RejectFriend, "RejectFriend" }, // 2896296394
		{ &Z_Construct_UFunction_UABFriends_RequestFriend, "RequestFriend" }, // 3961340763
		{ &Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate, "SetOnCancelFriendsNotifDelegate" }, // 2212705499
		{ &Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate, "SetOnFriendRequestAcceptedNotifDelegate" }, // 4102963373
		{ &Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate, "SetOnIncomingRequestFriendsNotifDelegate" }, // 1587443680
		{ &Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate, "SetOnRejectFriendsNotifDelegate" }, // 1607681172
		{ &Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate, "SetOnUnfriendNotifDelegate" }, // 510121795
		{ &Z_Construct_UFunction_UABFriends_Unfriend, "Unfriend" }, // 3049269847
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABFriends>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABFriends_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABFriends_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABFriends_Statics::ClassParams = {
	&UABFriends::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABFriends_Statics::Class_MetaDataParams), Z_Construct_UClass_UABFriends_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABFriends()
{
	if (!Z_Registration_Info_UClass_UABFriends.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABFriends.OuterSingleton, Z_Construct_UClass_UABFriends_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABFriends.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABFriends>()
{
	return UABFriends::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABFriends);
UABFriends::~UABFriends() {}
// End Class UABFriends

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABFriends_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABFriends, UABFriends::StaticClass, TEXT("UABFriends"), &Z_Registration_Info_UClass_UABFriends, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABFriends), 906415243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABFriends_h_1005410457(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABFriends_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABFriends_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

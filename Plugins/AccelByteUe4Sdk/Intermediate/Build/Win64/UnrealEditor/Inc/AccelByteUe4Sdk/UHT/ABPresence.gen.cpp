// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABPresence.h"
#include "AccelByteUe4Sdk/Public/AccelBytePresenceStatus.h"
#include "AccelByteUe4Sdk/Public/BulkGetUserPresenceRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPresence() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABPresence();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABPresence_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBulkGetUserPresence__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DFriendStatusNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetAllFriendsStatusResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOnSetUserPresence__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelBytePresenceStatus();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABPresence Function BulkGetUserPresence
struct Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics
{
	struct ABPresence_eventBulkGetUserPresence_Parms
	{
		FBulkGetUserPresenceRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPresence.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventBulkGetUserPresence_Parms, Request), Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 2306458719
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventBulkGetUserPresence_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBulkGetUserPresence__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1323949795
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventBulkGetUserPresence_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPresence, nullptr, "BulkGetUserPresence", nullptr, nullptr, Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::ABPresence_eventBulkGetUserPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::ABPresence_eventBulkGetUserPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABPresence_BulkGetUserPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABPresence::execBulkGetUserPresence)
{
	P_GET_STRUCT_REF(FBulkGetUserPresenceRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkGetUserPresence(Z_Param_Out_Request,FDBulkGetUserPresence(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABPresence Function BulkGetUserPresence

// Begin Class UABPresence Function BulkGetUserPresenceV2
struct Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics
{
	struct ABPresence_eventBulkGetUserPresenceV2_Parms
	{
		FBulkGetUserPresenceRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPresence.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventBulkGetUserPresenceV2_Parms, Request), Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 2306458719
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventBulkGetUserPresenceV2_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBulkGetUserPresence__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1323949795
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventBulkGetUserPresenceV2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPresence, nullptr, "BulkGetUserPresenceV2", nullptr, nullptr, Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::ABPresence_eventBulkGetUserPresenceV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::ABPresence_eventBulkGetUserPresenceV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABPresence::execBulkGetUserPresenceV2)
{
	P_GET_STRUCT_REF(FBulkGetUserPresenceRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkGetUserPresenceV2(Z_Param_Out_Request,FDBulkGetUserPresence(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABPresence Function BulkGetUserPresenceV2

// Begin Class UABPresence Function GetAllFriendsStatus
struct Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics
{
	struct ABPresence_eventGetAllFriendsStatus_Parms
	{
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPresence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventGetAllFriendsStatus_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetAllFriendsStatusResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1412661557
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventGetAllFriendsStatus_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPresence, nullptr, "GetAllFriendsStatus", nullptr, nullptr, Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::ABPresence_eventGetAllFriendsStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::ABPresence_eventGetAllFriendsStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABPresence_GetAllFriendsStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABPresence::execGetAllFriendsStatus)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllFriendsStatus(FDGetAllFriendsStatusResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABPresence Function GetAllFriendsStatus

// Begin Class UABPresence Function SetOnFriendStatusNotif
struct Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics
{
	struct ABPresence_eventSetOnFriendStatusNotif_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPresence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventSetOnFriendStatusNotif_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DFriendStatusNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 539468582
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPresence, nullptr, "SetOnFriendStatusNotif", nullptr, nullptr, Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::ABPresence_eventSetOnFriendStatusNotif_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::ABPresence_eventSetOnFriendStatusNotif_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABPresence::execSetOnFriendStatusNotif)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnFriendStatusNotif(FDFriendStatusNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABPresence Function SetOnFriendStatusNotif

// Begin Class UABPresence Function SetPresenceStatus
struct Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics
{
	struct ABPresence_eventSetPresenceStatus_Parms
	{
		FAccelBytePresenceStatus Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPresence.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventSetPresenceStatus_Parms, Request), Z_Construct_UScriptStruct_FAccelBytePresenceStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1808903303
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventSetPresenceStatus_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOnSetUserPresence__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 180058417
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPresence_eventSetPresenceStatus_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPresence, nullptr, "SetPresenceStatus", nullptr, nullptr, Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::ABPresence_eventSetPresenceStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::ABPresence_eventSetPresenceStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABPresence_SetPresenceStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABPresence::execSetPresenceStatus)
{
	P_GET_STRUCT_REF(FAccelBytePresenceStatus,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPresenceStatus(Z_Param_Out_Request,FDOnSetUserPresence(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABPresence Function SetPresenceStatus

// Begin Class UABPresence
void UABPresence::StaticRegisterNativesUABPresence()
{
	UClass* Class = UABPresence::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulkGetUserPresence", &UABPresence::execBulkGetUserPresence },
		{ "BulkGetUserPresenceV2", &UABPresence::execBulkGetUserPresenceV2 },
		{ "GetAllFriendsStatus", &UABPresence::execGetAllFriendsStatus },
		{ "SetOnFriendStatusNotif", &UABPresence::execSetOnFriendStatusNotif },
		{ "SetPresenceStatus", &UABPresence::execSetPresenceStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABPresence);
UClass* Z_Construct_UClass_UABPresence_NoRegister()
{
	return UABPresence::StaticClass();
}
struct Z_Construct_UClass_UABPresence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABPresence.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABPresence.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABPresence_BulkGetUserPresence, "BulkGetUserPresence" }, // 2122347694
		{ &Z_Construct_UFunction_UABPresence_BulkGetUserPresenceV2, "BulkGetUserPresenceV2" }, // 2764025212
		{ &Z_Construct_UFunction_UABPresence_GetAllFriendsStatus, "GetAllFriendsStatus" }, // 1036326815
		{ &Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif, "SetOnFriendStatusNotif" }, // 2306389622
		{ &Z_Construct_UFunction_UABPresence_SetPresenceStatus, "SetPresenceStatus" }, // 1513856684
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABPresence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABPresence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABPresence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABPresence_Statics::ClassParams = {
	&UABPresence::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABPresence_Statics::Class_MetaDataParams), Z_Construct_UClass_UABPresence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABPresence()
{
	if (!Z_Registration_Info_UClass_UABPresence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABPresence.OuterSingleton, Z_Construct_UClass_UABPresence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABPresence.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABPresence>()
{
	return UABPresence::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABPresence);
UABPresence::~UABPresence() {}
// End Class UABPresence

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABPresence, UABPresence::StaticClass, TEXT("UABPresence"), &Z_Registration_Info_UClass_UABPresence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABPresence), 800416426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_886342151(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

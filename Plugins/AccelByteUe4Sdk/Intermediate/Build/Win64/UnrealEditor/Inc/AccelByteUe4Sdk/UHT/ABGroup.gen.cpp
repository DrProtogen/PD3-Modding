// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABGroup.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsCreateGroupRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGetGroupListRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGetGroupMembersListByGroupIdRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGroupUpdatable.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsLimitOffsetRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUpdateCustomRulesRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUpdateGroupCustomAttributesRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUpdateGroupPredefinedRuleRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUpdateGroupRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUserIdWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGroup() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABGroup();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABGroup_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAllowedAction();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_AcceptGroupInvitationSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_AcceptGroupJoinRequestSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_AssignMemberRoleSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_CanceGroupInviteRequestSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_CancelJoinGroupRequestSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_CreateGroupSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DeleteGroupPredefinedRuleSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DeleteGroupSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DeleteMemberRoleSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupInvitationRequestsSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupJoinRequestsSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupMembersListByGroupIdSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupsByGroupIdsSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetMemberRolesSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetMyJoinedGroupInfoSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetMyJoinGroupRequestSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetUserGroupInfoByUserIdSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetUserGroupInfoSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_InviteUserToGroupSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_JoinGroupSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_KickGroupMemberSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_LeaveGroupSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_RejectGroupInvitationSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_RejectGroupJoinRequestSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_SearchGroupsSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupCustomAttributesSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupCustomRuleSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupPredefinedRuleSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupSuccess__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCreateGroupRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetGroupListRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatable();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLimitOffsetRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateCustomRulesRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserIdWrapper();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABGroup Function AcceptGroupInvitation
struct Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics
{
	struct ABGroup_eventAcceptGroupInvitation_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptGroupInvitation_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptGroupInvitation_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_AcceptGroupInvitationSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3291083574
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptGroupInvitation_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "AcceptGroupInvitation", nullptr, nullptr, Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::ABGroup_eventAcceptGroupInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::ABGroup_eventAcceptGroupInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_AcceptGroupInvitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_AcceptGroupInvitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execAcceptGroupInvitation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AcceptGroupInvitation(Z_Param_GroupId,FAcceptGroupInvitationSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function AcceptGroupInvitation

// Begin Class UABGroup Function AcceptGroupJoinRequest
struct Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics
{
	struct ABGroup_eventAcceptGroupJoinRequest_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
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
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptGroupJoinRequest_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptGroupJoinRequest_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_AcceptGroupJoinRequestSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 758230251
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptGroupJoinRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "AcceptGroupJoinRequest", nullptr, nullptr, Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::ABGroup_eventAcceptGroupJoinRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::ABGroup_eventAcceptGroupJoinRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execAcceptGroupJoinRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AcceptGroupJoinRequest(Z_Param_UserId,FAcceptGroupJoinRequestSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function AcceptGroupJoinRequest

// Begin Class UABGroup Function AcceptV2GroupInvitation
struct Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics
{
	struct ABGroup_eventAcceptV2GroupInvitation_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptV2GroupInvitation_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptV2GroupInvitation_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_AcceptGroupInvitationSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3291083574
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptV2GroupInvitation_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "AcceptV2GroupInvitation", nullptr, nullptr, Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::ABGroup_eventAcceptV2GroupInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::ABGroup_eventAcceptV2GroupInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execAcceptV2GroupInvitation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AcceptV2GroupInvitation(Z_Param_GroupId,FAcceptGroupInvitationSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function AcceptV2GroupInvitation

// Begin Class UABGroup Function AcceptV2GroupJoinRequest
struct Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics
{
	struct ABGroup_eventAcceptV2GroupJoinRequest_Parms
	{
		FString UserId;
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptV2GroupJoinRequest_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptV2GroupJoinRequest_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptV2GroupJoinRequest_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_AcceptGroupJoinRequestSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 758230251
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAcceptV2GroupJoinRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "AcceptV2GroupJoinRequest", nullptr, nullptr, Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::ABGroup_eventAcceptV2GroupJoinRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::ABGroup_eventAcceptV2GroupJoinRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execAcceptV2GroupJoinRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AcceptV2GroupJoinRequest(Z_Param_UserId,Z_Param_GroupId,FAcceptGroupJoinRequestSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function AcceptV2GroupJoinRequest

// Begin Class UABGroup Function AssignMemberRole
struct Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics
{
	struct ABGroup_eventAssignMemberRole_Parms
	{
		FString MemberRoleId;
		FAccelByteModelsUserIdWrapper RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAssignMemberRole_Parms, MemberRoleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberRoleId_MetaData), NewProp_MemberRoleId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAssignMemberRole_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUserIdWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1221995070
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAssignMemberRole_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_AssignMemberRoleSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 483909481
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAssignMemberRole_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::NewProp_MemberRoleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "AssignMemberRole", nullptr, nullptr, Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::ABGroup_eventAssignMemberRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::ABGroup_eventAssignMemberRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_AssignMemberRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_AssignMemberRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execAssignMemberRole)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MemberRoleId);
	P_GET_STRUCT_REF(FAccelByteModelsUserIdWrapper,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignMemberRole(Z_Param_MemberRoleId,Z_Param_Out_RequestContent,FAssignMemberRoleSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function AssignMemberRole

// Begin Class UABGroup Function AssignV2MemberRole
struct Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics
{
	struct ABGroup_eventAssignV2MemberRole_Parms
	{
		FString MemberRoleId;
		FString GroupId;
		FAccelByteModelsUserIdWrapper RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAssignV2MemberRole_Parms, MemberRoleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberRoleId_MetaData), NewProp_MemberRoleId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAssignV2MemberRole_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAssignV2MemberRole_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUserIdWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1221995070
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAssignV2MemberRole_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_AssignMemberRoleSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 483909481
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventAssignV2MemberRole_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::NewProp_MemberRoleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "AssignV2MemberRole", nullptr, nullptr, Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::ABGroup_eventAssignV2MemberRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::ABGroup_eventAssignV2MemberRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_AssignV2MemberRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_AssignV2MemberRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execAssignV2MemberRole)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MemberRoleId);
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsUserIdWrapper,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignV2MemberRole(Z_Param_MemberRoleId,Z_Param_GroupId,Z_Param_Out_RequestContent,FAssignMemberRoleSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function AssignV2MemberRole

// Begin Class UABGroup Function CancelGroupMemberInvitation
struct Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics
{
	struct ABGroup_eventCancelGroupMemberInvitation_Parms
	{
		FString UserId;
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCancelGroupMemberInvitation_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCancelGroupMemberInvitation_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCancelGroupMemberInvitation_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_CanceGroupInviteRequestSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1531990669
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCancelGroupMemberInvitation_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "CancelGroupMemberInvitation", nullptr, nullptr, Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::ABGroup_eventCancelGroupMemberInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::ABGroup_eventCancelGroupMemberInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execCancelGroupMemberInvitation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelGroupMemberInvitation(Z_Param_UserId,Z_Param_GroupId,FCanceGroupInviteRequestSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function CancelGroupMemberInvitation

// Begin Class UABGroup Function CancelJoinGroupRequest
struct Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics
{
	struct ABGroup_eventCancelJoinGroupRequest_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCancelJoinGroupRequest_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCancelJoinGroupRequest_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_CancelJoinGroupRequestSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3214821754
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCancelJoinGroupRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "CancelJoinGroupRequest", nullptr, nullptr, Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::ABGroup_eventCancelJoinGroupRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::ABGroup_eventCancelJoinGroupRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execCancelJoinGroupRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelJoinGroupRequest(Z_Param_GroupId,FCancelJoinGroupRequestSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function CancelJoinGroupRequest

// Begin Class UABGroup Function CreateGroup
struct Z_Construct_UFunction_UABGroup_CreateGroup_Statics
{
	struct ABGroup_eventCreateGroup_Parms
	{
		FAccelByteModelsCreateGroupRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_CreateGroup_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCreateGroup_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsCreateGroupRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 3004343111
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_CreateGroup_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCreateGroup_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_CreateGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2479386649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_CreateGroup_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCreateGroup_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_CreateGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CreateGroup_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CreateGroup_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CreateGroup_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CreateGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_CreateGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "CreateGroup", nullptr, nullptr, Z_Construct_UFunction_UABGroup_CreateGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CreateGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_CreateGroup_Statics::ABGroup_eventCreateGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CreateGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_CreateGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_CreateGroup_Statics::ABGroup_eventCreateGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_CreateGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_CreateGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execCreateGroup)
{
	P_GET_STRUCT_REF(FAccelByteModelsCreateGroupRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGroup(Z_Param_Out_RequestContent,FCreateGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function CreateGroup

// Begin Class UABGroup Function CreateV2Group
struct Z_Construct_UFunction_UABGroup_CreateV2Group_Statics
{
	struct ABGroup_eventCreateV2Group_Parms
	{
		FAccelByteModelsCreateGroupRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCreateV2Group_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsCreateGroupRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 3004343111
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCreateV2Group_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_CreateGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2479386649
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventCreateV2Group_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "CreateV2Group", nullptr, nullptr, Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::ABGroup_eventCreateV2Group_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::ABGroup_eventCreateV2Group_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_CreateV2Group()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_CreateV2Group_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execCreateV2Group)
{
	P_GET_STRUCT_REF(FAccelByteModelsCreateGroupRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateV2Group(Z_Param_Out_RequestContent,FCreateGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function CreateV2Group

// Begin Class UABGroup Function DeleteGroup
struct Z_Construct_UFunction_UABGroup_DeleteGroup_Statics
{
	struct ABGroup_eventDeleteGroup_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteGroup_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteGroup_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DeleteGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3087230423
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteGroup_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "DeleteGroup", nullptr, nullptr, Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::ABGroup_eventDeleteGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::ABGroup_eventDeleteGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_DeleteGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_DeleteGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execDeleteGroup)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteGroup(Z_Param_GroupId,FDeleteGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function DeleteGroup

// Begin Class UABGroup Function DeleteGroupPredefinedRule
struct Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics
{
	struct ABGroup_eventDeleteGroupPredefinedRule_Parms
	{
		FString GroupId;
		EAccelByteAllowedAction AllowedAction;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedAction;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteGroupPredefinedRule_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::NewProp_AllowedAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::NewProp_AllowedAction = { "AllowedAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteGroupPredefinedRule_Parms, AllowedAction), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAllowedAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedAction_MetaData), NewProp_AllowedAction_MetaData) }; // 489475508
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteGroupPredefinedRule_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DeleteGroupPredefinedRuleSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 20712494
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteGroupPredefinedRule_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::NewProp_AllowedAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::NewProp_AllowedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "DeleteGroupPredefinedRule", nullptr, nullptr, Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::ABGroup_eventDeleteGroupPredefinedRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::ABGroup_eventDeleteGroupPredefinedRule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execDeleteGroupPredefinedRule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_ENUM_REF(EAccelByteAllowedAction,Z_Param_Out_AllowedAction);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteGroupPredefinedRule(Z_Param_GroupId,(EAccelByteAllowedAction&)(Z_Param_Out_AllowedAction),FDeleteGroupPredefinedRuleSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function DeleteGroupPredefinedRule

// Begin Class UABGroup Function DeleteMemberRole
struct Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics
{
	struct ABGroup_eventDeleteMemberRole_Parms
	{
		FString MemberRoleId;
		FAccelByteModelsUserIdWrapper RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteMemberRole_Parms, MemberRoleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberRoleId_MetaData), NewProp_MemberRoleId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteMemberRole_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUserIdWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1221995070
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteMemberRole_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DeleteMemberRoleSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3414016221
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteMemberRole_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::NewProp_MemberRoleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "DeleteMemberRole", nullptr, nullptr, Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::ABGroup_eventDeleteMemberRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::ABGroup_eventDeleteMemberRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_DeleteMemberRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_DeleteMemberRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execDeleteMemberRole)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MemberRoleId);
	P_GET_STRUCT_REF(FAccelByteModelsUserIdWrapper,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteMemberRole(Z_Param_MemberRoleId,Z_Param_Out_RequestContent,FDeleteMemberRoleSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function DeleteMemberRole

// Begin Class UABGroup Function DeleteV2Group
struct Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics
{
	struct ABGroup_eventDeleteV2Group_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2Group_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2Group_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DeleteGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3087230423
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2Group_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "DeleteV2Group", nullptr, nullptr, Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::ABGroup_eventDeleteV2Group_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::ABGroup_eventDeleteV2Group_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_DeleteV2Group()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_DeleteV2Group_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execDeleteV2Group)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteV2Group(Z_Param_GroupId,FDeleteGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function DeleteV2Group

// Begin Class UABGroup Function DeleteV2GroupPredefinedRule
struct Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics
{
	struct ABGroup_eventDeleteV2GroupPredefinedRule_Parms
	{
		FString GroupId;
		EAccelByteAllowedAction AllowedAction;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedAction;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2GroupPredefinedRule_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::NewProp_AllowedAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::NewProp_AllowedAction = { "AllowedAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2GroupPredefinedRule_Parms, AllowedAction), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAllowedAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedAction_MetaData), NewProp_AllowedAction_MetaData) }; // 489475508
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2GroupPredefinedRule_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DeleteGroupPredefinedRuleSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 20712494
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2GroupPredefinedRule_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::NewProp_AllowedAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::NewProp_AllowedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "DeleteV2GroupPredefinedRule", nullptr, nullptr, Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::ABGroup_eventDeleteV2GroupPredefinedRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::ABGroup_eventDeleteV2GroupPredefinedRule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execDeleteV2GroupPredefinedRule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_ENUM_REF(EAccelByteAllowedAction,Z_Param_Out_AllowedAction);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteV2GroupPredefinedRule(Z_Param_GroupId,(EAccelByteAllowedAction&)(Z_Param_Out_AllowedAction),FDeleteGroupPredefinedRuleSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function DeleteV2GroupPredefinedRule

// Begin Class UABGroup Function DeleteV2MemberRole
struct Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics
{
	struct ABGroup_eventDeleteV2MemberRole_Parms
	{
		FString MemberRoleId;
		FString GroupId;
		FAccelByteModelsUserIdWrapper RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2MemberRole_Parms, MemberRoleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberRoleId_MetaData), NewProp_MemberRoleId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2MemberRole_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2MemberRole_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUserIdWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1221995070
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2MemberRole_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DeleteMemberRoleSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3414016221
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventDeleteV2MemberRole_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::NewProp_MemberRoleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "DeleteV2MemberRole", nullptr, nullptr, Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::ABGroup_eventDeleteV2MemberRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::ABGroup_eventDeleteV2MemberRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_DeleteV2MemberRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_DeleteV2MemberRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execDeleteV2MemberRole)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MemberRoleId);
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsUserIdWrapper,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteV2MemberRole(Z_Param_MemberRoleId,Z_Param_GroupId,Z_Param_Out_RequestContent,FDeleteMemberRoleSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function DeleteV2MemberRole

// Begin Class UABGroup Function GetAllMemberRoles
struct Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics
{
	struct ABGroup_eventGetAllMemberRoles_Parms
	{
		FAccelByteModelsLimitOffsetRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetAllMemberRoles_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsLimitOffsetRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1094253991
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetAllMemberRoles_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetMemberRolesSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 433879941
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetAllMemberRoles_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetAllMemberRoles", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::ABGroup_eventGetAllMemberRoles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::ABGroup_eventGetAllMemberRoles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetAllMemberRoles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetAllMemberRoles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetAllMemberRoles)
{
	P_GET_STRUCT_REF(FAccelByteModelsLimitOffsetRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllMemberRoles(Z_Param_Out_RequestContent,FGetMemberRolesSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetAllMemberRoles

// Begin Class UABGroup Function GetGroup
struct Z_Construct_UFunction_UABGroup_GetGroup_Statics
{
	struct ABGroup_eventGetGroup_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_GetGroup_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroup_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroup_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroup_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3727533431
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroup_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroup_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroup_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroup_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroup_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetGroup", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetGroup_Statics::ABGroup_eventGetGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetGroup_Statics::ABGroup_eventGetGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetGroup)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGroup(Z_Param_GroupId,FGetGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetGroup

// Begin Class UABGroup Function GetGroupInviteRequestList
struct Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics
{
	struct ABGroup_eventGetGroupInviteRequestList_Parms
	{
		FString GroupId;
		FAccelByteModelsLimitOffsetRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupInviteRequestList_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupInviteRequestList_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsLimitOffsetRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1094253991
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupInviteRequestList_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupInvitationRequestsSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1608680745
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupInviteRequestList_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetGroupInviteRequestList", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::ABGroup_eventGetGroupInviteRequestList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::ABGroup_eventGetGroupInviteRequestList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetGroupInviteRequestList)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsLimitOffsetRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGroupInviteRequestList(Z_Param_GroupId,Z_Param_Out_RequestContent,FGetGroupInvitationRequestsSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetGroupInviteRequestList

// Begin Class UABGroup Function GetGroupJoinRequestList
struct Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics
{
	struct ABGroup_eventGetGroupJoinRequestList_Parms
	{
		FString GroupId;
		FAccelByteModelsLimitOffsetRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupJoinRequestList_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupJoinRequestList_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsLimitOffsetRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1094253991
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupJoinRequestList_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupJoinRequestsSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3895796163
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupJoinRequestList_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetGroupJoinRequestList", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::ABGroup_eventGetGroupJoinRequestList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::ABGroup_eventGetGroupJoinRequestList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetGroupJoinRequestList)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsLimitOffsetRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGroupJoinRequestList(Z_Param_GroupId,Z_Param_Out_RequestContent,FGetGroupJoinRequestsSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetGroupJoinRequestList

// Begin Class UABGroup Function GetGroupJoinRequests
struct Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics
{
	struct ABGroup_eventGetGroupJoinRequests_Parms
	{
		FString GroupId;
		FAccelByteModelsLimitOffsetRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupJoinRequests_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupJoinRequests_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsLimitOffsetRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1094253991
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupJoinRequests_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupJoinRequestsSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3895796163
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupJoinRequests_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetGroupJoinRequests", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::ABGroup_eventGetGroupJoinRequests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::ABGroup_eventGetGroupJoinRequests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetGroupJoinRequests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetGroupJoinRequests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetGroupJoinRequests)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsLimitOffsetRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGroupJoinRequests(Z_Param_GroupId,Z_Param_Out_RequestContent,FGetGroupJoinRequestsSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetGroupJoinRequests

// Begin Class UABGroup Function GetGroupList
struct Z_Construct_UFunction_UABGroup_GetGroupList_Statics
{
	struct ABGroup_eventGetGroupList_Parms
	{
		FAccelByteModelsGetGroupListRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_GetGroupList_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupList_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsGetGroupListRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 3943007684
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupList_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupList_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_SearchGroupsSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 313153593
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupList_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupList_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetGroupList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupList_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupList_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupList_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetGroupList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetGroupList", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetGroupList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetGroupList_Statics::ABGroup_eventGetGroupList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetGroupList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetGroupList_Statics::ABGroup_eventGetGroupList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetGroupList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetGroupList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetGroupList)
{
	P_GET_STRUCT_REF(FAccelByteModelsGetGroupListRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGroupList(Z_Param_Out_RequestContent,FSearchGroupsSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetGroupList

// Begin Class UABGroup Function GetGroupMembersListByGroupId
struct Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics
{
	struct ABGroup_eventGetGroupMembersListByGroupId_Parms
	{
		FString GroupId;
		FAccelByteModelsGetGroupMembersListByGroupIdRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupMembersListByGroupId_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupMembersListByGroupId_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 2557729609
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupMembersListByGroupId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupMembersListByGroupIdSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1751465027
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupMembersListByGroupId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetGroupMembersListByGroupId", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::ABGroup_eventGetGroupMembersListByGroupId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::ABGroup_eventGetGroupMembersListByGroupId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetGroupMembersListByGroupId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsGetGroupMembersListByGroupIdRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGroupMembersListByGroupId(Z_Param_GroupId,Z_Param_Out_RequestContent,FGetGroupMembersListByGroupIdSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetGroupMembersListByGroupId

// Begin Class UABGroup Function GetGroupsByGroupIds
struct Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics
{
	struct ABGroup_eventGetGroupsByGroupIds_Parms
	{
		TArray<FString> GroupIds;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupIds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::NewProp_GroupIds_Inner = { "GroupIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::NewProp_GroupIds = { "GroupIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupsByGroupIds_Parms, GroupIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupIds_MetaData), NewProp_GroupIds_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupsByGroupIds_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetGroupsByGroupIdsSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2352913100
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetGroupsByGroupIds_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::NewProp_GroupIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::NewProp_GroupIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetGroupsByGroupIds", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::ABGroup_eventGetGroupsByGroupIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::ABGroup_eventGetGroupsByGroupIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetGroupsByGroupIds)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_GroupIds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGroupsByGroupIds(Z_Param_Out_GroupIds,FGetGroupsByGroupIdsSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetGroupsByGroupIds

// Begin Class UABGroup Function GetMemberRoles
struct Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics
{
	struct ABGroup_eventGetMemberRoles_Parms
	{
		FAccelByteModelsLimitOffsetRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetMemberRoles_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsLimitOffsetRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1094253991
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetMemberRoles_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetMemberRolesSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 433879941
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetMemberRoles_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetMemberRoles", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::ABGroup_eventGetMemberRoles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::ABGroup_eventGetMemberRoles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetMemberRoles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetMemberRoles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetMemberRoles)
{
	P_GET_STRUCT_REF(FAccelByteModelsLimitOffsetRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMemberRoles(Z_Param_Out_RequestContent,FGetMemberRolesSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetMemberRoles

// Begin Class UABGroup Function GetMyJoinedGroupInfo
struct Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics
{
	struct ABGroup_eventGetMyJoinedGroupInfo_Parms
	{
		FAccelByteModelsLimitOffsetRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetMyJoinedGroupInfo_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsLimitOffsetRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1094253991
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetMyJoinedGroupInfo_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetMyJoinedGroupInfoSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1043206923
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetMyJoinedGroupInfo_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetMyJoinedGroupInfo", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::ABGroup_eventGetMyJoinedGroupInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::ABGroup_eventGetMyJoinedGroupInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetMyJoinedGroupInfo)
{
	P_GET_STRUCT_REF(FAccelByteModelsLimitOffsetRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMyJoinedGroupInfo(Z_Param_Out_RequestContent,FGetMyJoinedGroupInfoSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetMyJoinedGroupInfo

// Begin Class UABGroup Function GetMyJoinGroupRequest
struct Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics
{
	struct ABGroup_eventGetMyJoinGroupRequest_Parms
	{
		FAccelByteModelsLimitOffsetRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetMyJoinGroupRequest_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsLimitOffsetRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1094253991
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetMyJoinGroupRequest_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetMyJoinGroupRequestSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3901779343
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetMyJoinGroupRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetMyJoinGroupRequest", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::ABGroup_eventGetMyJoinGroupRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::ABGroup_eventGetMyJoinGroupRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetMyJoinGroupRequest)
{
	P_GET_STRUCT_REF(FAccelByteModelsLimitOffsetRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMyJoinGroupRequest(Z_Param_Out_RequestContent,FGetMyJoinGroupRequestSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetMyJoinGroupRequest

// Begin Class UABGroup Function GetUserGroupInfoByUserId
struct Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics
{
	struct ABGroup_eventGetUserGroupInfoByUserId_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
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
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetUserGroupInfoByUserId_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetUserGroupInfoByUserId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetUserGroupInfoByUserIdSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4196532490
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetUserGroupInfoByUserId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetUserGroupInfoByUserId", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::ABGroup_eventGetUserGroupInfoByUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::ABGroup_eventGetUserGroupInfoByUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetUserGroupInfoByUserId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserGroupInfoByUserId(Z_Param_UserId,FGetUserGroupInfoByUserIdSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetUserGroupInfoByUserId

// Begin Class UABGroup Function GetUserGroupStatusInfo
struct Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics
{
	struct ABGroup_eventGetUserGroupStatusInfo_Parms
	{
		FString UserId;
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetUserGroupStatusInfo_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetUserGroupStatusInfo_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetUserGroupStatusInfo_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_GetUserGroupInfoSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 865244975
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventGetUserGroupStatusInfo_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "GetUserGroupStatusInfo", nullptr, nullptr, Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::ABGroup_eventGetUserGroupStatusInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::ABGroup_eventGetUserGroupStatusInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execGetUserGroupStatusInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserGroupStatusInfo(Z_Param_UserId,Z_Param_GroupId,FGetUserGroupInfoSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function GetUserGroupStatusInfo

// Begin Class UABGroup Function InviteUserToGroup
struct Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics
{
	struct ABGroup_eventInviteUserToGroup_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
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
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventInviteUserToGroup_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventInviteUserToGroup_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_InviteUserToGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1605868563
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventInviteUserToGroup_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "InviteUserToGroup", nullptr, nullptr, Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::ABGroup_eventInviteUserToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::ABGroup_eventInviteUserToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_InviteUserToGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_InviteUserToGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execInviteUserToGroup)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InviteUserToGroup(Z_Param_UserId,FInviteUserToGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function InviteUserToGroup

// Begin Class UABGroup Function InviteUserToV2Group
struct Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics
{
	struct ABGroup_eventInviteUserToV2Group_Parms
	{
		FString UserId;
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventInviteUserToV2Group_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventInviteUserToV2Group_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventInviteUserToV2Group_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_InviteUserToGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1605868563
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventInviteUserToV2Group_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "InviteUserToV2Group", nullptr, nullptr, Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::ABGroup_eventInviteUserToV2Group_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::ABGroup_eventInviteUserToV2Group_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_InviteUserToV2Group()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_InviteUserToV2Group_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execInviteUserToV2Group)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InviteUserToV2Group(Z_Param_UserId,Z_Param_GroupId,FInviteUserToGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function InviteUserToV2Group

// Begin Class UABGroup Function JoinGroup
struct Z_Construct_UFunction_UABGroup_JoinGroup_Statics
{
	struct ABGroup_eventJoinGroup_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_JoinGroup_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventJoinGroup_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_JoinGroup_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventJoinGroup_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_JoinGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1989678432
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_JoinGroup_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventJoinGroup_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_JoinGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_JoinGroup_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_JoinGroup_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_JoinGroup_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_JoinGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_JoinGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "JoinGroup", nullptr, nullptr, Z_Construct_UFunction_UABGroup_JoinGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_JoinGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_JoinGroup_Statics::ABGroup_eventJoinGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_JoinGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_JoinGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_JoinGroup_Statics::ABGroup_eventJoinGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_JoinGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_JoinGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execJoinGroup)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinGroup(Z_Param_GroupId,FJoinGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function JoinGroup

// Begin Class UABGroup Function JoinV2Group
struct Z_Construct_UFunction_UABGroup_JoinV2Group_Statics
{
	struct ABGroup_eventJoinV2Group_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventJoinV2Group_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventJoinV2Group_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_JoinGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1989678432
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventJoinV2Group_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "JoinV2Group", nullptr, nullptr, Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::ABGroup_eventJoinV2Group_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::ABGroup_eventJoinV2Group_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_JoinV2Group()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_JoinV2Group_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execJoinV2Group)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinV2Group(Z_Param_GroupId,FJoinGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function JoinV2Group

// Begin Class UABGroup Function KickGroupMember
struct Z_Construct_UFunction_UABGroup_KickGroupMember_Statics
{
	struct ABGroup_eventKickGroupMember_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
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
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventKickGroupMember_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventKickGroupMember_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_KickGroupMemberSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3795563951
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventKickGroupMember_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "KickGroupMember", nullptr, nullptr, Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::ABGroup_eventKickGroupMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::ABGroup_eventKickGroupMember_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_KickGroupMember()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_KickGroupMember_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execKickGroupMember)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->KickGroupMember(Z_Param_UserId,FKickGroupMemberSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function KickGroupMember

// Begin Class UABGroup Function KickV2GroupMember
struct Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics
{
	struct ABGroup_eventKickV2GroupMember_Parms
	{
		FString UserId;
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventKickV2GroupMember_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventKickV2GroupMember_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventKickV2GroupMember_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_KickGroupMemberSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3795563951
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventKickV2GroupMember_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "KickV2GroupMember", nullptr, nullptr, Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::ABGroup_eventKickV2GroupMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::ABGroup_eventKickV2GroupMember_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_KickV2GroupMember()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_KickV2GroupMember_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execKickV2GroupMember)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->KickV2GroupMember(Z_Param_UserId,Z_Param_GroupId,FKickGroupMemberSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function KickV2GroupMember

// Begin Class UABGroup Function LeaveGroup
struct Z_Construct_UFunction_UABGroup_LeaveGroup_Statics
{
	struct ABGroup_eventLeaveGroup_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventLeaveGroup_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_LeaveGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 633092809
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventLeaveGroup_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "LeaveGroup", nullptr, nullptr, Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::ABGroup_eventLeaveGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::ABGroup_eventLeaveGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_LeaveGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_LeaveGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execLeaveGroup)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LeaveGroup(FLeaveGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function LeaveGroup

// Begin Class UABGroup Function LeaveV2Group
struct Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics
{
	struct ABGroup_eventLeaveV2Group_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventLeaveV2Group_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventLeaveV2Group_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_LeaveGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 633092809
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventLeaveV2Group_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "LeaveV2Group", nullptr, nullptr, Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::ABGroup_eventLeaveV2Group_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::ABGroup_eventLeaveV2Group_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_LeaveV2Group()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_LeaveV2Group_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execLeaveV2Group)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LeaveV2Group(Z_Param_GroupId,FLeaveGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function LeaveV2Group

// Begin Class UABGroup Function RejectGroupInvitation
struct Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics
{
	struct ABGroup_eventRejectGroupInvitation_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectGroupInvitation_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectGroupInvitation_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_RejectGroupInvitationSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4260235329
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectGroupInvitation_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "RejectGroupInvitation", nullptr, nullptr, Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::ABGroup_eventRejectGroupInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::ABGroup_eventRejectGroupInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_RejectGroupInvitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_RejectGroupInvitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execRejectGroupInvitation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RejectGroupInvitation(Z_Param_GroupId,FRejectGroupInvitationSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function RejectGroupInvitation

// Begin Class UABGroup Function RejectGroupJoinRequest
struct Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics
{
	struct ABGroup_eventRejectGroupJoinRequest_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
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
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectGroupJoinRequest_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectGroupJoinRequest_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_RejectGroupJoinRequestSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1007150608
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectGroupJoinRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "RejectGroupJoinRequest", nullptr, nullptr, Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::ABGroup_eventRejectGroupJoinRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::ABGroup_eventRejectGroupJoinRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execRejectGroupJoinRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RejectGroupJoinRequest(Z_Param_UserId,FRejectGroupJoinRequestSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function RejectGroupJoinRequest

// Begin Class UABGroup Function RejectV2GroupInvitation
struct Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics
{
	struct ABGroup_eventRejectV2GroupInvitation_Parms
	{
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectV2GroupInvitation_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectV2GroupInvitation_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_RejectGroupInvitationSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4260235329
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectV2GroupInvitation_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "RejectV2GroupInvitation", nullptr, nullptr, Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::ABGroup_eventRejectV2GroupInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::ABGroup_eventRejectV2GroupInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execRejectV2GroupInvitation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RejectV2GroupInvitation(Z_Param_GroupId,FRejectGroupInvitationSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function RejectV2GroupInvitation

// Begin Class UABGroup Function RejectV2GroupJoinRequest
struct Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics
{
	struct ABGroup_eventRejectV2GroupJoinRequest_Parms
	{
		FString UserId;
		FString GroupId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectV2GroupJoinRequest_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectV2GroupJoinRequest_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectV2GroupJoinRequest_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_RejectGroupJoinRequestSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1007150608
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventRejectV2GroupJoinRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "RejectV2GroupJoinRequest", nullptr, nullptr, Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::ABGroup_eventRejectV2GroupJoinRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::ABGroup_eventRejectV2GroupJoinRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execRejectV2GroupJoinRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RejectV2GroupJoinRequest(Z_Param_UserId,Z_Param_GroupId,FRejectGroupJoinRequestSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function RejectV2GroupJoinRequest

// Begin Class UABGroup Function UpdateGroup
struct Z_Construct_UFunction_UABGroup_UpdateGroup_Statics
{
	struct ABGroup_eventUpdateGroup_Parms
	{
		FString GroupId;
		bool bCompletelyReplace;
		FAccelByteModelsGroupUpdatable RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompletelyReplace_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static void NewProp_bCompletelyReplace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompletelyReplace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroup_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
void Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_bCompletelyReplace_SetBit(void* Obj)
{
	((ABGroup_eventUpdateGroup_Parms*)Obj)->bCompletelyReplace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_bCompletelyReplace = { "bCompletelyReplace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABGroup_eventUpdateGroup_Parms), &Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_bCompletelyReplace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompletelyReplace_MetaData), NewProp_bCompletelyReplace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroup_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsGroupUpdatable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 3778784191
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroup_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3401430751
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroup_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_bCompletelyReplace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "UpdateGroup", nullptr, nullptr, Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::ABGroup_eventUpdateGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::ABGroup_eventUpdateGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_UpdateGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_UpdateGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execUpdateGroup)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_UBOOL(Z_Param_bCompletelyReplace);
	P_GET_STRUCT_REF(FAccelByteModelsGroupUpdatable,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGroup(Z_Param_GroupId,Z_Param_bCompletelyReplace,Z_Param_Out_RequestContent,FUpdateGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function UpdateGroup

// Begin Class UABGroup Function UpdateGroupCustomAttributes
struct Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics
{
	struct ABGroup_eventUpdateGroupCustomAttributes_Parms
	{
		FString GroupId;
		FAccelByteModelsUpdateGroupCustomAttributesRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupCustomAttributes_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupCustomAttributes_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 531232687
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupCustomAttributes_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupCustomAttributesSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3113510102
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupCustomAttributes_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "UpdateGroupCustomAttributes", nullptr, nullptr, Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::ABGroup_eventUpdateGroupCustomAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::ABGroup_eventUpdateGroupCustomAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execUpdateGroupCustomAttributes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsUpdateGroupCustomAttributesRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGroupCustomAttributes(Z_Param_GroupId,Z_Param_Out_RequestContent,FUpdateGroupCustomAttributesSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function UpdateGroupCustomAttributes

// Begin Class UABGroup Function UpdateGroupCustomRule
struct Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics
{
	struct ABGroup_eventUpdateGroupCustomRule_Parms
	{
		FString GroupId;
		FAccelByteModelsUpdateCustomRulesRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupCustomRule_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupCustomRule_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUpdateCustomRulesRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 3995504040
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupCustomRule_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupCustomRuleSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2427821529
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupCustomRule_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "UpdateGroupCustomRule", nullptr, nullptr, Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::ABGroup_eventUpdateGroupCustomRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::ABGroup_eventUpdateGroupCustomRule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execUpdateGroupCustomRule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsUpdateCustomRulesRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGroupCustomRule(Z_Param_GroupId,Z_Param_Out_RequestContent,FUpdateGroupCustomRuleSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function UpdateGroupCustomRule

// Begin Class UABGroup Function UpdateGroupPredefinedRule
struct Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics
{
	struct ABGroup_eventUpdateGroupPredefinedRule_Parms
	{
		FString GroupId;
		EAccelByteAllowedAction AllowedAction;
		FAccelByteModelsUpdateGroupPredefinedRuleRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupPredefinedRule_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_AllowedAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_AllowedAction = { "AllowedAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupPredefinedRule_Parms, AllowedAction), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAllowedAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedAction_MetaData), NewProp_AllowedAction_MetaData) }; // 489475508
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupPredefinedRule_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 3935307497
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupPredefinedRule_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupPredefinedRuleSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2174169848
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateGroupPredefinedRule_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_AllowedAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_AllowedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "UpdateGroupPredefinedRule", nullptr, nullptr, Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::ABGroup_eventUpdateGroupPredefinedRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::ABGroup_eventUpdateGroupPredefinedRule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execUpdateGroupPredefinedRule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_ENUM_REF(EAccelByteAllowedAction,Z_Param_Out_AllowedAction);
	P_GET_STRUCT_REF(FAccelByteModelsUpdateGroupPredefinedRuleRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGroupPredefinedRule(Z_Param_GroupId,(EAccelByteAllowedAction&)(Z_Param_Out_AllowedAction),Z_Param_Out_RequestContent,FUpdateGroupPredefinedRuleSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function UpdateGroupPredefinedRule

// Begin Class UABGroup Function UpdateV2Group
struct Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics
{
	struct ABGroup_eventUpdateV2Group_Parms
	{
		FString GroupId;
		FAccelByteModelsUpdateGroupRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2Group_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2Group_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 1998283405
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2Group_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3401430751
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2Group_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "UpdateV2Group", nullptr, nullptr, Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::ABGroup_eventUpdateV2Group_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::ABGroup_eventUpdateV2Group_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_UpdateV2Group()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_UpdateV2Group_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execUpdateV2Group)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsUpdateGroupRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateV2Group(Z_Param_GroupId,Z_Param_Out_RequestContent,FUpdateGroupSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function UpdateV2Group

// Begin Class UABGroup Function UpdateV2GroupCustomAttributes
struct Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics
{
	struct ABGroup_eventUpdateV2GroupCustomAttributes_Parms
	{
		FString GroupId;
		FAccelByteModelsUpdateGroupCustomAttributesRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupCustomAttributes_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupCustomAttributes_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 531232687
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupCustomAttributes_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupCustomAttributesSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3113510102
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupCustomAttributes_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "UpdateV2GroupCustomAttributes", nullptr, nullptr, Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::ABGroup_eventUpdateV2GroupCustomAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::ABGroup_eventUpdateV2GroupCustomAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execUpdateV2GroupCustomAttributes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsUpdateGroupCustomAttributesRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateV2GroupCustomAttributes(Z_Param_GroupId,Z_Param_Out_RequestContent,FUpdateGroupCustomAttributesSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function UpdateV2GroupCustomAttributes

// Begin Class UABGroup Function UpdateV2GroupCustomRule
struct Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics
{
	struct ABGroup_eventUpdateV2GroupCustomRule_Parms
	{
		FString GroupId;
		FAccelByteModelsUpdateCustomRulesRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupCustomRule_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupCustomRule_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUpdateCustomRulesRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 3995504040
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupCustomRule_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupCustomRuleSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2427821529
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupCustomRule_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "UpdateV2GroupCustomRule", nullptr, nullptr, Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::ABGroup_eventUpdateV2GroupCustomRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::ABGroup_eventUpdateV2GroupCustomRule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execUpdateV2GroupCustomRule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_STRUCT_REF(FAccelByteModelsUpdateCustomRulesRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateV2GroupCustomRule(Z_Param_GroupId,Z_Param_Out_RequestContent,FUpdateGroupCustomRuleSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function UpdateV2GroupCustomRule

// Begin Class UABGroup Function UpdateV2GroupPredefinedRule
struct Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics
{
	struct ABGroup_eventUpdateV2GroupPredefinedRule_Parms
	{
		FString GroupId;
		EAccelByteAllowedAction AllowedAction;
		FAccelByteModelsUpdateGroupPredefinedRuleRequest RequestContent;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestContent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestContent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupPredefinedRule_Parms, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_AllowedAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_AllowedAction = { "AllowedAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupPredefinedRule_Parms, AllowedAction), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAllowedAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedAction_MetaData), NewProp_AllowedAction_MetaData) }; // 489475508
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_RequestContent = { "RequestContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupPredefinedRule_Parms, RequestContent), Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestContent_MetaData), NewProp_RequestContent_MetaData) }; // 3935307497
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupPredefinedRule_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_UpdateGroupPredefinedRuleSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2174169848
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGroup_eventUpdateV2GroupPredefinedRule_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_AllowedAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_AllowedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_RequestContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGroup, nullptr, "UpdateV2GroupPredefinedRule", nullptr, nullptr, Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::ABGroup_eventUpdateV2GroupPredefinedRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::ABGroup_eventUpdateV2GroupPredefinedRule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABGroup::execUpdateV2GroupPredefinedRule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
	P_GET_ENUM_REF(EAccelByteAllowedAction,Z_Param_Out_AllowedAction);
	P_GET_STRUCT_REF(FAccelByteModelsUpdateGroupPredefinedRuleRequest,Z_Param_Out_RequestContent);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateV2GroupPredefinedRule(Z_Param_GroupId,(EAccelByteAllowedAction&)(Z_Param_Out_AllowedAction),Z_Param_Out_RequestContent,FUpdateGroupPredefinedRuleSuccess(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABGroup Function UpdateV2GroupPredefinedRule

// Begin Class UABGroup
void UABGroup::StaticRegisterNativesUABGroup()
{
	UClass* Class = UABGroup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptGroupInvitation", &UABGroup::execAcceptGroupInvitation },
		{ "AcceptGroupJoinRequest", &UABGroup::execAcceptGroupJoinRequest },
		{ "AcceptV2GroupInvitation", &UABGroup::execAcceptV2GroupInvitation },
		{ "AcceptV2GroupJoinRequest", &UABGroup::execAcceptV2GroupJoinRequest },
		{ "AssignMemberRole", &UABGroup::execAssignMemberRole },
		{ "AssignV2MemberRole", &UABGroup::execAssignV2MemberRole },
		{ "CancelGroupMemberInvitation", &UABGroup::execCancelGroupMemberInvitation },
		{ "CancelJoinGroupRequest", &UABGroup::execCancelJoinGroupRequest },
		{ "CreateGroup", &UABGroup::execCreateGroup },
		{ "CreateV2Group", &UABGroup::execCreateV2Group },
		{ "DeleteGroup", &UABGroup::execDeleteGroup },
		{ "DeleteGroupPredefinedRule", &UABGroup::execDeleteGroupPredefinedRule },
		{ "DeleteMemberRole", &UABGroup::execDeleteMemberRole },
		{ "DeleteV2Group", &UABGroup::execDeleteV2Group },
		{ "DeleteV2GroupPredefinedRule", &UABGroup::execDeleteV2GroupPredefinedRule },
		{ "DeleteV2MemberRole", &UABGroup::execDeleteV2MemberRole },
		{ "GetAllMemberRoles", &UABGroup::execGetAllMemberRoles },
		{ "GetGroup", &UABGroup::execGetGroup },
		{ "GetGroupInviteRequestList", &UABGroup::execGetGroupInviteRequestList },
		{ "GetGroupJoinRequestList", &UABGroup::execGetGroupJoinRequestList },
		{ "GetGroupJoinRequests", &UABGroup::execGetGroupJoinRequests },
		{ "GetGroupList", &UABGroup::execGetGroupList },
		{ "GetGroupMembersListByGroupId", &UABGroup::execGetGroupMembersListByGroupId },
		{ "GetGroupsByGroupIds", &UABGroup::execGetGroupsByGroupIds },
		{ "GetMemberRoles", &UABGroup::execGetMemberRoles },
		{ "GetMyJoinedGroupInfo", &UABGroup::execGetMyJoinedGroupInfo },
		{ "GetMyJoinGroupRequest", &UABGroup::execGetMyJoinGroupRequest },
		{ "GetUserGroupInfoByUserId", &UABGroup::execGetUserGroupInfoByUserId },
		{ "GetUserGroupStatusInfo", &UABGroup::execGetUserGroupStatusInfo },
		{ "InviteUserToGroup", &UABGroup::execInviteUserToGroup },
		{ "InviteUserToV2Group", &UABGroup::execInviteUserToV2Group },
		{ "JoinGroup", &UABGroup::execJoinGroup },
		{ "JoinV2Group", &UABGroup::execJoinV2Group },
		{ "KickGroupMember", &UABGroup::execKickGroupMember },
		{ "KickV2GroupMember", &UABGroup::execKickV2GroupMember },
		{ "LeaveGroup", &UABGroup::execLeaveGroup },
		{ "LeaveV2Group", &UABGroup::execLeaveV2Group },
		{ "RejectGroupInvitation", &UABGroup::execRejectGroupInvitation },
		{ "RejectGroupJoinRequest", &UABGroup::execRejectGroupJoinRequest },
		{ "RejectV2GroupInvitation", &UABGroup::execRejectV2GroupInvitation },
		{ "RejectV2GroupJoinRequest", &UABGroup::execRejectV2GroupJoinRequest },
		{ "UpdateGroup", &UABGroup::execUpdateGroup },
		{ "UpdateGroupCustomAttributes", &UABGroup::execUpdateGroupCustomAttributes },
		{ "UpdateGroupCustomRule", &UABGroup::execUpdateGroupCustomRule },
		{ "UpdateGroupPredefinedRule", &UABGroup::execUpdateGroupPredefinedRule },
		{ "UpdateV2Group", &UABGroup::execUpdateV2Group },
		{ "UpdateV2GroupCustomAttributes", &UABGroup::execUpdateV2GroupCustomAttributes },
		{ "UpdateV2GroupCustomRule", &UABGroup::execUpdateV2GroupCustomRule },
		{ "UpdateV2GroupPredefinedRule", &UABGroup::execUpdateV2GroupPredefinedRule },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABGroup);
UClass* Z_Construct_UClass_UABGroup_NoRegister()
{
	return UABGroup::StaticClass();
}
struct Z_Construct_UClass_UABGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABGroup.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABGroup_AcceptGroupInvitation, "AcceptGroupInvitation" }, // 110501905
		{ &Z_Construct_UFunction_UABGroup_AcceptGroupJoinRequest, "AcceptGroupJoinRequest" }, // 1785073029
		{ &Z_Construct_UFunction_UABGroup_AcceptV2GroupInvitation, "AcceptV2GroupInvitation" }, // 43423194
		{ &Z_Construct_UFunction_UABGroup_AcceptV2GroupJoinRequest, "AcceptV2GroupJoinRequest" }, // 2072897433
		{ &Z_Construct_UFunction_UABGroup_AssignMemberRole, "AssignMemberRole" }, // 1789801684
		{ &Z_Construct_UFunction_UABGroup_AssignV2MemberRole, "AssignV2MemberRole" }, // 270757223
		{ &Z_Construct_UFunction_UABGroup_CancelGroupMemberInvitation, "CancelGroupMemberInvitation" }, // 3430050639
		{ &Z_Construct_UFunction_UABGroup_CancelJoinGroupRequest, "CancelJoinGroupRequest" }, // 1797712483
		{ &Z_Construct_UFunction_UABGroup_CreateGroup, "CreateGroup" }, // 1072840114
		{ &Z_Construct_UFunction_UABGroup_CreateV2Group, "CreateV2Group" }, // 1038113120
		{ &Z_Construct_UFunction_UABGroup_DeleteGroup, "DeleteGroup" }, // 4294806079
		{ &Z_Construct_UFunction_UABGroup_DeleteGroupPredefinedRule, "DeleteGroupPredefinedRule" }, // 133750964
		{ &Z_Construct_UFunction_UABGroup_DeleteMemberRole, "DeleteMemberRole" }, // 540252855
		{ &Z_Construct_UFunction_UABGroup_DeleteV2Group, "DeleteV2Group" }, // 915497379
		{ &Z_Construct_UFunction_UABGroup_DeleteV2GroupPredefinedRule, "DeleteV2GroupPredefinedRule" }, // 3171951933
		{ &Z_Construct_UFunction_UABGroup_DeleteV2MemberRole, "DeleteV2MemberRole" }, // 2055973358
		{ &Z_Construct_UFunction_UABGroup_GetAllMemberRoles, "GetAllMemberRoles" }, // 2150745035
		{ &Z_Construct_UFunction_UABGroup_GetGroup, "GetGroup" }, // 591389429
		{ &Z_Construct_UFunction_UABGroup_GetGroupInviteRequestList, "GetGroupInviteRequestList" }, // 520497809
		{ &Z_Construct_UFunction_UABGroup_GetGroupJoinRequestList, "GetGroupJoinRequestList" }, // 1131438584
		{ &Z_Construct_UFunction_UABGroup_GetGroupJoinRequests, "GetGroupJoinRequests" }, // 981557830
		{ &Z_Construct_UFunction_UABGroup_GetGroupList, "GetGroupList" }, // 2644288096
		{ &Z_Construct_UFunction_UABGroup_GetGroupMembersListByGroupId, "GetGroupMembersListByGroupId" }, // 3753876311
		{ &Z_Construct_UFunction_UABGroup_GetGroupsByGroupIds, "GetGroupsByGroupIds" }, // 2581978464
		{ &Z_Construct_UFunction_UABGroup_GetMemberRoles, "GetMemberRoles" }, // 921162429
		{ &Z_Construct_UFunction_UABGroup_GetMyJoinedGroupInfo, "GetMyJoinedGroupInfo" }, // 1114059223
		{ &Z_Construct_UFunction_UABGroup_GetMyJoinGroupRequest, "GetMyJoinGroupRequest" }, // 1851926854
		{ &Z_Construct_UFunction_UABGroup_GetUserGroupInfoByUserId, "GetUserGroupInfoByUserId" }, // 2984214066
		{ &Z_Construct_UFunction_UABGroup_GetUserGroupStatusInfo, "GetUserGroupStatusInfo" }, // 3407578043
		{ &Z_Construct_UFunction_UABGroup_InviteUserToGroup, "InviteUserToGroup" }, // 3727099
		{ &Z_Construct_UFunction_UABGroup_InviteUserToV2Group, "InviteUserToV2Group" }, // 1472987729
		{ &Z_Construct_UFunction_UABGroup_JoinGroup, "JoinGroup" }, // 1206595906
		{ &Z_Construct_UFunction_UABGroup_JoinV2Group, "JoinV2Group" }, // 509578127
		{ &Z_Construct_UFunction_UABGroup_KickGroupMember, "KickGroupMember" }, // 1312799061
		{ &Z_Construct_UFunction_UABGroup_KickV2GroupMember, "KickV2GroupMember" }, // 1859917354
		{ &Z_Construct_UFunction_UABGroup_LeaveGroup, "LeaveGroup" }, // 3692687594
		{ &Z_Construct_UFunction_UABGroup_LeaveV2Group, "LeaveV2Group" }, // 1335837224
		{ &Z_Construct_UFunction_UABGroup_RejectGroupInvitation, "RejectGroupInvitation" }, // 3279041848
		{ &Z_Construct_UFunction_UABGroup_RejectGroupJoinRequest, "RejectGroupJoinRequest" }, // 613859968
		{ &Z_Construct_UFunction_UABGroup_RejectV2GroupInvitation, "RejectV2GroupInvitation" }, // 1458990969
		{ &Z_Construct_UFunction_UABGroup_RejectV2GroupJoinRequest, "RejectV2GroupJoinRequest" }, // 1200253350
		{ &Z_Construct_UFunction_UABGroup_UpdateGroup, "UpdateGroup" }, // 1916573957
		{ &Z_Construct_UFunction_UABGroup_UpdateGroupCustomAttributes, "UpdateGroupCustomAttributes" }, // 1931936222
		{ &Z_Construct_UFunction_UABGroup_UpdateGroupCustomRule, "UpdateGroupCustomRule" }, // 2135945572
		{ &Z_Construct_UFunction_UABGroup_UpdateGroupPredefinedRule, "UpdateGroupPredefinedRule" }, // 549264810
		{ &Z_Construct_UFunction_UABGroup_UpdateV2Group, "UpdateV2Group" }, // 230387735
		{ &Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomAttributes, "UpdateV2GroupCustomAttributes" }, // 3636219163
		{ &Z_Construct_UFunction_UABGroup_UpdateV2GroupCustomRule, "UpdateV2GroupCustomRule" }, // 2817509128
		{ &Z_Construct_UFunction_UABGroup_UpdateV2GroupPredefinedRule, "UpdateV2GroupPredefinedRule" }, // 2529252904
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGroup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABGroup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABGroup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABGroup_Statics::ClassParams = {
	&UABGroup::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UABGroup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABGroup()
{
	if (!Z_Registration_Info_UClass_UABGroup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABGroup.OuterSingleton, Z_Construct_UClass_UABGroup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABGroup.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABGroup>()
{
	return UABGroup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABGroup);
UABGroup::~UABGroup() {}
// End Class UABGroup

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABGroup, UABGroup::StaticClass, TEXT("UABGroup"), &Z_Registration_Info_UClass_UABGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABGroup), 2197383927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_19869765(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

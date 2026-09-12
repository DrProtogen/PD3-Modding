// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABGroup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteAllowedAction : uint8;
struct FAccelByteModelsCreateGroupRequest;
struct FAccelByteModelsGetGroupListRequest;
struct FAccelByteModelsGetGroupMembersListByGroupIdRequest;
struct FAccelByteModelsGroupUpdatable;
struct FAccelByteModelsLimitOffsetRequest;
struct FAccelByteModelsUpdateCustomRulesRequest;
struct FAccelByteModelsUpdateGroupCustomAttributesRequest;
struct FAccelByteModelsUpdateGroupPredefinedRuleRequest;
struct FAccelByteModelsUpdateGroupRequest;
struct FAccelByteModelsUserIdWrapper;
#ifdef ACCELBYTEUE4SDK_ABGroup_generated_h
#error "ABGroup.generated.h already included, missing '#pragma once' in ABGroup.h"
#endif
#define ACCELBYTEUE4SDK_ABGroup_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAcceptGroupInvitation); \
	DECLARE_FUNCTION(execAcceptGroupJoinRequest); \
	DECLARE_FUNCTION(execAcceptV2GroupInvitation); \
	DECLARE_FUNCTION(execAcceptV2GroupJoinRequest); \
	DECLARE_FUNCTION(execAssignMemberRole); \
	DECLARE_FUNCTION(execAssignV2MemberRole); \
	DECLARE_FUNCTION(execCancelGroupMemberInvitation); \
	DECLARE_FUNCTION(execCancelJoinGroupRequest); \
	DECLARE_FUNCTION(execCreateGroup); \
	DECLARE_FUNCTION(execCreateV2Group); \
	DECLARE_FUNCTION(execDeleteGroup); \
	DECLARE_FUNCTION(execDeleteGroupPredefinedRule); \
	DECLARE_FUNCTION(execDeleteMemberRole); \
	DECLARE_FUNCTION(execDeleteV2Group); \
	DECLARE_FUNCTION(execDeleteV2GroupPredefinedRule); \
	DECLARE_FUNCTION(execDeleteV2MemberRole); \
	DECLARE_FUNCTION(execGetAllMemberRoles); \
	DECLARE_FUNCTION(execGetGroup); \
	DECLARE_FUNCTION(execGetGroupInviteRequestList); \
	DECLARE_FUNCTION(execGetGroupJoinRequestList); \
	DECLARE_FUNCTION(execGetGroupJoinRequests); \
	DECLARE_FUNCTION(execGetGroupList); \
	DECLARE_FUNCTION(execGetGroupMembersListByGroupId); \
	DECLARE_FUNCTION(execGetGroupsByGroupIds); \
	DECLARE_FUNCTION(execGetMemberRoles); \
	DECLARE_FUNCTION(execGetMyJoinedGroupInfo); \
	DECLARE_FUNCTION(execGetMyJoinGroupRequest); \
	DECLARE_FUNCTION(execGetUserGroupInfoByUserId); \
	DECLARE_FUNCTION(execGetUserGroupStatusInfo); \
	DECLARE_FUNCTION(execInviteUserToGroup); \
	DECLARE_FUNCTION(execInviteUserToV2Group); \
	DECLARE_FUNCTION(execJoinGroup); \
	DECLARE_FUNCTION(execJoinV2Group); \
	DECLARE_FUNCTION(execKickGroupMember); \
	DECLARE_FUNCTION(execKickV2GroupMember); \
	DECLARE_FUNCTION(execLeaveGroup); \
	DECLARE_FUNCTION(execLeaveV2Group); \
	DECLARE_FUNCTION(execRejectGroupInvitation); \
	DECLARE_FUNCTION(execRejectGroupJoinRequest); \
	DECLARE_FUNCTION(execRejectV2GroupInvitation); \
	DECLARE_FUNCTION(execRejectV2GroupJoinRequest); \
	DECLARE_FUNCTION(execUpdateGroup); \
	DECLARE_FUNCTION(execUpdateGroupCustomAttributes); \
	DECLARE_FUNCTION(execUpdateGroupCustomRule); \
	DECLARE_FUNCTION(execUpdateGroupPredefinedRule); \
	DECLARE_FUNCTION(execUpdateV2Group); \
	DECLARE_FUNCTION(execUpdateV2GroupCustomAttributes); \
	DECLARE_FUNCTION(execUpdateV2GroupCustomRule); \
	DECLARE_FUNCTION(execUpdateV2GroupPredefinedRule);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABGroup(); \
	friend struct Z_Construct_UClass_UABGroup_Statics; \
public: \
	DECLARE_CLASS(UABGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABGroup)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABGroup(UABGroup&&); \
	UABGroup(const UABGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABGroup) \
	NO_API virtual ~UABGroup();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_48_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_50_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

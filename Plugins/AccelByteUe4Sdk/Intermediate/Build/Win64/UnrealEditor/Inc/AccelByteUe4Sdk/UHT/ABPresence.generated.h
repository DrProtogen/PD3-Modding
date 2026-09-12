// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABPresence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelBytePresenceStatus;
struct FBulkGetUserPresenceRequest;
#ifdef ACCELBYTEUE4SDK_ABPresence_generated_h
#error "ABPresence.generated.h already included, missing '#pragma once' in ABPresence.h"
#endif
#define ACCELBYTEUE4SDK_ABPresence_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBulkGetUserPresence); \
	DECLARE_FUNCTION(execBulkGetUserPresenceV2); \
	DECLARE_FUNCTION(execGetAllFriendsStatus); \
	DECLARE_FUNCTION(execSetOnFriendStatusNotif); \
	DECLARE_FUNCTION(execSetPresenceStatus);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABPresence(); \
	friend struct Z_Construct_UClass_UABPresence_Statics; \
public: \
	DECLARE_CLASS(UABPresence, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABPresence)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABPresence(UABPresence&&); \
	UABPresence(const UABPresence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABPresence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABPresence); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABPresence) \
	NO_API virtual ~UABPresence();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_13_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABPresence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

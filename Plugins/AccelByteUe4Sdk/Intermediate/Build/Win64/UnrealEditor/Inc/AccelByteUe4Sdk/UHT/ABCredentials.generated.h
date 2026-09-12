// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABCredentials.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESettingsEnvironment : uint8;
struct FAccountUserData;
struct FErrorOAuthInfo;
struct FOauth2Token;
#ifdef ACCELBYTEUE4SDK_ABCredentials_generated_h
#error "ABCredentials.generated.h already included, missing '#pragma once' in ABCredentials.h"
#endif
#define ACCELBYTEUE4SDK_ABCredentials_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForgetAll); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execGetAccountUserData); \
	DECLARE_FUNCTION(execGetAuthToken); \
	DECLARE_FUNCTION(execGetLinkingToken); \
	DECLARE_FUNCTION(execGetNamespace); \
	DECLARE_FUNCTION(execGetPlatformUserId); \
	DECLARE_FUNCTION(execGetRefreshToken); \
	DECLARE_FUNCTION(execGetUserDisplayName); \
	DECLARE_FUNCTION(execGetUserEmailAddress); \
	DECLARE_FUNCTION(execGetUserId); \
	DECLARE_FUNCTION(execIsComply); \
	DECLARE_FUNCTION(execIsSessionValid); \
	DECLARE_FUNCTION(execPollRefreshToken); \
	DECLARE_FUNCTION(execScheduleRefreshToken); \
	DECLARE_FUNCTION(execSetAccountUserData); \
	DECLARE_FUNCTION(execSetAuthToken); \
	DECLARE_FUNCTION(execSetClientCredentials); \
	DECLARE_FUNCTION(execSetErrorOAuth); \
	DECLARE_FUNCTION(execSetUserEmailAddress);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABCredentials(); \
	friend struct Z_Construct_UClass_UABCredentials_Statics; \
public: \
	DECLARE_CLASS(UABCredentials, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABCredentials)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABCredentials(UABCredentials&&); \
	UABCredentials(const UABCredentials&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABCredentials); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCredentials); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABCredentials) \
	NO_API virtual ~UABCredentials();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_10_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_12_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABCredentials>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

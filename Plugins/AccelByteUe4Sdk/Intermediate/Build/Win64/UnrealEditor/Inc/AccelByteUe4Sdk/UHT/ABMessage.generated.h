// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABMessage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSendChannelMessageRequest;
struct FSendPartyMessageRequest;
struct FSendPrivateMessageRequest;
#ifdef ACCELBYTEUE4SDK_ABMessage_generated_h
#error "ABMessage.generated.h already included, missing '#pragma once' in ABMessage.h"
#endif
#define ACCELBYTEUE4SDK_ABMessage_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendChannelMessage); \
	DECLARE_FUNCTION(execSendJoinDefaultChannelChatRequest); \
	DECLARE_FUNCTION(execSendPartyMessage); \
	DECLARE_FUNCTION(execSendPing); \
	DECLARE_FUNCTION(execSendPrivateMessage); \
	DECLARE_FUNCTION(execSetChannelMessageNotifDelegate); \
	DECLARE_FUNCTION(execSetMessageNotifDelegate); \
	DECLARE_FUNCTION(execSetOnPartyChatNotification); \
	DECLARE_FUNCTION(execSetPrivateMessageNotifDelegate);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABMessage(); \
	friend struct Z_Construct_UClass_UABMessage_Statics; \
public: \
	DECLARE_CLASS(UABMessage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABMessage)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABMessage(UABMessage&&); \
	UABMessage(const UABMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABMessage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABMessage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABMessage) \
	NO_API virtual ~UABMessage();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_18_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_20_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

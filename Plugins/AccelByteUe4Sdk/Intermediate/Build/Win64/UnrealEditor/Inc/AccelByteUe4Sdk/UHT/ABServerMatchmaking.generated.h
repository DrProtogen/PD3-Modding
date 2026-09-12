// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerMatchmaking.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMatchmakingResult;
#ifdef ACCELBYTEUE4SDK_ABServerMatchmaking_generated_h
#error "ABServerMatchmaking.generated.h already included, missing '#pragma once' in ABServerMatchmaking.h"
#endif
#define ACCELBYTEUE4SDK_ABServerMatchmaking_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActivateSessionStatusPolling); \
	DECLARE_FUNCTION(execAddUserToSession); \
	DECLARE_FUNCTION(execDeactivateStatusPolling); \
	DECLARE_FUNCTION(execDequeueJoinableSession); \
	DECLARE_FUNCTION(execEnqueueJoinableSession); \
	DECLARE_FUNCTION(execQuerySessionStatus); \
	DECLARE_FUNCTION(execRebalanceMatchmakingBasedOnMMR); \
	DECLARE_FUNCTION(execRemoveUserFromSession);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerMatchmaking(); \
	friend struct Z_Construct_UClass_UABServerMatchmaking_Statics; \
public: \
	DECLARE_CLASS(UABServerMatchmaking, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerMatchmaking)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerMatchmaking(UABServerMatchmaking&&); \
	UABServerMatchmaking(const UABServerMatchmaking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerMatchmaking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerMatchmaking) \
	NO_API virtual ~UABServerMatchmaking();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_10_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_12_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerMatchmaking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerMatchmaking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

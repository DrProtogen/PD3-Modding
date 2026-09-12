// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABMatchmaking.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCancelMatchmakingRequest;
struct FSetReadyConsentRequest;
struct FSetRejectConsentRequest;
struct FStartMatchmakingRequest;
#ifdef ACCELBYTEUE4SDK_ABMatchmaking_generated_h
#error "ABMatchmaking.generated.h already included, missing '#pragma once' in ABMatchmaking.h"
#endif
#define ACCELBYTEUE4SDK_ABMatchmaking_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCancelMatchmaking); \
	DECLARE_FUNCTION(execSetOnDs); \
	DECLARE_FUNCTION(execSetOnMatchmaking); \
	DECLARE_FUNCTION(execSetOnRematchmaking); \
	DECLARE_FUNCTION(execSetOnSetReadyConsent); \
	DECLARE_FUNCTION(execSetOnSetRejectConsent); \
	DECLARE_FUNCTION(execSetReadyConsent); \
	DECLARE_FUNCTION(execSetRejectConsent); \
	DECLARE_FUNCTION(execStartMatchmaking);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABMatchmaking(); \
	friend struct Z_Construct_UClass_UABMatchmaking_Statics; \
public: \
	DECLARE_CLASS(UABMatchmaking, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABMatchmaking)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABMatchmaking(UABMatchmaking&&); \
	UABMatchmaking(const UABMatchmaking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABMatchmaking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABMatchmaking) \
	NO_API virtual ~UABMatchmaking();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_20_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_22_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABMatchmaking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

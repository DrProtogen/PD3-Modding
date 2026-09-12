// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABSeasonPass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSeasonClaimRewardRequest;
#ifdef ACCELBYTEUE4SDK_ABSeasonPass_generated_h
#error "ABSeasonPass.generated.h already included, missing '#pragma once' in ABSeasonPass.h"
#endif
#define ACCELBYTEUE4SDK_ABSeasonPass_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBulkClaimRewards); \
	DECLARE_FUNCTION(execClaimRewards); \
	DECLARE_FUNCTION(execGetCurrentSeason); \
	DECLARE_FUNCTION(execGetCurrentUserSeason); \
	DECLARE_FUNCTION(execGetUserSeason);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABSeasonPass(); \
	friend struct Z_Construct_UClass_UABSeasonPass_Statics; \
public: \
	DECLARE_CLASS(UABSeasonPass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABSeasonPass)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABSeasonPass(UABSeasonPass&&); \
	UABSeasonPass(const UABSeasonPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABSeasonPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABSeasonPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABSeasonPass) \
	NO_API virtual ~UABSeasonPass();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_11_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_13_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABSeasonPass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSeasonPass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

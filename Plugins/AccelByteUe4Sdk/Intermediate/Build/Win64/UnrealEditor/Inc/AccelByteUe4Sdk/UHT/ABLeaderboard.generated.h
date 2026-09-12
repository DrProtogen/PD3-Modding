// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABLeaderboard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteLeaderboardTimeFrame : uint8;
#ifdef ACCELBYTEUE4SDK_ABLeaderboard_generated_h
#error "ABLeaderboard.generated.h already included, missing '#pragma once' in ABLeaderboard.h"
#endif
#define ACCELBYTEUE4SDK_ABLeaderboard_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBulkUserRankingV3); \
	DECLARE_FUNCTION(execGetLeaderboards); \
	DECLARE_FUNCTION(execGetLeaderboardsV3); \
	DECLARE_FUNCTION(execGetLeaderboardV3); \
	DECLARE_FUNCTION(execGetRankingByCycle); \
	DECLARE_FUNCTION(execGetRankingByCycleV3); \
	DECLARE_FUNCTION(execGetRankings); \
	DECLARE_FUNCTION(execGetRankingsV3); \
	DECLARE_FUNCTION(execGetUserRanking); \
	DECLARE_FUNCTION(execGetUserRankingV3);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABLeaderboard(); \
	friend struct Z_Construct_UClass_UABLeaderboard_Statics; \
public: \
	DECLARE_CLASS(UABLeaderboard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABLeaderboard)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABLeaderboard(UABLeaderboard&&); \
	UABLeaderboard(const UABLeaderboard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABLeaderboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABLeaderboard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABLeaderboard) \
	NO_API virtual ~UABLeaderboard();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_15_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_17_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABLeaderboard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLeaderboard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABAchievement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteAchievementListSortBy : uint8;
enum class EAccelByteGlobalAchievementContributorsSortBy : uint8;
enum class EAccelByteGlobalAchievementListSortBy : uint8;
enum class EAccelByteGlobalAchievementStatus : uint8;
#ifdef ACCELBYTEUE4SDK_ABAchievement_generated_h
#error "ABAchievement.generated.h already included, missing '#pragma once' in ABAchievement.h"
#endif
#define ACCELBYTEUE4SDK_ABAchievement_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClaimGlobalAchievements); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execQueryAchievements); \
	DECLARE_FUNCTION(execQueryGlobalAchievementContributors); \
	DECLARE_FUNCTION(execQueryGlobalAchievements); \
	DECLARE_FUNCTION(execQueryGlobalAchievementUserContributed); \
	DECLARE_FUNCTION(execQueryUserAchievements); \
	DECLARE_FUNCTION(execQueryUserAchievementsV2); \
	DECLARE_FUNCTION(execUnlockAchievement);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABAchievement(); \
	friend struct Z_Construct_UClass_UABAchievement_Statics; \
public: \
	DECLARE_CLASS(UABAchievement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABAchievement)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABAchievement(UABAchievement&&); \
	UABAchievement(const UABAchievement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABAchievement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABAchievement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABAchievement) \
	NO_API virtual ~UABAchievement();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_19_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABAchievement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABChallenge.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteModelsChallengeRewardStatus : uint8;
enum class EAccelByteModelsChallengeSortBy : uint8;
enum class EAccelByteModelsChallengeStatus : uint8;
struct FAccelByteModelsChallengeRewardClaimRequest;
#ifdef ACCELBYTEUE4SDK_ABChallenge_generated_h
#error "ABChallenge.generated.h already included, missing '#pragma once' in ABChallenge.h"
#endif
#define ACCELBYTEUE4SDK_ABChallenge_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClaimReward); \
	DECLARE_FUNCTION(execEvaluateChallengeProgress); \
	DECLARE_FUNCTION(execGetChallengeList); \
	DECLARE_FUNCTION(execGetChallengeProgress); \
	DECLARE_FUNCTION(execGetChallenges); \
	DECLARE_FUNCTION(execGetPreviousChallengeProgresses); \
	DECLARE_FUNCTION(execGetRewards);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABChallenge(); \
	friend struct Z_Construct_UClass_UABChallenge_Statics; \
public: \
	DECLARE_CLASS(UABChallenge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABChallenge)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABChallenge(UABChallenge&&); \
	UABChallenge(const UABChallenge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABChallenge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABChallenge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABChallenge) \
	NO_API virtual ~UABChallenge();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_16_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_18_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABChallenge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABChallenge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABReward.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteRewardListSortBy : uint8;
#ifdef ACCELBYTEUE4SDK_ABReward_generated_h
#error "ABReward.generated.h already included, missing '#pragma once' in ABReward.h"
#endif
#define ACCELBYTEUE4SDK_ABReward_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRewardByRewardCode); \
	DECLARE_FUNCTION(execGetRewardByRewardId); \
	DECLARE_FUNCTION(execQueryRewards);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABReward(); \
	friend struct Z_Construct_UClass_UABReward_Statics; \
public: \
	DECLARE_CLASS(UABReward, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABReward)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABReward(UABReward&&); \
	UABReward(const UABReward&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABReward); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABReward); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABReward) \
	NO_API virtual ~UABReward();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_10_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABReward>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

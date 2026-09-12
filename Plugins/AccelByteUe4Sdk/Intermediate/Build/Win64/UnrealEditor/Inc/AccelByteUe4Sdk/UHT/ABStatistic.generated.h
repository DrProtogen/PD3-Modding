// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABStatistic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteStatisticSortBy : uint8;
struct FAccelByteModelsBulkStatItemInc;
#ifdef ACCELBYTEUE4SDK_ABStatistic_generated_h
#error "ABStatistic.generated.h already included, missing '#pragma once' in ABStatistic.h"
#endif
#define ACCELBYTEUE4SDK_ABStatistic_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBulkFetchStatItemsValue); \
	DECLARE_FUNCTION(execCreateUserStatItems); \
	DECLARE_FUNCTION(execGetAllUserStatItems); \
	DECLARE_FUNCTION(execGetGlobalStatItemsByStatCode); \
	DECLARE_FUNCTION(execGetUserStatItems); \
	DECLARE_FUNCTION(execIncrementUserStatItems); \
	DECLARE_FUNCTION(execListGlobalStatItems); \
	DECLARE_FUNCTION(execListGlobalStatItemsWithFilter);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABStatistic(); \
	friend struct Z_Construct_UClass_UABStatistic_Statics; \
public: \
	DECLARE_CLASS(UABStatistic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABStatistic)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABStatistic(UABStatistic&&); \
	UABStatistic(const UABStatistic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABStatistic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABStatistic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABStatistic) \
	NO_API virtual ~UABStatistic();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_14_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_16_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABStatistic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABStatistic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

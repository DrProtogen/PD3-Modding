// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerStatistic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteStatisticSortBy : uint8;
struct FAccelByteModelsBulkStatItemInc;
struct FAccelByteModelsBulkUserStatItemInc;
#ifdef ACCELBYTEUE4SDK_ABServerStatistic_generated_h
#error "ABServerStatistic.generated.h already included, missing '#pragma once' in ABServerStatistic.h"
#endif
#define ACCELBYTEUE4SDK_ABServerStatistic_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBulkFetchStatItemsValue); \
	DECLARE_FUNCTION(execCreateUserStatItems); \
	DECLARE_FUNCTION(execGetAllUserStatItems); \
	DECLARE_FUNCTION(execGetGlobalStatItemsByStatCode); \
	DECLARE_FUNCTION(execGetUserStatItems); \
	DECLARE_FUNCTION(execIncrementManyUsersStatItems); \
	DECLARE_FUNCTION(execIncrementUserStatItems); \
	DECLARE_FUNCTION(execListGlobalStatItems); \
	DECLARE_FUNCTION(execListGlobalStatItemsWithFilter);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerStatistic(); \
	friend struct Z_Construct_UClass_UABServerStatistic_Statics; \
public: \
	DECLARE_CLASS(UABServerStatistic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerStatistic)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerStatistic(UABServerStatistic&&); \
	UABServerStatistic(const UABServerStatistic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerStatistic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerStatistic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerStatistic) \
	NO_API virtual ~UABServerStatistic();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_15_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_17_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerStatistic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

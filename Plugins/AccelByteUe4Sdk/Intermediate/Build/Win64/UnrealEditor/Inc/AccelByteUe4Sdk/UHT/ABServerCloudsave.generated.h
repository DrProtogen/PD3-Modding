// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerCloudsave.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsBulkGetPlayerRecordSizeRequest;
struct FAccelByteModelsBulkReplaceUserRecordRequest;
#ifdef ACCELBYTEUE4SDK_ABServerCloudsave_generated_h
#error "ABServerCloudsave.generated.h already included, missing '#pragma once' in ABServerCloudsave.h"
#endif
#define ACCELBYTEUE4SDK_ABServerCloudsave_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBulkGetPlayerRecordSize); \
	DECLARE_FUNCTION(execBulkGetUserRecord); \
	DECLARE_FUNCTION(execBulkGetUserRecordsByKeys); \
	DECLARE_FUNCTION(execBulkReplaceUserRecord); \
	DECLARE_FUNCTION(execDeleteAdminGameRecord); \
	DECLARE_FUNCTION(execDeleteAdminGameRecordTTLConfig); \
	DECLARE_FUNCTION(execDeleteAdminUserRecord); \
	DECLARE_FUNCTION(execDeleteGameRecord); \
	DECLARE_FUNCTION(execDeleteGameRecordTTLConfig); \
	DECLARE_FUNCTION(execDeleteUserRecord); \
	DECLARE_FUNCTION(execGetGameRecord); \
	DECLARE_FUNCTION(execGetPublicUserRecord); \
	DECLARE_FUNCTION(execGetUserRecord); \
	DECLARE_FUNCTION(execQueryAdminGameRecordKeys); \
	DECLARE_FUNCTION(execQueryAdminGameRecordsByKey); \
	DECLARE_FUNCTION(execQueryAdminUserRecordKeys); \
	DECLARE_FUNCTION(execQueryAdminUserRecordsByKey); \
	DECLARE_FUNCTION(execRetrieveGameRecordsKey);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerCloudsave(); \
	friend struct Z_Construct_UClass_UABServerCloudsave_Statics; \
public: \
	DECLARE_CLASS(UABServerCloudsave, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerCloudsave)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerCloudsave(UABServerCloudsave&&); \
	UABServerCloudsave(const UABServerCloudsave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerCloudsave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerCloudsave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerCloudsave) \
	NO_API virtual ~UABServerCloudsave();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_20_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_22_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerCloudsave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCloudsave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

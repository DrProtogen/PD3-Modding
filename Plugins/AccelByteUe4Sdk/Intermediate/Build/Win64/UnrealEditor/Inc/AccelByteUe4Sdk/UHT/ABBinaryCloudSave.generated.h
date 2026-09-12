// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABBinaryCloudSave.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_ABBinaryCloudSave_generated_h
#error "ABBinaryCloudSave.generated.h already included, missing '#pragma once' in ABBinaryCloudSave.h"
#endif
#define ACCELBYTEUE4SDK_ABBinaryCloudSave_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBulkGetCurrentUserBinaryRecords); \
	DECLARE_FUNCTION(execBulkGetGameBinaryRecords); \
	DECLARE_FUNCTION(execBulkGetPublicUserBinaryRecordsByKeys); \
	DECLARE_FUNCTION(execBulkGetPublicUserBinaryRecordsByUserIds); \
	DECLARE_FUNCTION(execBulkQueryCurrentUserBinaryRecords); \
	DECLARE_FUNCTION(execBulkQueryGameBinaryRecords); \
	DECLARE_FUNCTION(execBulkQueryPublicUserBinaryRecords); \
	DECLARE_FUNCTION(execDeleteUserBinaryRecord); \
	DECLARE_FUNCTION(execGetCurrentUserBinaryRecord); \
	DECLARE_FUNCTION(execGetGameBinaryRecord); \
	DECLARE_FUNCTION(execGetPublicUserBinaryRecord); \
	DECLARE_FUNCTION(execRequestUserBinaryRecordPresignedUrl); \
	DECLARE_FUNCTION(execSaveUserBinaryRecord); \
	DECLARE_FUNCTION(execUpdateUserBinaryRecordFile); \
	DECLARE_FUNCTION(execUpdateUserBinaryRecordMetadata);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABBinaryCloudSave(); \
	friend struct Z_Construct_UClass_UABBinaryCloudSave_Statics; \
public: \
	DECLARE_CLASS(UABBinaryCloudSave, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABBinaryCloudSave)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABBinaryCloudSave(UABBinaryCloudSave&&); \
	UABBinaryCloudSave(const UABBinaryCloudSave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABBinaryCloudSave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABBinaryCloudSave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABBinaryCloudSave) \
	NO_API virtual ~UABBinaryCloudSave();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_15_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_17_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABBinaryCloudSave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBinaryCloudSave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

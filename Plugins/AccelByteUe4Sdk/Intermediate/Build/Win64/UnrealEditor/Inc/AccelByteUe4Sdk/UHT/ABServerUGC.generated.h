// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerUGC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteUGCContentSortByV2 : uint8;
enum class EAccelByteUgcOrderBy : uint8;
enum class EAccelByteUgcSortBy : uint8;
struct FAccelByteModelsUGCFilterRequestV2;
struct FAccelByteModelsUGCSearchContentsRequest;
struct FAccelByteModelsUGCUpdateRequest;
#ifdef ACCELBYTEUE4SDK_ABServerUGC_generated_h
#error "ABServerUGC.generated.h already included, missing '#pragma once' in ABServerUGC.h"
#endif
#define ACCELBYTEUE4SDK_ABServerUGC_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteContentByShareCode); \
	DECLARE_FUNCTION(execModifyContentByShareCode); \
	DECLARE_FUNCTION(execPublicGetContentBulk); \
	DECLARE_FUNCTION(execPublicGetContentBulkByIdsV2); \
	DECLARE_FUNCTION(execPublicGetContentByContentId); \
	DECLARE_FUNCTION(execPublicGetContentByContentIdV2); \
	DECLARE_FUNCTION(execPublicGetContentByShareCode); \
	DECLARE_FUNCTION(execPublicGetContentByShareCodeV2); \
	DECLARE_FUNCTION(execPublicGetUserContent); \
	DECLARE_FUNCTION(execPublicGetUserContentsV2); \
	DECLARE_FUNCTION(execPublicSearchAllContents); \
	DECLARE_FUNCTION(execPublicSearchContents); \
	DECLARE_FUNCTION(execPublicSearchContentsSpecificToChannelV2); \
	DECLARE_FUNCTION(execPublicSearchContentsV2); \
	DECLARE_FUNCTION(execSearchContents); \
	DECLARE_FUNCTION(execSearchContentsSpecificToChannel);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerUGC(); \
	friend struct Z_Construct_UClass_UABServerUGC_Statics; \
public: \
	DECLARE_CLASS(UABServerUGC, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerUGC)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerUGC(UABServerUGC&&); \
	UABServerUGC(const UABServerUGC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerUGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerUGC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerUGC) \
	NO_API virtual ~UABServerUGC();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_24_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_26_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerUGC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerUGC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

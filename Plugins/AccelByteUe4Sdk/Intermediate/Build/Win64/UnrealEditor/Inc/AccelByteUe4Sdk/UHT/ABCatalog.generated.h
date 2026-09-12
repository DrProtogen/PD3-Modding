// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABCatalog.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteItemListSortBy : uint8;
struct FAccelByteModelsItemCriteria;
#ifdef ACCELBYTEUE4SDK_ABCatalog_generated_h
#error "ABCatalog.generated.h already included, missing '#pragma once' in ABCatalog.h"
#endif
#define ACCELBYTEUE4SDK_ABCatalog_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetChildCategories); \
	DECLARE_FUNCTION(execGetDescendantCategories); \
	DECLARE_FUNCTION(execGetItemByAppId); \
	DECLARE_FUNCTION(execGetItemById); \
	DECLARE_FUNCTION(execGetItemDynamicData); \
	DECLARE_FUNCTION(execGetItemsByCriteria); \
	DECLARE_FUNCTION(execGetRootCategories); \
	DECLARE_FUNCTION(execSearchItem);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABCatalog(); \
	friend struct Z_Construct_UClass_UABCatalog_Statics; \
public: \
	DECLARE_CLASS(UABCatalog, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABCatalog)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABCatalog(UABCatalog&&); \
	UABCatalog(const UABCatalog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABCatalog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCatalog); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABCatalog) \
	NO_API virtual ~UABCatalog();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_15_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_17_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABCatalog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

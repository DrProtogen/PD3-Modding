// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FJsonObjectWrapper;
#ifdef ACCELBYTEUE4SDK_ABUtilities_generated_h
#error "ABUtilities.generated.h already included, missing '#pragma once' in ABUtilities.h"
#endif
#define ACCELBYTEUE4SDK_ABUtilities_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddOrReplaceJsonArrayValue); \
	DECLARE_FUNCTION(execAddOrReplaceJsonBoolValue); \
	DECLARE_FUNCTION(execAddOrReplaceJsonNumberValue); \
	DECLARE_FUNCTION(execAddOrReplaceJsonStringValue); \
	DECLARE_FUNCTION(execDateTimeToString); \
	DECLARE_FUNCTION(execGetJsonObjectAsJsonString); \
	DECLARE_FUNCTION(execGetJsonValueAsArray); \
	DECLARE_FUNCTION(execGetJsonValueAsBool); \
	DECLARE_FUNCTION(execGetJsonValueAsNumber); \
	DECLARE_FUNCTION(execGetJsonValueAsString);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABUtilities(); \
	friend struct Z_Construct_UClass_UABUtilities_Statics; \
public: \
	DECLARE_CLASS(UABUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABUtilities)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABUtilities(UABUtilities&&); \
	UABUtilities(const UABUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABUtilities) \
	NO_API virtual ~UABUtilities();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_8_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_10_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

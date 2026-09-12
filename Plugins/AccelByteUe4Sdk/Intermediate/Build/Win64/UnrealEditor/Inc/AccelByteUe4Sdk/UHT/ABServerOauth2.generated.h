// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerOauth2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_ABServerOauth2_generated_h
#error "ABServerOauth2.generated.h already included, missing '#pragma once' in ABServerOauth2.h"
#endif
#define ACCELBYTEUE4SDK_ABServerOauth2_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForgetAllCredentials); \
	DECLARE_FUNCTION(execGetJwks); \
	DECLARE_FUNCTION(execLoginWithClientCredentials);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerOauth2(); \
	friend struct Z_Construct_UClass_UABServerOauth2_Statics; \
public: \
	DECLARE_CLASS(UABServerOauth2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerOauth2)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerOauth2(UABServerOauth2&&); \
	UABServerOauth2(const UABServerOauth2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerOauth2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerOauth2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerOauth2) \
	NO_API virtual ~UABServerOauth2();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_9_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_11_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerOauth2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

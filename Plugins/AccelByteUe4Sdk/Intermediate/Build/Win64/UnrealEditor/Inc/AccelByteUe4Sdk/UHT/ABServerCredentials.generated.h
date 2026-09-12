// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerCredentials.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_ABServerCredentials_generated_h
#error "ABServerCredentials.generated.h already included, missing '#pragma once' in ABServerCredentials.h"
#endif
#define ACCELBYTEUE4SDK_ABServerCredentials_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAccessToken);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerCredentials(); \
	friend struct Z_Construct_UClass_UABServerCredentials_Statics; \
public: \
	DECLARE_CLASS(UABServerCredentials, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerCredentials)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerCredentials(UABServerCredentials&&); \
	UABServerCredentials(const UABServerCredentials&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerCredentials); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerCredentials); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerCredentials) \
	NO_API virtual ~UABServerCredentials();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_6_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_8_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerCredentials>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

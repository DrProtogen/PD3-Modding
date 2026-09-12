// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABWallet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_ABWallet_generated_h
#error "ABWallet.generated.h already included, missing '#pragma once' in ABWallet.h"
#endif
#define ACCELBYTEUE4SDK_ABWallet_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWalletInfoByCurrencyCode); \
	DECLARE_FUNCTION(execGetWalletInfoByCurrencyCodeV2);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABWallet(); \
	friend struct Z_Construct_UClass_UABWallet_Statics; \
public: \
	DECLARE_CLASS(UABWallet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABWallet)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABWallet(UABWallet&&); \
	UABWallet(const UABWallet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABWallet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABWallet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABWallet) \
	NO_API virtual ~UABWallet();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_9_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_11_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABWallet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

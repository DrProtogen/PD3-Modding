// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABCurrency.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteCurrencyType : uint8;
#ifdef ACCELBYTEUE4SDK_ABCurrency_generated_h
#error "ABCurrency.generated.h already included, missing '#pragma once' in ABCurrency.h"
#endif
#define ACCELBYTEUE4SDK_ABCurrency_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrencyList);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABCurrency(); \
	friend struct Z_Construct_UClass_UABCurrency_Statics; \
public: \
	DECLARE_CLASS(UABCurrency, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABCurrency)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABCurrency(UABCurrency&&); \
	UABCurrency(const UABCurrency&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABCurrency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCurrency); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABCurrency) \
	NO_API virtual ~UABCurrency();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_9_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_11_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABCurrency>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

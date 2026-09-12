// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerEntitlement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_ABServerEntitlement_generated_h
#error "ABServerEntitlement.generated.h already included, missing '#pragma once' in ABServerEntitlement.h"
#endif
#define ACCELBYTEUE4SDK_ABServerEntitlement_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUserEntitlementHistory);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerEntitlement(); \
	friend struct Z_Construct_UClass_UABServerEntitlement_Statics; \
public: \
	DECLARE_CLASS(UABServerEntitlement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerEntitlement)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerEntitlement(UABServerEntitlement&&); \
	UABServerEntitlement(const UABServerEntitlement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerEntitlement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerEntitlement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerEntitlement) \
	NO_API virtual ~UABServerEntitlement();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_8_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_10_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerEntitlement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

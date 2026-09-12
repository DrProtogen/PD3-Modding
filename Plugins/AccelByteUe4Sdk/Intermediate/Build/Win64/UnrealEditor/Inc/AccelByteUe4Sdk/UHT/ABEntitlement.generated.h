// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABEntitlement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteAppType : uint8;
enum class EAccelByteEntitlementClass : uint8;
enum class EAccelBytePlatformSync : uint8;
struct FAccelByteModelsAttributes;
struct FAccelByteModelsEntitlementSyncBase;
struct FAccelByteModelsPlatformSyncMobileApple;
struct FAccelByteModelsPlatformSyncMobileGoogle;
struct FAccelByteModelsTwitchDropEntitlement;
struct FDateTime;
#ifdef ACCELBYTEUE4SDK_ABEntitlement_generated_h
#error "ABEntitlement.generated.h already included, missing '#pragma once' in ABEntitlement.h"
#endif
#define ACCELBYTEUE4SDK_ABEntitlement_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConsumeUserEntitlement); \
	DECLARE_FUNCTION(execCreateDistributionReceiver); \
	DECLARE_FUNCTION(execDeleteDistributionReceiver); \
	DECLARE_FUNCTION(execGetCurrentUserEntitlementHistory); \
	DECLARE_FUNCTION(execGetDistributionReceiver); \
	DECLARE_FUNCTION(execGetUserEntitlementById); \
	DECLARE_FUNCTION(execGetUserEntitlementByIds); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipAny); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipByAppId); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipByItemId); \
	DECLARE_FUNCTION(execGetUserEntitlementOwnershipBySku); \
	DECLARE_FUNCTION(execQueryUserEntitlements); \
	DECLARE_FUNCTION(execSyncMobilePlatformPurchaseApple); \
	DECLARE_FUNCTION(execSyncMobilePlatformPurchaseGoogle); \
	DECLARE_FUNCTION(execSyncMobilePlatformPurchaseGooglePlay); \
	DECLARE_FUNCTION(execSyncPlatformPurchase); \
	DECLARE_FUNCTION(execSyncPlatformPurchaseSingleItem); \
	DECLARE_FUNCTION(execSyncTwitchDropEntitlement); \
	DECLARE_FUNCTION(execUpdateDistributionReceiver); \
	DECLARE_FUNCTION(execValidateUserItemPurchaseCondition);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABEntitlement(); \
	friend struct Z_Construct_UClass_UABEntitlement_Statics; \
public: \
	DECLARE_CLASS(UABEntitlement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABEntitlement)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABEntitlement(UABEntitlement&&); \
	UABEntitlement(const UABEntitlement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABEntitlement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABEntitlement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABEntitlement) \
	NO_API virtual ~UABEntitlement();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_25_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_27_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABEntitlement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABEntitlement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

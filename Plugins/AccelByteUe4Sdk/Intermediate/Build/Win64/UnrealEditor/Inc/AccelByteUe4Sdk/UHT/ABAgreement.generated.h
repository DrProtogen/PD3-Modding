// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABAgreement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteAgreementPolicyType : uint8;
struct FAccelByteModelsChangeAgreementRequest;
struct FArrayModelsAcceptAgreementRequest;
#ifdef ACCELBYTEUE4SDK_ABAgreement_generated_h
#error "ABAgreement.generated.h already included, missing '#pragma once' in ABAgreement.h"
#endif
#define ACCELBYTEUE4SDK_ABAgreement_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAcceptPolicyVersion); \
	DECLARE_FUNCTION(execBulkAcceptPolicyVersions); \
	DECLARE_FUNCTION(execChangePolicyPreferences); \
	DECLARE_FUNCTION(execGetLegalDocument); \
	DECLARE_FUNCTION(execGetLegalPolicies); \
	DECLARE_FUNCTION(execGetLegalPoliciesByCountry); \
	DECLARE_FUNCTION(execGetLegalPoliciesByCountryAndTags); \
	DECLARE_FUNCTION(execGetLegalPoliciesByNamespace); \
	DECLARE_FUNCTION(execGetLegalPoliciesByNamespaceAndCountry); \
	DECLARE_FUNCTION(execGetLegalPoliciesByNamespaceCountryAndTags); \
	DECLARE_FUNCTION(execGetLegalPoliciesByTags); \
	DECLARE_FUNCTION(execQueryLegalEligibilities);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABAgreement(); \
	friend struct Z_Construct_UClass_UABAgreement_Statics; \
public: \
	DECLARE_CLASS(UABAgreement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABAgreement)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABAgreement(UABAgreement&&); \
	UABAgreement(const UABAgreement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABAgreement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABAgreement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABAgreement) \
	NO_API virtual ~UABAgreement();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_15_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_17_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABAgreement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

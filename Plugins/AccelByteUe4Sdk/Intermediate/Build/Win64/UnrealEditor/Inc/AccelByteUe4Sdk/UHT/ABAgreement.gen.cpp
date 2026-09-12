// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABAgreement.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsChangeAgreementRequest.h"
#include "AccelByteUe4Sdk/Public/ArrayModelsAcceptAgreementRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAgreement() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABAgreement();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABAgreement_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsRetrieveUserEligibilitiesResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsAcceptAgreementResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DString__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChangeAgreementRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABAgreement Function AcceptPolicyVersion
struct Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics
{
	struct ABAgreement_eventAcceptPolicyVersion_Parms
	{
		FString LocalizedPolicyVersionId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedPolicyVersionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizedPolicyVersionId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_LocalizedPolicyVersionId = { "LocalizedPolicyVersionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventAcceptPolicyVersion_Parms, LocalizedPolicyVersionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalizedPolicyVersionId_MetaData), NewProp_LocalizedPolicyVersionId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventAcceptPolicyVersion_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventAcceptPolicyVersion_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_LocalizedPolicyVersionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "AcceptPolicyVersion", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::ABAgreement_eventAcceptPolicyVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::ABAgreement_eventAcceptPolicyVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execAcceptPolicyVersion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalizedPolicyVersionId);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AcceptPolicyVersion(Z_Param_LocalizedPolicyVersionId,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function AcceptPolicyVersion

// Begin Class UABAgreement Function BulkAcceptPolicyVersions
struct Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics
{
	struct ABAgreement_eventBulkAcceptPolicyVersions_Parms
	{
		FArrayModelsAcceptAgreementRequest AgreementRequests;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgreementRequests_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AgreementRequests;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_AgreementRequests = { "AgreementRequests", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventBulkAcceptPolicyVersions_Parms, AgreementRequests), Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementRequests_MetaData), NewProp_AgreementRequests_MetaData) }; // 4206746475
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventBulkAcceptPolicyVersions_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsAcceptAgreementResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4106052334
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventBulkAcceptPolicyVersions_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_AgreementRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "BulkAcceptPolicyVersions", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::ABAgreement_eventBulkAcceptPolicyVersions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::ABAgreement_eventBulkAcceptPolicyVersions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execBulkAcceptPolicyVersions)
{
	P_GET_STRUCT_REF(FArrayModelsAcceptAgreementRequest,Z_Param_Out_AgreementRequests);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkAcceptPolicyVersions(Z_Param_Out_AgreementRequests,FDModelsAcceptAgreementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function BulkAcceptPolicyVersions

// Begin Class UABAgreement Function ChangePolicyPreferences
struct Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics
{
	struct ABAgreement_eventChangePolicyPreferences_Parms
	{
		TArray<FAccelByteModelsChangeAgreementRequest> ChangeAgreementRequests;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeAgreementRequests_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeAgreementRequests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChangeAgreementRequests;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::NewProp_ChangeAgreementRequests_Inner = { "ChangeAgreementRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsChangeAgreementRequest, METADATA_PARAMS(0, nullptr) }; // 1913658127
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::NewProp_ChangeAgreementRequests = { "ChangeAgreementRequests", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventChangePolicyPreferences_Parms, ChangeAgreementRequests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeAgreementRequests_MetaData), NewProp_ChangeAgreementRequests_MetaData) }; // 1913658127
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventChangePolicyPreferences_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventChangePolicyPreferences_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::NewProp_ChangeAgreementRequests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::NewProp_ChangeAgreementRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "ChangePolicyPreferences", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::ABAgreement_eventChangePolicyPreferences_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::ABAgreement_eventChangePolicyPreferences_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execChangePolicyPreferences)
{
	P_GET_TARRAY_REF(FAccelByteModelsChangeAgreementRequest,Z_Param_Out_ChangeAgreementRequests);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangePolicyPreferences(Z_Param_Out_ChangeAgreementRequests,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function ChangePolicyPreferences

// Begin Class UABAgreement Function GetLegalDocument
struct Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics
{
	struct ABAgreement_eventGetLegalDocument_Parms
	{
		FString Url;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalDocument_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalDocument_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DString__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3877927919
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalDocument_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalDocument", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::ABAgreement_eventGetLegalDocument_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::ABAgreement_eventGetLegalDocument_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_GetLegalDocument()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execGetLegalDocument)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLegalDocument(Z_Param_Url,FDString(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function GetLegalDocument

// Begin Class UABAgreement Function GetLegalPolicies
struct Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics
{
	struct ABAgreement_eventGetLegalPolicies_Parms
	{
		EAccelByteAgreementPolicyType AgreementPolicyType;
		bool DefaultOnEmpty;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
	static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPolicies_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementPolicyType_MetaData), NewProp_AgreementPolicyType_MetaData) }; // 2129227805
void Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
{
	((ABAgreement_eventGetLegalPolicies_Parms*)Obj)->DefaultOnEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPolicies_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPolicies_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3781521414
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPolicies_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_DefaultOnEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPolicies", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::ABAgreement_eventGetLegalPolicies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::ABAgreement_eventGetLegalPolicies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPolicies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execGetLegalPolicies)
{
	P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
	P_GET_UBOOL(Z_Param_DefaultOnEmpty);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLegalPolicies((EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function GetLegalPolicies

// Begin Class UABAgreement Function GetLegalPoliciesByCountry
struct Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics
{
	struct ABAgreement_eventGetLegalPoliciesByCountry_Parms
	{
		FString CountryCode;
		EAccelByteAgreementPolicyType AgreementPolicyType;
		bool DefaultOnEmpty;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CountryCode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
	static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_CountryCode = { "CountryCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountry_Parms, CountryCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryCode_MetaData), NewProp_CountryCode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountry_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementPolicyType_MetaData), NewProp_AgreementPolicyType_MetaData) }; // 2129227805
void Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
{
	((ABAgreement_eventGetLegalPoliciesByCountry_Parms*)Obj)->DefaultOnEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPoliciesByCountry_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountry_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3781521414
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountry_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_CountryCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_DefaultOnEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPoliciesByCountry", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::ABAgreement_eventGetLegalPoliciesByCountry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::ABAgreement_eventGetLegalPoliciesByCountry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execGetLegalPoliciesByCountry)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CountryCode);
	P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
	P_GET_UBOOL(Z_Param_DefaultOnEmpty);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLegalPoliciesByCountry(Z_Param_CountryCode,(EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function GetLegalPoliciesByCountry

// Begin Class UABAgreement Function GetLegalPoliciesByCountryAndTags
struct Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics
{
	struct ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms
	{
		FString CountryCode;
		EAccelByteAgreementPolicyType AgreementPolicyType;
		TArray<FString> Tags;
		bool DefaultOnEmpty;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CountryCode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_CountryCode = { "CountryCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms, CountryCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryCode_MetaData), NewProp_CountryCode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementPolicyType_MetaData), NewProp_AgreementPolicyType_MetaData) }; // 2129227805
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
void Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
{
	((ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms*)Obj)->DefaultOnEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3781521414
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_CountryCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_DefaultOnEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPoliciesByCountryAndTags", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execGetLegalPoliciesByCountryAndTags)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CountryCode);
	P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
	P_GET_UBOOL(Z_Param_DefaultOnEmpty);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLegalPoliciesByCountryAndTags(Z_Param_CountryCode,(EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_Out_Tags,Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function GetLegalPoliciesByCountryAndTags

// Begin Class UABAgreement Function GetLegalPoliciesByNamespace
struct Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics
{
	struct ABAgreement_eventGetLegalPoliciesByNamespace_Parms
	{
		FString Namesapce;
		EAccelByteAgreementPolicyType AgreementPolicyType;
		bool DefaultOnEmpty;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namesapce_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namesapce;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
	static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_Namesapce = { "Namesapce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespace_Parms, Namesapce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namesapce_MetaData), NewProp_Namesapce_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespace_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementPolicyType_MetaData), NewProp_AgreementPolicyType_MetaData) }; // 2129227805
void Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
{
	((ABAgreement_eventGetLegalPoliciesByNamespace_Parms*)Obj)->DefaultOnEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPoliciesByNamespace_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespace_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3781521414
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespace_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_Namesapce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_DefaultOnEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPoliciesByNamespace", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::ABAgreement_eventGetLegalPoliciesByNamespace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::ABAgreement_eventGetLegalPoliciesByNamespace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execGetLegalPoliciesByNamespace)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Namesapce);
	P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
	P_GET_UBOOL(Z_Param_DefaultOnEmpty);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLegalPoliciesByNamespace(Z_Param_Namesapce,(EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function GetLegalPoliciesByNamespace

// Begin Class UABAgreement Function GetLegalPoliciesByNamespaceAndCountry
struct Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics
{
	struct ABAgreement_eventGetLegalPoliciesByNamespaceAndCountry_Parms
	{
		FString Namespace;
		FString CountryCode;
		EAccelByteAgreementPolicyType AgreementPolicyType;
		bool DefaultOnEmpty;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CountryCode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
	static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceAndCountry_Parms, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_CountryCode = { "CountryCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceAndCountry_Parms, CountryCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryCode_MetaData), NewProp_CountryCode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceAndCountry_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementPolicyType_MetaData), NewProp_AgreementPolicyType_MetaData) }; // 2129227805
void Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
{
	((ABAgreement_eventGetLegalPoliciesByNamespaceAndCountry_Parms*)Obj)->DefaultOnEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPoliciesByNamespaceAndCountry_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceAndCountry_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3781521414
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceAndCountry_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_CountryCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_AgreementPolicyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_AgreementPolicyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_DefaultOnEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPoliciesByNamespaceAndCountry", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::ABAgreement_eventGetLegalPoliciesByNamespaceAndCountry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::ABAgreement_eventGetLegalPoliciesByNamespaceAndCountry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execGetLegalPoliciesByNamespaceAndCountry)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
	P_GET_PROPERTY(FStrProperty,Z_Param_CountryCode);
	P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
	P_GET_UBOOL(Z_Param_DefaultOnEmpty);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLegalPoliciesByNamespaceAndCountry(Z_Param_Namespace,Z_Param_CountryCode,(EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function GetLegalPoliciesByNamespaceAndCountry

// Begin Class UABAgreement Function GetLegalPoliciesByNamespaceCountryAndTags
struct Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics
{
	struct ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms
	{
		FString Namespace;
		FString CountryCode;
		EAccelByteAgreementPolicyType AgreementPolicyType;
		TArray<FString> Tags;
		bool DefaultOnEmpty;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CountryCode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_CountryCode = { "CountryCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms, CountryCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryCode_MetaData), NewProp_CountryCode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementPolicyType_MetaData), NewProp_AgreementPolicyType_MetaData) }; // 2129227805
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
void Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
{
	((ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms*)Obj)->DefaultOnEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3781521414
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_CountryCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_AgreementPolicyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_AgreementPolicyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_DefaultOnEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPoliciesByNamespaceCountryAndTags", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::ABAgreement_eventGetLegalPoliciesByNamespaceCountryAndTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execGetLegalPoliciesByNamespaceCountryAndTags)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
	P_GET_PROPERTY(FStrProperty,Z_Param_CountryCode);
	P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
	P_GET_UBOOL(Z_Param_DefaultOnEmpty);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLegalPoliciesByNamespaceCountryAndTags(Z_Param_Namespace,Z_Param_CountryCode,(EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_Out_Tags,Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function GetLegalPoliciesByNamespaceCountryAndTags

// Begin Class UABAgreement Function GetLegalPoliciesByTags
struct Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics
{
	struct ABAgreement_eventGetLegalPoliciesByTags_Parms
	{
		EAccelByteAgreementPolicyType AgreementPolicyType;
		TArray<FString> tags;
		bool DefaultOnEmpty;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_tags;
	static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByTags_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementPolicyType_MetaData), NewProp_AgreementPolicyType_MetaData) }; // 2129227805
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags_Inner = { "tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByTags_Parms, tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tags_MetaData), NewProp_tags_MetaData) };
void Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
{
	((ABAgreement_eventGetLegalPoliciesByTags_Parms*)Obj)->DefaultOnEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPoliciesByTags_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByTags_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3781521414
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByTags_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_DefaultOnEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPoliciesByTags", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::ABAgreement_eventGetLegalPoliciesByTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::ABAgreement_eventGetLegalPoliciesByTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execGetLegalPoliciesByTags)
{
	P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
	P_GET_TARRAY_REF(FString,Z_Param_Out_tags);
	P_GET_UBOOL(Z_Param_DefaultOnEmpty);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLegalPoliciesByTags((EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_Out_tags,Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function GetLegalPoliciesByTags

// Begin Class UABAgreement Function QueryLegalEligibilities
struct Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics
{
	struct ABAgreement_eventQueryLegalEligibilities_Parms
	{
		FString Namespace;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventQueryLegalEligibilities_Parms, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventQueryLegalEligibilities_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsRetrieveUserEligibilitiesResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2598489003
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABAgreement_eventQueryLegalEligibilities_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "QueryLegalEligibilities", nullptr, nullptr, Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::ABAgreement_eventQueryLegalEligibilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::ABAgreement_eventQueryLegalEligibilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABAgreement::execQueryLegalEligibilities)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryLegalEligibilities(Z_Param_Namespace,FDArrayModelsRetrieveUserEligibilitiesResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UABAgreement Function QueryLegalEligibilities

// Begin Class UABAgreement
void UABAgreement::StaticRegisterNativesUABAgreement()
{
	UClass* Class = UABAgreement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptPolicyVersion", &UABAgreement::execAcceptPolicyVersion },
		{ "BulkAcceptPolicyVersions", &UABAgreement::execBulkAcceptPolicyVersions },
		{ "ChangePolicyPreferences", &UABAgreement::execChangePolicyPreferences },
		{ "GetLegalDocument", &UABAgreement::execGetLegalDocument },
		{ "GetLegalPolicies", &UABAgreement::execGetLegalPolicies },
		{ "GetLegalPoliciesByCountry", &UABAgreement::execGetLegalPoliciesByCountry },
		{ "GetLegalPoliciesByCountryAndTags", &UABAgreement::execGetLegalPoliciesByCountryAndTags },
		{ "GetLegalPoliciesByNamespace", &UABAgreement::execGetLegalPoliciesByNamespace },
		{ "GetLegalPoliciesByNamespaceAndCountry", &UABAgreement::execGetLegalPoliciesByNamespaceAndCountry },
		{ "GetLegalPoliciesByNamespaceCountryAndTags", &UABAgreement::execGetLegalPoliciesByNamespaceCountryAndTags },
		{ "GetLegalPoliciesByTags", &UABAgreement::execGetLegalPoliciesByTags },
		{ "QueryLegalEligibilities", &UABAgreement::execQueryLegalEligibilities },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABAgreement);
UClass* Z_Construct_UClass_UABAgreement_NoRegister()
{
	return UABAgreement::StaticClass();
}
struct Z_Construct_UClass_UABAgreement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABAgreement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion, "AcceptPolicyVersion" }, // 1336584097
		{ &Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions, "BulkAcceptPolicyVersions" }, // 2488831663
		{ &Z_Construct_UFunction_UABAgreement_ChangePolicyPreferences, "ChangePolicyPreferences" }, // 3611980066
		{ &Z_Construct_UFunction_UABAgreement_GetLegalDocument, "GetLegalDocument" }, // 3337450600
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPolicies, "GetLegalPolicies" }, // 1343427414
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry, "GetLegalPoliciesByCountry" }, // 3387331385
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags, "GetLegalPoliciesByCountryAndTags" }, // 1895214647
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace, "GetLegalPoliciesByNamespace" }, // 2477168102
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceAndCountry, "GetLegalPoliciesByNamespaceAndCountry" }, // 3143036569
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespaceCountryAndTags, "GetLegalPoliciesByNamespaceCountryAndTags" }, // 2752839557
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags, "GetLegalPoliciesByTags" }, // 464083265
		{ &Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities, "QueryLegalEligibilities" }, // 2929219044
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABAgreement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABAgreement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABAgreement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABAgreement_Statics::ClassParams = {
	&UABAgreement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABAgreement_Statics::Class_MetaDataParams), Z_Construct_UClass_UABAgreement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABAgreement()
{
	if (!Z_Registration_Info_UClass_UABAgreement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABAgreement.OuterSingleton, Z_Construct_UClass_UABAgreement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABAgreement.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABAgreement>()
{
	return UABAgreement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABAgreement);
UABAgreement::~UABAgreement() {}
// End Class UABAgreement

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABAgreement, UABAgreement::StaticClass, TEXT("UABAgreement"), &Z_Registration_Info_UClass_UABAgreement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABAgreement), 2435097945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_2231836778(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAgreement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

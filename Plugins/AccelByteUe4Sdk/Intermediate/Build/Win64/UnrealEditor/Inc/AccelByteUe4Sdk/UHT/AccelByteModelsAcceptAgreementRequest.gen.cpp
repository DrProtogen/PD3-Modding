// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsAcceptAgreementRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsAcceptAgreementRequest() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteModelsAcceptAgreementRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementRequest;
class UScriptStruct* FAccelByteModelsAcceptAgreementRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsAcceptAgreementRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementRequest.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsAcceptAgreementRequest>()
{
	return FAccelByteModelsAcceptAgreementRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedPolicyVersionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptAgreementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolicyVersionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptAgreementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolicyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptAgreementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAccepted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptAgreementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementRequest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizedPolicyVersionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PolicyVersionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PolicyId;
	static void NewProp_IsAccepted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAccepted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsAcceptAgreementRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_LocalizedPolicyVersionId = { "LocalizedPolicyVersionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelsAcceptAgreementRequest, LocalizedPolicyVersionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalizedPolicyVersionId_MetaData), NewProp_LocalizedPolicyVersionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyVersionId = { "PolicyVersionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelsAcceptAgreementRequest, PolicyVersionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolicyVersionId_MetaData), NewProp_PolicyVersionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyId = { "PolicyId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelsAcceptAgreementRequest, PolicyId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolicyId_MetaData), NewProp_PolicyId_MetaData) };
void Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted_SetBit(void* Obj)
{
	((FAccelByteModelsAcceptAgreementRequest*)Obj)->IsAccepted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted = { "IsAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAccelByteModelsAcceptAgreementRequest), &Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAccepted_MetaData), NewProp_IsAccepted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_LocalizedPolicyVersionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyVersionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteModelsAcceptAgreementRequest",
	Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::PropPointers),
	sizeof(FAccelByteModelsAcceptAgreementRequest),
	alignof(FAccelByteModelsAcceptAgreementRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementRequest.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementRequest.InnerSingleton;
}
// End ScriptStruct FAccelByteModelsAcceptAgreementRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptAgreementRequest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteModelsAcceptAgreementRequest::StaticStruct, Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewStructOps, TEXT("AccelByteModelsAcceptAgreementRequest"), &Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteModelsAcceptAgreementRequest), 2077232815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptAgreementRequest_h_3932428902(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptAgreementRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptAgreementRequest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

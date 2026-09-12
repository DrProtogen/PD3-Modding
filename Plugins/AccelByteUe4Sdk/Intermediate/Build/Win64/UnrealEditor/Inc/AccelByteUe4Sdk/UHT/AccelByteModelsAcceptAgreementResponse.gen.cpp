// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsAcceptAgreementResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsAcceptAgreementResponse() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteModelsAcceptAgreementResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementResponse;
class UScriptStruct* FAccelByteModelsAcceptAgreementResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsAcceptAgreementResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementResponse.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsAcceptAgreementResponse>()
{
	return FAccelByteModelsAcceptAgreementResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementResponse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Proceed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptAgreementResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementResponse.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Proceed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Proceed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsAcceptAgreementResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::NewProp_Proceed_SetBit(void* Obj)
{
	((FAccelByteModelsAcceptAgreementResponse*)Obj)->Proceed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::NewProp_Proceed = { "Proceed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAccelByteModelsAcceptAgreementResponse), &Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::NewProp_Proceed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Proceed_MetaData), NewProp_Proceed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::NewProp_Proceed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteModelsAcceptAgreementResponse",
	Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::PropPointers),
	sizeof(FAccelByteModelsAcceptAgreementResponse),
	alignof(FAccelByteModelsAcceptAgreementResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementResponse.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementResponse.InnerSingleton;
}
// End ScriptStruct FAccelByteModelsAcceptAgreementResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptAgreementResponse_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteModelsAcceptAgreementResponse::StaticStruct, Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementResponse_Statics::NewStructOps, TEXT("AccelByteModelsAcceptAgreementResponse"), &Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptAgreementResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteModelsAcceptAgreementResponse), 904181831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptAgreementResponse_h_2448971206(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptAgreementResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptAgreementResponse_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

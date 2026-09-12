// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeErrorResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeErrorResponse() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeErrorResponse();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FChallengeErrorResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChallengeErrorResponse;
class UScriptStruct* FChallengeErrorResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeErrorResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChallengeErrorResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeErrorResponse, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeErrorResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ChallengeErrorResponse.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeErrorResponse>()
{
	return FChallengeErrorResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeErrorResponse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeErrorResponse" },
		{ "ModuleRelativePath", "Public/ChallengeErrorResponse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeErrorResponse" },
		{ "ModuleRelativePath", "Public/ChallengeErrorResponse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeErrorResponse" },
		{ "ModuleRelativePath", "Public/ChallengeErrorResponse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeErrorResponse" },
		{ "ModuleRelativePath", "Public/ChallengeErrorResponse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Details_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Details;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TraceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeErrorResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeErrorResponse, Details), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Details_MetaData), NewProp_Details_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeErrorResponse, ErrorCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorCode_MetaData), NewProp_ErrorCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeErrorResponse, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_TraceId = { "TraceId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeErrorResponse, TraceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceId_MetaData), NewProp_TraceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_TraceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ChallengeErrorResponse",
	Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::PropPointers),
	sizeof(FChallengeErrorResponse),
	alignof(FChallengeErrorResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChallengeErrorResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeErrorResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChallengeErrorResponse.InnerSingleton, Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChallengeErrorResponse.InnerSingleton;
}
// End ScriptStruct FChallengeErrorResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeErrorResponse_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChallengeErrorResponse::StaticStruct, Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewStructOps, TEXT("ChallengeErrorResponse"), &Z_Registration_Info_UScriptStruct_ChallengeErrorResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChallengeErrorResponse), 2404015138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeErrorResponse_h_2713538790(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeErrorResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeErrorResponse_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

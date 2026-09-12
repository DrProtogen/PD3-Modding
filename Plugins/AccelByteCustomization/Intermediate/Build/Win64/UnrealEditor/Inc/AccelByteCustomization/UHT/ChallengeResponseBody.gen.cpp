// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeResponseBody.h"
#include "AccelByteCustomization/Public/ChallengeReward.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeResponseBody() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeResponseBody();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeReward();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FChallengeResponseBody
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChallengeResponseBody;
class UScriptStruct* FChallengeResponseBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeResponseBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChallengeResponseBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeResponseBody, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeResponseBody"));
	}
	return Z_Registration_Info_UScriptStruct_ChallengeResponseBody.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeResponseBody>()
{
	return FChallengeResponseBody::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChallengeResponseBody_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_challengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/ChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_challengeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/ChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/ChallengeResponseBody.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_challengeId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_challengeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_reward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeResponseBody>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeId = { "challengeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeResponseBody, challengeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_challengeId_MetaData), NewProp_challengeId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeName = { "challengeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeResponseBody, challengeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_challengeName_MetaData), NewProp_challengeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_reward = { "reward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeResponseBody, reward), Z_Construct_UScriptStruct_FChallengeReward, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reward_MetaData), NewProp_reward_MetaData) }; // 1805742468
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_reward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ChallengeResponseBody",
	Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::PropPointers),
	sizeof(FChallengeResponseBody),
	alignof(FChallengeResponseBody),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChallengeResponseBody()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeResponseBody.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChallengeResponseBody.InnerSingleton, Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChallengeResponseBody.InnerSingleton;
}
// End ScriptStruct FChallengeResponseBody

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeResponseBody_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChallengeResponseBody::StaticStruct, Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewStructOps, TEXT("ChallengeResponseBody"), &Z_Registration_Info_UScriptStruct_ChallengeResponseBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChallengeResponseBody), 1302993497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeResponseBody_h_1796144016(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeResponseBody_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeResponseBody_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

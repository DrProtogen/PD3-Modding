// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeNotifPayload.h"
#include "AccelByteCustomization/Public/ChallengeReward.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeNotifPayload() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeNotifPayload();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeReward();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FChallengeNotifPayload
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChallengeNotifPayload;
class UScriptStruct* FChallengeNotifPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeNotifPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChallengeNotifPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeNotifPayload, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeNotifPayload"));
	}
	return Z_Registration_Info_UScriptStruct_ChallengeNotifPayload.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeNotifPayload>()
{
	return FChallengeNotifPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeNotifPayload.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_challengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeNotifPayload" },
		{ "ModuleRelativePath", "Public/ChallengeNotifPayload.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_challengeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeNotifPayload" },
		{ "ModuleRelativePath", "Public/ChallengeNotifPayload.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeNotifPayload" },
		{ "ModuleRelativePath", "Public/ChallengeNotifPayload.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_challengeId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_challengeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_reward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeNotifPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeId = { "challengeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeNotifPayload, challengeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_challengeId_MetaData), NewProp_challengeId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeName = { "challengeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeNotifPayload, challengeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_challengeName_MetaData), NewProp_challengeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_reward = { "reward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeNotifPayload, reward), Z_Construct_UScriptStruct_FChallengeReward, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reward_MetaData), NewProp_reward_MetaData) }; // 1805742468
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_reward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ChallengeNotifPayload",
	Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::PropPointers),
	sizeof(FChallengeNotifPayload),
	alignof(FChallengeNotifPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChallengeNotifPayload()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeNotifPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChallengeNotifPayload.InnerSingleton, Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChallengeNotifPayload.InnerSingleton;
}
// End ScriptStruct FChallengeNotifPayload

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeNotifPayload_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChallengeNotifPayload::StaticStruct, Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewStructOps, TEXT("ChallengeNotifPayload"), &Z_Registration_Info_UScriptStruct_ChallengeNotifPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChallengeNotifPayload), 3050470787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeNotifPayload_h_581264574(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeNotifPayload_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeNotifPayload_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

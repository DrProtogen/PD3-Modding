// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeReward.h"
#include "AccelByteCustomization/Public/ChallengeStat.h"
#include "AccelByteCustomization/Public/RewardItemDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeReward() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeReward();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeStat();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FRewardItemDetails();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FChallengeReward
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChallengeReward;
class UScriptStruct* FChallengeReward::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeReward.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChallengeReward.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeReward, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeReward"));
	}
	return Z_Registration_Info_UScriptStruct_ChallengeReward.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeReward>()
{
	return FChallengeReward::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChallengeReward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeReward.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeReward" },
		{ "ModuleRelativePath", "Public/ChallengeReward.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeReward" },
		{ "ModuleRelativePath", "Public/ChallengeReward.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeReward" },
		{ "ModuleRelativePath", "Public/ChallengeReward.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RewardId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeReward>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChallengeStat, METADATA_PARAMS(0, nullptr) }; // 3346561176
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeReward, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 3346561176
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRewardItemDetails, METADATA_PARAMS(0, nullptr) }; // 1170928534
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeReward, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1170928534
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_RewardId = { "RewardId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeReward, RewardId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardId_MetaData), NewProp_RewardId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_RewardId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeReward_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ChallengeReward",
	Z_Construct_UScriptStruct_FChallengeReward_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeReward_Statics::PropPointers),
	sizeof(FChallengeReward),
	alignof(FChallengeReward),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeReward_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChallengeReward_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChallengeReward()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeReward.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChallengeReward.InnerSingleton, Z_Construct_UScriptStruct_FChallengeReward_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChallengeReward.InnerSingleton;
}
// End ScriptStruct FChallengeReward

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeReward_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChallengeReward::StaticStruct, Z_Construct_UScriptStruct_FChallengeReward_Statics::NewStructOps, TEXT("ChallengeReward"), &Z_Registration_Info_UScriptStruct_ChallengeReward, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChallengeReward), 1805742468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeReward_h_592886425(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeReward_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeReward_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

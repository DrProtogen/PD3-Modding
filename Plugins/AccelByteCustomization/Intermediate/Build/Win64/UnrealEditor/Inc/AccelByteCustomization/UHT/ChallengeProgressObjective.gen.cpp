// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeProgressObjective.h"
#include "AccelByteCustomization/Public/ChallengeProgressStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeProgressObjective() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressObjective();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressStat();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FChallengeProgressObjective
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChallengeProgressObjective;
class UScriptStruct* FChallengeProgressObjective::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeProgressObjective.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChallengeProgressObjective.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeProgressObjective, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeProgressObjective"));
	}
	return Z_Registration_Info_UScriptStruct_ChallengeProgressObjective.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeProgressObjective>()
{
	return FChallengeProgressObjective::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeProgressObjective.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressObjective" },
		{ "ModuleRelativePath", "Public/ChallengeProgressObjective.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeProgressObjective>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChallengeProgressStat, METADATA_PARAMS(0, nullptr) }; // 3424674315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgressObjective, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 3424674315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::NewProp_Stats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::NewProp_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ChallengeProgressObjective",
	Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::PropPointers),
	sizeof(FChallengeProgressObjective),
	alignof(FChallengeProgressObjective),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressObjective()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeProgressObjective.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChallengeProgressObjective.InnerSingleton, Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChallengeProgressObjective.InnerSingleton;
}
// End ScriptStruct FChallengeProgressObjective

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressObjective_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChallengeProgressObjective::StaticStruct, Z_Construct_UScriptStruct_FChallengeProgressObjective_Statics::NewStructOps, TEXT("ChallengeProgressObjective"), &Z_Registration_Info_UScriptStruct_ChallengeProgressObjective, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChallengeProgressObjective), 2416671730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressObjective_h_346109256(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressObjective_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressObjective_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

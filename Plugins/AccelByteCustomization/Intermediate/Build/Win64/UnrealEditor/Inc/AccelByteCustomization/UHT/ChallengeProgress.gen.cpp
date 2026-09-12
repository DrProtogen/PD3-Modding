// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeProgress.h"
#include "AccelByteCustomization/Public/ChallengeProgressObjective.h"
#include "AccelByteCustomization/Public/ChallengeProgressPrerequisite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeProgress() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgress();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressObjective();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressPrerequisite();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FChallengeProgress
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChallengeProgress;
class UScriptStruct* FChallengeProgress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeProgress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChallengeProgress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeProgress, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeProgress"));
	}
	return Z_Registration_Info_UScriptStruct_ChallengeProgress.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeProgress>()
{
	return FChallengeProgress::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChallengeProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeProgress.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prerequisite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgress" },
		{ "ModuleRelativePath", "Public/ChallengeProgress.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgress" },
		{ "ModuleRelativePath", "Public/ChallengeProgress.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Prerequisite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objective;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeProgress>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Prerequisite = { "Prerequisite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgress, Prerequisite), Z_Construct_UScriptStruct_FChallengeProgressPrerequisite, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prerequisite_MetaData), NewProp_Prerequisite_MetaData) }; // 3517242103
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgress, Objective), Z_Construct_UScriptStruct_FChallengeProgressObjective, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objective_MetaData), NewProp_Objective_MetaData) }; // 2416671730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Prerequisite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewProp_Objective,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeProgress_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ChallengeProgress",
	Z_Construct_UScriptStruct_FChallengeProgress_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgress_Statics::PropPointers),
	sizeof(FChallengeProgress),
	alignof(FChallengeProgress),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgress_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChallengeProgress_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgress()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeProgress.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChallengeProgress.InnerSingleton, Z_Construct_UScriptStruct_FChallengeProgress_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChallengeProgress.InnerSingleton;
}
// End ScriptStruct FChallengeProgress

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgress_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChallengeProgress::StaticStruct, Z_Construct_UScriptStruct_FChallengeProgress_Statics::NewStructOps, TEXT("ChallengeProgress"), &Z_Registration_Info_UScriptStruct_ChallengeProgress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChallengeProgress), 561731545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgress_h_2525632851(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgress_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgress_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeProgressStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeProgressStat() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressStat();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FChallengeProgressStat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChallengeProgressStat;
class UScriptStruct* FChallengeProgressStat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeProgressStat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChallengeProgressStat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeProgressStat, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeProgressStat"));
	}
	return Z_Registration_Info_UScriptStruct_ChallengeProgressStat.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeProgressStat>()
{
	return FChallengeProgressStat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChallengeProgressStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeProgressStat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressStat" },
		{ "ModuleRelativePath", "Public/ChallengeProgressStat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressStat" },
		{ "ModuleRelativePath", "Public/ChallengeProgressStat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressStat" },
		{ "ModuleRelativePath", "Public/ChallengeProgressStat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatCode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeProgressStat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgressStat, StatCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCode_MetaData), NewProp_StatCode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgressStat, CurrentValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentValue_MetaData), NewProp_CurrentValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgressStat, TargetValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetValue_MetaData), NewProp_TargetValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_StatCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_CurrentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_TargetValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ChallengeProgressStat",
	Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::PropPointers),
	sizeof(FChallengeProgressStat),
	alignof(FChallengeProgressStat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressStat()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeProgressStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChallengeProgressStat.InnerSingleton, Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChallengeProgressStat.InnerSingleton;
}
// End ScriptStruct FChallengeProgressStat

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressStat_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChallengeProgressStat::StaticStruct, Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewStructOps, TEXT("ChallengeProgressStat"), &Z_Registration_Info_UScriptStruct_ChallengeProgressStat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChallengeProgressStat), 3424674315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressStat_h_3438184014(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressStat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressStat_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

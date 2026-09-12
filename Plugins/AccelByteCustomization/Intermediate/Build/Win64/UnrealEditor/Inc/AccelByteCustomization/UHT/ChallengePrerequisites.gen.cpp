// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengePrerequisites.h"
#include "AccelByteCustomization/Public/ChallengeStat.h"
#include "AccelByteCustomization/Public/ItemDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengePrerequisites() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengePrerequisites();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeStat();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FItemDetails();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FChallengePrerequisites
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChallengePrerequisites;
class UScriptStruct* FChallengePrerequisites::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengePrerequisites.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChallengePrerequisites.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengePrerequisites, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengePrerequisites"));
	}
	return Z_Registration_Info_UScriptStruct_ChallengePrerequisites.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengePrerequisites>()
{
	return FChallengePrerequisites::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChallengePrerequisites_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengePrerequisites.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedChallengeIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengePrerequisites" },
		{ "ModuleRelativePath", "Public/ChallengePrerequisites.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengePrerequisites" },
		{ "ModuleRelativePath", "Public/ChallengePrerequisites.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengePrerequisites" },
		{ "ModuleRelativePath", "Public/ChallengePrerequisites.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CompletedChallengeIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompletedChallengeIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengePrerequisites>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_CompletedChallengeIds_Inner = { "CompletedChallengeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_CompletedChallengeIds = { "CompletedChallengeIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengePrerequisites, CompletedChallengeIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedChallengeIds_MetaData), NewProp_CompletedChallengeIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChallengeStat, METADATA_PARAMS(0, nullptr) }; // 3346561176
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengePrerequisites, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 3346561176
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemDetails, METADATA_PARAMS(0, nullptr) }; // 2791348731
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengePrerequisites, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 2791348731
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_CompletedChallengeIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_CompletedChallengeIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_Stats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_Stats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ChallengePrerequisites",
	Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::PropPointers),
	sizeof(FChallengePrerequisites),
	alignof(FChallengePrerequisites),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChallengePrerequisites()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengePrerequisites.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChallengePrerequisites.InnerSingleton, Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChallengePrerequisites.InnerSingleton;
}
// End ScriptStruct FChallengePrerequisites

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengePrerequisites_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChallengePrerequisites::StaticStruct, Z_Construct_UScriptStruct_FChallengePrerequisites_Statics::NewStructOps, TEXT("ChallengePrerequisites"), &Z_Registration_Info_UScriptStruct_ChallengePrerequisites, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChallengePrerequisites), 1398259355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengePrerequisites_h_3385335642(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengePrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengePrerequisites_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeProgressPrerequisite.h"
#include "AccelByteCustomization/Public/ChallengeProgressItem.h"
#include "AccelByteCustomization/Public/ChallengeProgressStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeProgressPrerequisite() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressItem();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressPrerequisite();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressStat();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FChallengeProgressPrerequisite
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChallengeProgressPrerequisite;
class UScriptStruct* FChallengeProgressPrerequisite::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeProgressPrerequisite.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChallengeProgressPrerequisite.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeProgressPrerequisite, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeProgressPrerequisite"));
	}
	return Z_Registration_Info_UScriptStruct_ChallengeProgressPrerequisite.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeProgressPrerequisite>()
{
	return FChallengeProgressPrerequisite::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeProgressPrerequisite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressPrerequisite" },
		{ "ModuleRelativePath", "Public/ChallengeProgressPrerequisite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressPrerequisite" },
		{ "ModuleRelativePath", "Public/ChallengeProgressPrerequisite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeProgressPrerequisite>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChallengeProgressStat, METADATA_PARAMS(0, nullptr) }; // 3424674315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgressPrerequisite, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 3424674315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChallengeProgressItem, METADATA_PARAMS(0, nullptr) }; // 895964844
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgressPrerequisite, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 895964844
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::NewProp_Stats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::NewProp_Stats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ChallengeProgressPrerequisite",
	Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::PropPointers),
	sizeof(FChallengeProgressPrerequisite),
	alignof(FChallengeProgressPrerequisite),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressPrerequisite()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeProgressPrerequisite.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChallengeProgressPrerequisite.InnerSingleton, Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChallengeProgressPrerequisite.InnerSingleton;
}
// End ScriptStruct FChallengeProgressPrerequisite

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressPrerequisite_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChallengeProgressPrerequisite::StaticStruct, Z_Construct_UScriptStruct_FChallengeProgressPrerequisite_Statics::NewStructOps, TEXT("ChallengeProgressPrerequisite"), &Z_Registration_Info_UScriptStruct_ChallengeProgressPrerequisite, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChallengeProgressPrerequisite), 3517242103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressPrerequisite_h_660008576(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressPrerequisite_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressPrerequisite_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

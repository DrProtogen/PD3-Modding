// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/PlayerRecordProgressSummary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerRecordProgressSummary() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordProgressSummary();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FPlayerRecordProgressSummary
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerRecordProgressSummary;
class UScriptStruct* FPlayerRecordProgressSummary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerRecordProgressSummary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerRecordProgressSummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerRecordProgressSummary, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("PlayerRecordProgressSummary"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerRecordProgressSummary.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FPlayerRecordProgressSummary>()
{
	return FPlayerRecordProgressSummary::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerRecordProgressSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordProgressSummary" },
		{ "ModuleRelativePath", "Public/PlayerRecordProgressSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordProgressSummary" },
		{ "ModuleRelativePath", "Public/PlayerRecordProgressSummary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Total;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerRecordProgressSummary>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerRecordProgressSummary, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerRecordProgressSummary, Total), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Total_MetaData), NewProp_Total_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::NewProp_Total,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"PlayerRecordProgressSummary",
	Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::PropPointers),
	sizeof(FPlayerRecordProgressSummary),
	alignof(FPlayerRecordProgressSummary),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordProgressSummary()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerRecordProgressSummary.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerRecordProgressSummary.InnerSingleton, Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerRecordProgressSummary.InnerSingleton;
}
// End ScriptStruct FPlayerRecordProgressSummary

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordProgressSummary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerRecordProgressSummary::StaticStruct, Z_Construct_UScriptStruct_FPlayerRecordProgressSummary_Statics::NewStructOps, TEXT("PlayerRecordProgressSummary"), &Z_Registration_Info_UScriptStruct_PlayerRecordProgressSummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerRecordProgressSummary), 1269970618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordProgressSummary_h_2001209378(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordProgressSummary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordProgressSummary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

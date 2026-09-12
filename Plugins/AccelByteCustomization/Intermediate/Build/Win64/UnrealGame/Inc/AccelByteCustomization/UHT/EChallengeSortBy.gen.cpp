// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/EChallengeSortBy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChallengeSortBy() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UEnum* Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin Enum EChallengeSortBy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChallengeSortBy;
static UEnum* EChallengeSortBy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChallengeSortBy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChallengeSortBy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("EChallengeSortBy"));
	}
	return Z_Registration_Info_UEnum_EChallengeSortBy.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UEnum* StaticEnum<EChallengeSortBy>()
{
	return EChallengeSortBy_StaticEnum();
}
struct Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EChallengeSortBy.h" },
		{ "NAME_ASC.Name", "EChallengeSortBy::NAME_ASC" },
		{ "NAME_DESC.Name", "EChallengeSortBy::NAME_DESC" },
		{ "NONE.Name", "EChallengeSortBy::NONE" },
		{ "ORDER_ASC.Name", "EChallengeSortBy::ORDER_ASC" },
		{ "ORDER_DESC.Name", "EChallengeSortBy::ORDER_DESC" },
		{ "STATUS_ASC.Name", "EChallengeSortBy::STATUS_ASC" },
		{ "STATUS_DESC.Name", "EChallengeSortBy::STATUS_DESC" },
		{ "TAGS_ASC.Name", "EChallengeSortBy::TAGS_ASC" },
		{ "TAGS_DESC.Name", "EChallengeSortBy::TAGS_DESC" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChallengeSortBy::NONE", (int64)EChallengeSortBy::NONE },
		{ "EChallengeSortBy::NAME_ASC", (int64)EChallengeSortBy::NAME_ASC },
		{ "EChallengeSortBy::NAME_DESC", (int64)EChallengeSortBy::NAME_DESC },
		{ "EChallengeSortBy::ORDER_ASC", (int64)EChallengeSortBy::ORDER_ASC },
		{ "EChallengeSortBy::ORDER_DESC", (int64)EChallengeSortBy::ORDER_DESC },
		{ "EChallengeSortBy::TAGS_ASC", (int64)EChallengeSortBy::TAGS_ASC },
		{ "EChallengeSortBy::TAGS_DESC", (int64)EChallengeSortBy::TAGS_DESC },
		{ "EChallengeSortBy::STATUS_ASC", (int64)EChallengeSortBy::STATUS_ASC },
		{ "EChallengeSortBy::STATUS_DESC", (int64)EChallengeSortBy::STATUS_DESC },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	"EChallengeSortBy",
	"EChallengeSortBy",
	Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy()
{
	if (!Z_Registration_Info_UEnum_EChallengeSortBy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChallengeSortBy.InnerSingleton, Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChallengeSortBy.InnerSingleton;
}
// End Enum EChallengeSortBy

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EChallengeSortBy_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChallengeSortBy_StaticEnum, TEXT("EChallengeSortBy"), &Z_Registration_Info_UEnum_EChallengeSortBy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 923924168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EChallengeSortBy_h_516958504(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EChallengeSortBy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EChallengeSortBy_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

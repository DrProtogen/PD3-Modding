// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/EServerChallengeSortBy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEServerChallengeSortBy() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UEnum* Z_Construct_UEnum_AccelByteCustomization_EServerChallengeSortBy();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin Enum EServerChallengeSortBy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EServerChallengeSortBy;
static UEnum* EServerChallengeSortBy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EServerChallengeSortBy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EServerChallengeSortBy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AccelByteCustomization_EServerChallengeSortBy, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("EServerChallengeSortBy"));
	}
	return Z_Registration_Info_UEnum_EServerChallengeSortBy.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UEnum* StaticEnum<EServerChallengeSortBy>()
{
	return EServerChallengeSortBy_StaticEnum();
}
struct Z_Construct_UEnum_AccelByteCustomization_EServerChallengeSortBy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CREATED_ASC.Name", "EServerChallengeSortBy::CREATED_ASC" },
		{ "CREATED_DESC.Name", "EServerChallengeSortBy::CREATED_DESC" },
		{ "ModuleRelativePath", "Public/EServerChallengeSortBy.h" },
		{ "NAME_ASC.Name", "EServerChallengeSortBy::NAME_ASC" },
		{ "NAME_DESC.Name", "EServerChallengeSortBy::NAME_DESC" },
		{ "NONE.Name", "EServerChallengeSortBy::NONE" },
		{ "ORDER_ASC.Name", "EServerChallengeSortBy::ORDER_ASC" },
		{ "ORDER_DESC.Name", "EServerChallengeSortBy::ORDER_DESC" },
		{ "TAGS_ASC.Name", "EServerChallengeSortBy::TAGS_ASC" },
		{ "TAGS_DESC.Name", "EServerChallengeSortBy::TAGS_DESC" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EServerChallengeSortBy::NONE", (int64)EServerChallengeSortBy::NONE },
		{ "EServerChallengeSortBy::NAME_ASC", (int64)EServerChallengeSortBy::NAME_ASC },
		{ "EServerChallengeSortBy::NAME_DESC", (int64)EServerChallengeSortBy::NAME_DESC },
		{ "EServerChallengeSortBy::ORDER_ASC", (int64)EServerChallengeSortBy::ORDER_ASC },
		{ "EServerChallengeSortBy::ORDER_DESC", (int64)EServerChallengeSortBy::ORDER_DESC },
		{ "EServerChallengeSortBy::TAGS_ASC", (int64)EServerChallengeSortBy::TAGS_ASC },
		{ "EServerChallengeSortBy::TAGS_DESC", (int64)EServerChallengeSortBy::TAGS_DESC },
		{ "EServerChallengeSortBy::CREATED_ASC", (int64)EServerChallengeSortBy::CREATED_ASC },
		{ "EServerChallengeSortBy::CREATED_DESC", (int64)EServerChallengeSortBy::CREATED_DESC },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AccelByteCustomization_EServerChallengeSortBy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	"EServerChallengeSortBy",
	"EServerChallengeSortBy",
	Z_Construct_UEnum_AccelByteCustomization_EServerChallengeSortBy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AccelByteCustomization_EServerChallengeSortBy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AccelByteCustomization_EServerChallengeSortBy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AccelByteCustomization_EServerChallengeSortBy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AccelByteCustomization_EServerChallengeSortBy()
{
	if (!Z_Registration_Info_UEnum_EServerChallengeSortBy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EServerChallengeSortBy.InnerSingleton, Z_Construct_UEnum_AccelByteCustomization_EServerChallengeSortBy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EServerChallengeSortBy.InnerSingleton;
}
// End Enum EServerChallengeSortBy

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EServerChallengeSortBy_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EServerChallengeSortBy_StaticEnum, TEXT("EServerChallengeSortBy"), &Z_Registration_Info_UEnum_EServerChallengeSortBy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1279049178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EServerChallengeSortBy_h_3892925924(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EServerChallengeSortBy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EServerChallengeSortBy_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

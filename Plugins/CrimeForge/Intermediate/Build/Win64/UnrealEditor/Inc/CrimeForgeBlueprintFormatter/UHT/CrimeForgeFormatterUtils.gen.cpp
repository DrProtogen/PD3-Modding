// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForgeBlueprintFormatter/Public/CrimeForgeFormatterUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrimeForgeFormatterUtils() {}

// Begin Cross Module References
CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeBreakMethod();
CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeRoundingMethod();
UPackage* Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter();
// End Cross Module References

// Begin Enum ECrimeForgeRoundingMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrimeForgeRoundingMethod;
static UEnum* ECrimeForgeRoundingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeRoundingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrimeForgeRoundingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeRoundingMethod, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("ECrimeForgeRoundingMethod"));
	}
	return Z_Registration_Info_UEnum_ECrimeForgeRoundingMethod.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeRoundingMethod>()
{
	return ECrimeForgeRoundingMethod_StaticEnum();
}
struct Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeRoundingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ceil.DisplayName", "Ceil" },
		{ "Ceil.Name", "ECrimeForgeRoundingMethod::Ceil" },
		{ "Floor.DisplayName", "Floor" },
		{ "Floor.Name", "ECrimeForgeRoundingMethod::Floor" },
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterUtils.h" },
		{ "Round.DisplayName", "Round" },
		{ "Round.Name", "ECrimeForgeRoundingMethod::Round" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrimeForgeRoundingMethod::Round", (int64)ECrimeForgeRoundingMethod::Round },
		{ "ECrimeForgeRoundingMethod::Ceil", (int64)ECrimeForgeRoundingMethod::Ceil },
		{ "ECrimeForgeRoundingMethod::Floor", (int64)ECrimeForgeRoundingMethod::Floor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeRoundingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	"ECrimeForgeRoundingMethod",
	"ECrimeForgeRoundingMethod",
	Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeRoundingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeRoundingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeRoundingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeRoundingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeRoundingMethod()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeRoundingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrimeForgeRoundingMethod.InnerSingleton, Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeRoundingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrimeForgeRoundingMethod.InnerSingleton;
}
// End Enum ECrimeForgeRoundingMethod

// Begin Enum ECrimeForgeBreakMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrimeForgeBreakMethod;
static UEnum* ECrimeForgeBreakMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeBreakMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrimeForgeBreakMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeBreakMethod, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("ECrimeForgeBreakMethod"));
	}
	return Z_Registration_Info_UEnum_ECrimeForgeBreakMethod.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeBreakMethod>()
{
	return ECrimeForgeBreakMethod_StaticEnum();
}
struct Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeBreakMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Name", "ECrimeForgeBreakMethod::Always" },
		{ "Default.Name", "ECrimeForgeBreakMethod::Default" },
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterUtils.h" },
		{ "Never.Name", "ECrimeForgeBreakMethod::Never" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrimeForgeBreakMethod::Default", (int64)ECrimeForgeBreakMethod::Default },
		{ "ECrimeForgeBreakMethod::Always", (int64)ECrimeForgeBreakMethod::Always },
		{ "ECrimeForgeBreakMethod::Never", (int64)ECrimeForgeBreakMethod::Never },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeBreakMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	"ECrimeForgeBreakMethod",
	"ECrimeForgeBreakMethod",
	Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeBreakMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeBreakMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeBreakMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeBreakMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeBreakMethod()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeBreakMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrimeForgeBreakMethod.InnerSingleton, Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeBreakMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrimeForgeBreakMethod.InnerSingleton;
}
// End Enum ECrimeForgeBreakMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterUtils_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECrimeForgeRoundingMethod_StaticEnum, TEXT("ECrimeForgeRoundingMethod"), &Z_Registration_Info_UEnum_ECrimeForgeRoundingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2267507693U) },
		{ ECrimeForgeBreakMethod_StaticEnum, TEXT("ECrimeForgeBreakMethod"), &Z_Registration_Info_UEnum_ECrimeForgeBreakMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3000731121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterUtils_h_4077267114(TEXT("/Script/CrimeForgeBlueprintFormatter"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterUtils_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

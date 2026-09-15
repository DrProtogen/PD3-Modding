// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForgeBlueprintFormatter/Public/CrimeForgeFormatterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrimeForgeFormatterSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
CRIMEFORGEBLUEPRINTFORMATTER_API UClass* Z_Construct_UClass_UCrimeForgeFormatterSettings();
CRIMEFORGEBLUEPRINTFORMATTER_API UClass* Z_Construct_UClass_UCrimeForgeFormatterSettings_NoRegister();
CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting();
CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment();
CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle();
CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType();
CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle();
CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle();
CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
UPackage* Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter();
// End Cross Module References

// Begin Enum ECrimeForgeNodeFormattingStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrimeForgeNodeFormattingStyle;
static UEnum* ECrimeForgeNodeFormattingStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeNodeFormattingStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrimeForgeNodeFormattingStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("ECrimeForgeNodeFormattingStyle"));
	}
	return Z_Registration_Info_UEnum_ECrimeForgeNodeFormattingStyle.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeNodeFormattingStyle>()
{
	return ECrimeForgeNodeFormattingStyle_StaticEnum();
}
struct Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Compact.Name", "ECrimeForgeNodeFormattingStyle::Compact" },
		{ "Expanded.Name", "ECrimeForgeNodeFormattingStyle::Expanded" },
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrimeForgeNodeFormattingStyle::Expanded", (int64)ECrimeForgeNodeFormattingStyle::Expanded },
		{ "ECrimeForgeNodeFormattingStyle::Compact", (int64)ECrimeForgeNodeFormattingStyle::Compact },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	"ECrimeForgeNodeFormattingStyle",
	"ECrimeForgeNodeFormattingStyle",
	Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeNodeFormattingStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrimeForgeNodeFormattingStyle.InnerSingleton, Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrimeForgeNodeFormattingStyle.InnerSingleton;
}
// End Enum ECrimeForgeNodeFormattingStyle

// Begin Enum ECrimeForgeParameterFormattingStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrimeForgeParameterFormattingStyle;
static UEnum* ECrimeForgeParameterFormattingStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeParameterFormattingStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrimeForgeParameterFormattingStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("ECrimeForgeParameterFormattingStyle"));
	}
	return Z_Registration_Info_UEnum_ECrimeForgeParameterFormattingStyle.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeParameterFormattingStyle>()
{
	return ECrimeForgeParameterFormattingStyle_StaticEnum();
}
struct Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Helixing.Name", "ECrimeForgeParameterFormattingStyle::Helixing" },
		{ "LeftSide.Name", "ECrimeForgeParameterFormattingStyle::LeftSide" },
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrimeForgeParameterFormattingStyle::Helixing", (int64)ECrimeForgeParameterFormattingStyle::Helixing },
		{ "ECrimeForgeParameterFormattingStyle::LeftSide", (int64)ECrimeForgeParameterFormattingStyle::LeftSide },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	"ECrimeForgeParameterFormattingStyle",
	"ECrimeForgeParameterFormattingStyle",
	Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeParameterFormattingStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrimeForgeParameterFormattingStyle.InnerSingleton, Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrimeForgeParameterFormattingStyle.InnerSingleton;
}
// End Enum ECrimeForgeParameterFormattingStyle

// Begin Enum ECrimeForgeWiringStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrimeForgeWiringStyle;
static UEnum* ECrimeForgeWiringStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeWiringStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrimeForgeWiringStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("ECrimeForgeWiringStyle"));
	}
	return Z_Registration_Info_UEnum_ECrimeForgeWiringStyle.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeWiringStyle>()
{
	return ECrimeForgeWiringStyle_StaticEnum();
}
struct Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysMerge.Name", "ECrimeForgeWiringStyle::AlwaysMerge" },
		{ "MergeWhenNear.Name", "ECrimeForgeWiringStyle::MergeWhenNear" },
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
		{ "SingleWire.Name", "ECrimeForgeWiringStyle::SingleWire" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrimeForgeWiringStyle::AlwaysMerge", (int64)ECrimeForgeWiringStyle::AlwaysMerge },
		{ "ECrimeForgeWiringStyle::MergeWhenNear", (int64)ECrimeForgeWiringStyle::MergeWhenNear },
		{ "ECrimeForgeWiringStyle::SingleWire", (int64)ECrimeForgeWiringStyle::SingleWire },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	"ECrimeForgeWiringStyle",
	"ECrimeForgeWiringStyle",
	Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeWiringStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrimeForgeWiringStyle.InnerSingleton, Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrimeForgeWiringStyle.InnerSingleton;
}
// End Enum ECrimeForgeWiringStyle

// Begin Enum ECrimeForgeAutoFormatting
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrimeForgeAutoFormatting;
static UEnum* ECrimeForgeAutoFormatting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeAutoFormatting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrimeForgeAutoFormatting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("ECrimeForgeAutoFormatting"));
	}
	return Z_Registration_Info_UEnum_ECrimeForgeAutoFormatting.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeAutoFormatting>()
{
	return ECrimeForgeAutoFormatting_StaticEnum();
}
struct Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FormatAllConnected.Name", "ECrimeForgeAutoFormatting::FormatAllConnected" },
		{ "FormatSingleConnected.Name", "ECrimeForgeAutoFormatting::FormatSingleConnected" },
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
		{ "Never.Name", "ECrimeForgeAutoFormatting::Never" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrimeForgeAutoFormatting::Never", (int64)ECrimeForgeAutoFormatting::Never },
		{ "ECrimeForgeAutoFormatting::FormatAllConnected", (int64)ECrimeForgeAutoFormatting::FormatAllConnected },
		{ "ECrimeForgeAutoFormatting::FormatSingleConnected", (int64)ECrimeForgeAutoFormatting::FormatSingleConnected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	"ECrimeForgeAutoFormatting",
	"ECrimeForgeAutoFormatting",
	Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeAutoFormatting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrimeForgeAutoFormatting.InnerSingleton, Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrimeForgeAutoFormatting.InnerSingleton;
}
// End Enum ECrimeForgeAutoFormatting

// Begin Enum ECrimeForgeFormatAllStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrimeForgeFormatAllStyle;
static UEnum* ECrimeForgeFormatAllStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeFormatAllStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrimeForgeFormatAllStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("ECrimeForgeFormatAllStyle"));
	}
	return Z_Registration_Info_UEnum_ECrimeForgeFormatAllStyle.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeFormatAllStyle>()
{
	return ECrimeForgeFormatAllStyle_StaticEnum();
}
struct Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
		{ "NodeType.Name", "ECrimeForgeFormatAllStyle::NodeType" },
		{ "Simple.Name", "ECrimeForgeFormatAllStyle::Simple" },
		{ "Smart.Name", "ECrimeForgeFormatAllStyle::Smart" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrimeForgeFormatAllStyle::Simple", (int64)ECrimeForgeFormatAllStyle::Simple },
		{ "ECrimeForgeFormatAllStyle::Smart", (int64)ECrimeForgeFormatAllStyle::Smart },
		{ "ECrimeForgeFormatAllStyle::NodeType", (int64)ECrimeForgeFormatAllStyle::NodeType },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	"ECrimeForgeFormatAllStyle",
	"ECrimeForgeFormatAllStyle",
	Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeFormatAllStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrimeForgeFormatAllStyle.InnerSingleton, Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrimeForgeFormatAllStyle.InnerSingleton;
}
// End Enum ECrimeForgeFormatAllStyle

// Begin Enum ECrimeForgeFormatAllHorizontalAlignment
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrimeForgeFormatAllHorizontalAlignment;
static UEnum* ECrimeForgeFormatAllHorizontalAlignment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeFormatAllHorizontalAlignment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrimeForgeFormatAllHorizontalAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("ECrimeForgeFormatAllHorizontalAlignment"));
	}
	return Z_Registration_Info_UEnum_ECrimeForgeFormatAllHorizontalAlignment.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeFormatAllHorizontalAlignment>()
{
	return ECrimeForgeFormatAllHorizontalAlignment_StaticEnum();
}
struct Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment.Name", "ECrimeForgeFormatAllHorizontalAlignment::Comment" },
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
		{ "RootNode.Name", "ECrimeForgeFormatAllHorizontalAlignment::RootNode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrimeForgeFormatAllHorizontalAlignment::RootNode", (int64)ECrimeForgeFormatAllHorizontalAlignment::RootNode },
		{ "ECrimeForgeFormatAllHorizontalAlignment::Comment", (int64)ECrimeForgeFormatAllHorizontalAlignment::Comment },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	"ECrimeForgeFormatAllHorizontalAlignment",
	"ECrimeForgeFormatAllHorizontalAlignment",
	Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeFormatAllHorizontalAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrimeForgeFormatAllHorizontalAlignment.InnerSingleton, Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrimeForgeFormatAllHorizontalAlignment.InnerSingleton;
}
// End Enum ECrimeForgeFormatAllHorizontalAlignment

// Begin Enum ECrimeForgeFormatterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrimeForgeFormatterType;
static UEnum* ECrimeForgeFormatterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeFormatterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrimeForgeFormatterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("ECrimeForgeFormatterType"));
	}
	return Z_Registration_Info_UEnum_ECrimeForgeFormatterType.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeFormatterType>()
{
	return ECrimeForgeFormatterType_StaticEnum();
}
struct Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BehaviorTree.Name", "ECrimeForgeFormatterType::BehaviorTree" },
		{ "Blueprint.Name", "ECrimeForgeFormatterType::Blueprint" },
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
		{ "Simple.Name", "ECrimeForgeFormatterType::Simple" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrimeForgeFormatterType::Blueprint", (int64)ECrimeForgeFormatterType::Blueprint },
		{ "ECrimeForgeFormatterType::BehaviorTree", (int64)ECrimeForgeFormatterType::BehaviorTree },
		{ "ECrimeForgeFormatterType::Simple", (int64)ECrimeForgeFormatterType::Simple },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	"ECrimeForgeFormatterType",
	"ECrimeForgeFormatterType",
	Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeFormatterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrimeForgeFormatterType.InnerSingleton, Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrimeForgeFormatterType.InnerSingleton;
}
// End Enum ECrimeForgeFormatterType

// Begin Class UCrimeForgeFormatterSettings
void UCrimeForgeFormatterSettings::StaticRegisterNativesUCrimeForgeFormatterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrimeForgeFormatterSettings);
UClass* Z_Construct_UClass_UCrimeForgeFormatterSettings_NoRegister()
{
	return UCrimeForgeFormatterSettings::StaticClass();
}
struct Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Internal formatter configuration used by CrimeForge.\n *\n * This is the single settings object for the Blueprint formatter. The formatter no longer\n * maintains a second reflected settings struct for Blueprint graphs; all formatting options\n * live directly on this UObject so Unreal Header Tool sees only one CrimeForgeFormatterSettings\n * reflected type.\n */" },
#endif
		{ "IncludePath", "CrimeForgeFormatterSettings.h" },
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal formatter configuration used by CrimeForge.\n\nThis is the single settings object for the Blueprint formatter. The formatter no longer\nmaintains a second reflected settings struct for Blueprint graphs; all formatting options\nlive directly on this UObject so Unreal Header Tool sees only one CrimeForgeFormatterSettings\nreflected type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Core Blueprint graph formatting settings.\n" },
#endif
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core Blueprint graph formatting settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatterType_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoFormatting_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatterDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecPinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGloballyDisableAutoFormatting_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormattingStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionWiringStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterWiringStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseKnotNodePool_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateKnotNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExpandNodesByHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandNodesMaxDist_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExpandParametersByHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandParametersMaxDist_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExpandNodesAheadOfParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitHelixingHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelixingHeightMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableHelixingWithMultiplePins_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableHelixingOnlyCountsParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableHelixingPinCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleNodeMaxHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatAllStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatAllHorizontalAlignment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatAllPadding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFormatAllPaddingInComment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatAllPaddingInComment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintParameterPadding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintExecutionKnotXOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintExecutionKnotLoopingOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintParameterKnotXOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintParameterKnotLoopingOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTreatDelegatesAsExecutionPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCenterBranches_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRequiredBranches_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCenterBranchesForParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRequiredBranchesForParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalPinSpacing_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterVerticalPinSpacing_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintKnotTrackSpacing_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullKnotVerticalThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnotNodeDistanceThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCommentPadding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddKnotNodesToComments_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentNodePadding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRefreshCommentTitleBarSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFasterFormatting_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignExecNodesTo8x8Grid_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveAllBeforeFormatting_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAssetEditors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Kept only because generic Blueprint helper code consults these names.\n" },
#endif
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kept only because generic Blueprint helper code consults these names." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseBlueprintFormattingForTheseGraphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FormatterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FormatterType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoFormatting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoFormatting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FormatterDirection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExecPinName;
	static void NewProp_bGloballyDisableAutoFormatting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGloballyDisableAutoFormatting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FormattingStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FormattingStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParameterStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ParameterStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionWiringStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionWiringStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParameterWiringStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ParameterWiringStyle;
	static void NewProp_bUseKnotNodePool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseKnotNodePool;
	static void NewProp_bCreateKnotNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateKnotNodes;
	static void NewProp_bExpandNodesByHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandNodesByHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpandNodesMaxDist;
	static void NewProp_bExpandParametersByHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandParametersByHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpandParametersMaxDist;
	static void NewProp_bExpandNodesAheadOfParameters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandNodesAheadOfParameters;
	static void NewProp_bSnapToGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToGrid;
	static void NewProp_bLimitHelixingHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitHelixingHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HelixingHeightMax;
	static void NewProp_bDisableHelixingWithMultiplePins_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableHelixingWithMultiplePins;
	static void NewProp_bDisableHelixingOnlyCountsParameters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableHelixingOnlyCountsParameters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DisableHelixingPinCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SingleNodeMaxHeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FormatAllStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FormatAllStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FormatAllHorizontalAlignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FormatAllHorizontalAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FormatAllPadding;
	static void NewProp_bUseFormatAllPaddingInComment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFormatAllPaddingInComment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FormatAllPaddingInComment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintParameterPadding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintExecutionKnotXOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintExecutionKnotLoopingOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintParameterKnotXOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintParameterKnotLoopingOffset;
	static void NewProp_bTreatDelegatesAsExecutionPins_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatDelegatesAsExecutionPins;
	static void NewProp_bCenterBranches_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterBranches;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRequiredBranches;
	static void NewProp_bCenterBranchesForParameters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterBranchesForParameters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRequiredBranchesForParameters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalPinSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterVerticalPinSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintKnotTrackSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CullKnotVerticalThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KnotNodeDistanceThreshold;
	static void NewProp_bApplyCommentPadding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCommentPadding;
	static void NewProp_bAddKnotNodesToComments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddKnotNodesToComments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommentNodePadding;
	static void NewProp_bRefreshCommentTitleBarSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshCommentTitleBarSize;
	static void NewProp_bEnableFasterFormatting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFasterFormatting;
	static void NewProp_bAlignExecNodesTo8x8Grid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignExecNodesTo8x8Grid;
	static void NewProp_bSaveAllBeforeFormatting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveAllBeforeFormatting;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SupportedAssetEditors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedAssetEditors;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UseBlueprintFormattingForTheseGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UseBlueprintFormattingForTheseGraphs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrimeForgeFormatterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatterType = { "FormatterType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, FormatterType), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatterType_MetaData), NewProp_FormatterType_MetaData) }; // 1329485455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, Padding), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_AutoFormatting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_AutoFormatting = { "AutoFormatting", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, AutoFormatting), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeAutoFormatting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoFormatting_MetaData), NewProp_AutoFormatting_MetaData) }; // 3966978140
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatterDirection = { "FormatterDirection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, FormatterDirection), Z_Construct_UEnum_Engine_EEdGraphPinDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatterDirection_MetaData), NewProp_FormatterDirection_MetaData) }; // 3543720081
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNodes_MetaData), NewProp_RootNodes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ExecPinName = { "ExecPinName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, ExecPinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecPinName_MetaData), NewProp_ExecPinName_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bGloballyDisableAutoFormatting_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bGloballyDisableAutoFormatting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bGloballyDisableAutoFormatting = { "bGloballyDisableAutoFormatting", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bGloballyDisableAutoFormatting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGloballyDisableAutoFormatting_MetaData), NewProp_bGloballyDisableAutoFormatting_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormattingStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormattingStyle = { "FormattingStyle", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, FormattingStyle), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeNodeFormattingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormattingStyle_MetaData), NewProp_FormattingStyle_MetaData) }; // 3320662933
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ParameterStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ParameterStyle = { "ParameterStyle", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, ParameterStyle), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeParameterFormattingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterStyle_MetaData), NewProp_ParameterStyle_MetaData) }; // 3945188624
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ExecutionWiringStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ExecutionWiringStyle = { "ExecutionWiringStyle", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, ExecutionWiringStyle), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionWiringStyle_MetaData), NewProp_ExecutionWiringStyle_MetaData) }; // 120691573
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ParameterWiringStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ParameterWiringStyle = { "ParameterWiringStyle", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, ParameterWiringStyle), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeWiringStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterWiringStyle_MetaData), NewProp_ParameterWiringStyle_MetaData) }; // 120691573
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bUseKnotNodePool_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bUseKnotNodePool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bUseKnotNodePool = { "bUseKnotNodePool", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bUseKnotNodePool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseKnotNodePool_MetaData), NewProp_bUseKnotNodePool_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCreateKnotNodes_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bCreateKnotNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCreateKnotNodes = { "bCreateKnotNodes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCreateKnotNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateKnotNodes_MetaData), NewProp_bCreateKnotNodes_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandNodesByHeight_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bExpandNodesByHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandNodesByHeight = { "bExpandNodesByHeight", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandNodesByHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExpandNodesByHeight_MetaData), NewProp_bExpandNodesByHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ExpandNodesMaxDist = { "ExpandNodesMaxDist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, ExpandNodesMaxDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandNodesMaxDist_MetaData), NewProp_ExpandNodesMaxDist_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandParametersByHeight_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bExpandParametersByHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandParametersByHeight = { "bExpandParametersByHeight", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandParametersByHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExpandParametersByHeight_MetaData), NewProp_bExpandParametersByHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ExpandParametersMaxDist = { "ExpandParametersMaxDist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, ExpandParametersMaxDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandParametersMaxDist_MetaData), NewProp_ExpandParametersMaxDist_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandNodesAheadOfParameters_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bExpandNodesAheadOfParameters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandNodesAheadOfParameters = { "bExpandNodesAheadOfParameters", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandNodesAheadOfParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExpandNodesAheadOfParameters_MetaData), NewProp_bExpandNodesAheadOfParameters_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bSnapToGrid_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bSnapToGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bSnapToGrid = { "bSnapToGrid", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bSnapToGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToGrid_MetaData), NewProp_bSnapToGrid_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bLimitHelixingHeight_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bLimitHelixingHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bLimitHelixingHeight = { "bLimitHelixingHeight", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bLimitHelixingHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitHelixingHeight_MetaData), NewProp_bLimitHelixingHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_HelixingHeightMax = { "HelixingHeightMax", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, HelixingHeightMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelixingHeightMax_MetaData), NewProp_HelixingHeightMax_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bDisableHelixingWithMultiplePins_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bDisableHelixingWithMultiplePins = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bDisableHelixingWithMultiplePins = { "bDisableHelixingWithMultiplePins", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bDisableHelixingWithMultiplePins_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableHelixingWithMultiplePins_MetaData), NewProp_bDisableHelixingWithMultiplePins_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bDisableHelixingOnlyCountsParameters_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bDisableHelixingOnlyCountsParameters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bDisableHelixingOnlyCountsParameters = { "bDisableHelixingOnlyCountsParameters", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bDisableHelixingOnlyCountsParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableHelixingOnlyCountsParameters_MetaData), NewProp_bDisableHelixingOnlyCountsParameters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_DisableHelixingPinCount = { "DisableHelixingPinCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, DisableHelixingPinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableHelixingPinCount_MetaData), NewProp_DisableHelixingPinCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_SingleNodeMaxHeight = { "SingleNodeMaxHeight", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, SingleNodeMaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleNodeMaxHeight_MetaData), NewProp_SingleNodeMaxHeight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllStyle = { "FormatAllStyle", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, FormatAllStyle), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatAllStyle_MetaData), NewProp_FormatAllStyle_MetaData) }; // 2203512001
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllHorizontalAlignment = { "FormatAllHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, FormatAllHorizontalAlignment), Z_Construct_UEnum_CrimeForgeBlueprintFormatter_ECrimeForgeFormatAllHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatAllHorizontalAlignment_MetaData), NewProp_FormatAllHorizontalAlignment_MetaData) }; // 2308499195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllPadding = { "FormatAllPadding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, FormatAllPadding), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatAllPadding_MetaData), NewProp_FormatAllPadding_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bUseFormatAllPaddingInComment_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bUseFormatAllPaddingInComment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bUseFormatAllPaddingInComment = { "bUseFormatAllPaddingInComment", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bUseFormatAllPaddingInComment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFormatAllPaddingInComment_MetaData), NewProp_bUseFormatAllPaddingInComment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllPaddingInComment = { "FormatAllPaddingInComment", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, FormatAllPaddingInComment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatAllPaddingInComment_MetaData), NewProp_FormatAllPaddingInComment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintParameterPadding = { "BlueprintParameterPadding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, BlueprintParameterPadding), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintParameterPadding_MetaData), NewProp_BlueprintParameterPadding_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintExecutionKnotXOffset = { "BlueprintExecutionKnotXOffset", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, BlueprintExecutionKnotXOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintExecutionKnotXOffset_MetaData), NewProp_BlueprintExecutionKnotXOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintExecutionKnotLoopingOffset = { "BlueprintExecutionKnotLoopingOffset", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, BlueprintExecutionKnotLoopingOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintExecutionKnotLoopingOffset_MetaData), NewProp_BlueprintExecutionKnotLoopingOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintParameterKnotXOffset = { "BlueprintParameterKnotXOffset", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, BlueprintParameterKnotXOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintParameterKnotXOffset_MetaData), NewProp_BlueprintParameterKnotXOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintParameterKnotLoopingOffset = { "BlueprintParameterKnotLoopingOffset", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, BlueprintParameterKnotLoopingOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintParameterKnotLoopingOffset_MetaData), NewProp_BlueprintParameterKnotLoopingOffset_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bTreatDelegatesAsExecutionPins = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bTreatDelegatesAsExecutionPins = { "bTreatDelegatesAsExecutionPins", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTreatDelegatesAsExecutionPins_MetaData), NewProp_bTreatDelegatesAsExecutionPins_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCenterBranches_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bCenterBranches = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCenterBranches = { "bCenterBranches", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCenterBranches_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCenterBranches_MetaData), NewProp_bCenterBranches_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_NumRequiredBranches = { "NumRequiredBranches", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, NumRequiredBranches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRequiredBranches_MetaData), NewProp_NumRequiredBranches_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCenterBranchesForParameters_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bCenterBranchesForParameters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCenterBranchesForParameters = { "bCenterBranchesForParameters", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCenterBranchesForParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCenterBranchesForParameters_MetaData), NewProp_bCenterBranchesForParameters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_NumRequiredBranchesForParameters = { "NumRequiredBranchesForParameters", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, NumRequiredBranchesForParameters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRequiredBranchesForParameters_MetaData), NewProp_NumRequiredBranchesForParameters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_VerticalPinSpacing = { "VerticalPinSpacing", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, VerticalPinSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalPinSpacing_MetaData), NewProp_VerticalPinSpacing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ParameterVerticalPinSpacing = { "ParameterVerticalPinSpacing", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, ParameterVerticalPinSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterVerticalPinSpacing_MetaData), NewProp_ParameterVerticalPinSpacing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintKnotTrackSpacing = { "BlueprintKnotTrackSpacing", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, BlueprintKnotTrackSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintKnotTrackSpacing_MetaData), NewProp_BlueprintKnotTrackSpacing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_CullKnotVerticalThreshold = { "CullKnotVerticalThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, CullKnotVerticalThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullKnotVerticalThreshold_MetaData), NewProp_CullKnotVerticalThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_KnotNodeDistanceThreshold = { "KnotNodeDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, KnotNodeDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnotNodeDistanceThreshold_MetaData), NewProp_KnotNodeDistanceThreshold_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bApplyCommentPadding_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bApplyCommentPadding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bApplyCommentPadding = { "bApplyCommentPadding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bApplyCommentPadding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyCommentPadding_MetaData), NewProp_bApplyCommentPadding_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bAddKnotNodesToComments_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bAddKnotNodesToComments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bAddKnotNodesToComments = { "bAddKnotNodesToComments", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bAddKnotNodesToComments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddKnotNodesToComments_MetaData), NewProp_bAddKnotNodesToComments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_CommentNodePadding = { "CommentNodePadding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, CommentNodePadding), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentNodePadding_MetaData), NewProp_CommentNodePadding_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bRefreshCommentTitleBarSize_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bRefreshCommentTitleBarSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bRefreshCommentTitleBarSize = { "bRefreshCommentTitleBarSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bRefreshCommentTitleBarSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRefreshCommentTitleBarSize_MetaData), NewProp_bRefreshCommentTitleBarSize_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bEnableFasterFormatting_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bEnableFasterFormatting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bEnableFasterFormatting = { "bEnableFasterFormatting", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bEnableFasterFormatting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFasterFormatting_MetaData), NewProp_bEnableFasterFormatting_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bAlignExecNodesTo8x8Grid_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bAlignExecNodesTo8x8Grid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bAlignExecNodesTo8x8Grid = { "bAlignExecNodesTo8x8Grid", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bAlignExecNodesTo8x8Grid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignExecNodesTo8x8Grid_MetaData), NewProp_bAlignExecNodesTo8x8Grid_MetaData) };
void Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bSaveAllBeforeFormatting_SetBit(void* Obj)
{
	((UCrimeForgeFormatterSettings*)Obj)->bSaveAllBeforeFormatting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bSaveAllBeforeFormatting = { "bSaveAllBeforeFormatting", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeFormatterSettings), &Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bSaveAllBeforeFormatting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveAllBeforeFormatting_MetaData), NewProp_bSaveAllBeforeFormatting_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_SupportedAssetEditors_Inner = { "SupportedAssetEditors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_SupportedAssetEditors = { "SupportedAssetEditors", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, SupportedAssetEditors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAssetEditors_MetaData), NewProp_SupportedAssetEditors_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_Inner = { "UseBlueprintFormattingForTheseGraphs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs = { "UseBlueprintFormattingForTheseGraphs", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeFormatterSettings, UseBlueprintFormattingForTheseGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseBlueprintFormattingForTheseGraphs_MetaData), NewProp_UseBlueprintFormattingForTheseGraphs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_AutoFormatting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_AutoFormatting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatterDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_RootNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_RootNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ExecPinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bGloballyDisableAutoFormatting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormattingStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormattingStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ParameterStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ParameterStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ExecutionWiringStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ExecutionWiringStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ParameterWiringStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ParameterWiringStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bUseKnotNodePool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCreateKnotNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandNodesByHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ExpandNodesMaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandParametersByHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ExpandParametersMaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bExpandNodesAheadOfParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bSnapToGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bLimitHelixingHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_HelixingHeightMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bDisableHelixingWithMultiplePins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bDisableHelixingOnlyCountsParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_DisableHelixingPinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_SingleNodeMaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllHorizontalAlignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllHorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bUseFormatAllPaddingInComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_FormatAllPaddingInComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintParameterPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintExecutionKnotXOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintExecutionKnotLoopingOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintParameterKnotXOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintParameterKnotLoopingOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bTreatDelegatesAsExecutionPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCenterBranches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_NumRequiredBranches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bCenterBranchesForParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_NumRequiredBranchesForParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_VerticalPinSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_ParameterVerticalPinSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_BlueprintKnotTrackSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_CullKnotVerticalThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_KnotNodeDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bApplyCommentPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bAddKnotNodesToComments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_CommentNodePadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bRefreshCommentTitleBarSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bEnableFasterFormatting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bAlignExecNodesTo8x8Grid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_bSaveAllBeforeFormatting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_SupportedAssetEditors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_SupportedAssetEditors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::ClassParams = {
	&UCrimeForgeFormatterSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrimeForgeFormatterSettings()
{
	if (!Z_Registration_Info_UClass_UCrimeForgeFormatterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrimeForgeFormatterSettings.OuterSingleton, Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrimeForgeFormatterSettings.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UClass* StaticClass<UCrimeForgeFormatterSettings>()
{
	return UCrimeForgeFormatterSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrimeForgeFormatterSettings);
UCrimeForgeFormatterSettings::~UCrimeForgeFormatterSettings() {}
// End Class UCrimeForgeFormatterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECrimeForgeNodeFormattingStyle_StaticEnum, TEXT("ECrimeForgeNodeFormattingStyle"), &Z_Registration_Info_UEnum_ECrimeForgeNodeFormattingStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3320662933U) },
		{ ECrimeForgeParameterFormattingStyle_StaticEnum, TEXT("ECrimeForgeParameterFormattingStyle"), &Z_Registration_Info_UEnum_ECrimeForgeParameterFormattingStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3945188624U) },
		{ ECrimeForgeWiringStyle_StaticEnum, TEXT("ECrimeForgeWiringStyle"), &Z_Registration_Info_UEnum_ECrimeForgeWiringStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 120691573U) },
		{ ECrimeForgeAutoFormatting_StaticEnum, TEXT("ECrimeForgeAutoFormatting"), &Z_Registration_Info_UEnum_ECrimeForgeAutoFormatting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3966978140U) },
		{ ECrimeForgeFormatAllStyle_StaticEnum, TEXT("ECrimeForgeFormatAllStyle"), &Z_Registration_Info_UEnum_ECrimeForgeFormatAllStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2203512001U) },
		{ ECrimeForgeFormatAllHorizontalAlignment_StaticEnum, TEXT("ECrimeForgeFormatAllHorizontalAlignment"), &Z_Registration_Info_UEnum_ECrimeForgeFormatAllHorizontalAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2308499195U) },
		{ ECrimeForgeFormatterType_StaticEnum, TEXT("ECrimeForgeFormatterType"), &Z_Registration_Info_UEnum_ECrimeForgeFormatterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1329485455U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrimeForgeFormatterSettings, UCrimeForgeFormatterSettings::StaticClass, TEXT("UCrimeForgeFormatterSettings"), &Z_Registration_Info_UClass_UCrimeForgeFormatterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrimeForgeFormatterSettings), 366385854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_2685225996(TEXT("/Script/CrimeForgeBlueprintFormatter"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

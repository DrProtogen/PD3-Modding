// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrimeForgeFormatterSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIMEFORGEBLUEPRINTFORMATTER_CrimeForgeFormatterSettings_generated_h
#error "CrimeForgeFormatterSettings.generated.h already included, missing '#pragma once' in CrimeForgeFormatterSettings.h"
#endif
#define CRIMEFORGEBLUEPRINTFORMATTER_CrimeForgeFormatterSettings_generated_h

#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrimeForgeFormatterSettings(); \
	friend struct Z_Construct_UClass_UCrimeForgeFormatterSettings_Statics; \
public: \
	DECLARE_CLASS(UCrimeForgeFormatterSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrimeForgeBlueprintFormatter"), NO_API) \
	DECLARE_SERIALIZER(UCrimeForgeFormatterSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCrimeForgeFormatterSettings(UCrimeForgeFormatterSettings&&); \
	UCrimeForgeFormatterSettings(const UCrimeForgeFormatterSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrimeForgeFormatterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrimeForgeFormatterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCrimeForgeFormatterSettings) \
	NO_API virtual ~UCrimeForgeFormatterSettings();


#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_32_PROLOG
#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIMEFORGEBLUEPRINTFORMATTER_API UClass* StaticClass<class UCrimeForgeFormatterSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterSettings_h


#define FOREACH_ENUM_ECRIMEFORGENODEFORMATTINGSTYLE(op) \
	op(ECrimeForgeNodeFormattingStyle::Expanded) \
	op(ECrimeForgeNodeFormattingStyle::Compact) 

enum class ECrimeForgeNodeFormattingStyle : uint8;
template<> struct TIsUEnumClass<ECrimeForgeNodeFormattingStyle> { enum { Value = true }; };
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeNodeFormattingStyle>();

#define FOREACH_ENUM_ECRIMEFORGEPARAMETERFORMATTINGSTYLE(op) \
	op(ECrimeForgeParameterFormattingStyle::Helixing) \
	op(ECrimeForgeParameterFormattingStyle::LeftSide) 

enum class ECrimeForgeParameterFormattingStyle : uint8;
template<> struct TIsUEnumClass<ECrimeForgeParameterFormattingStyle> { enum { Value = true }; };
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeParameterFormattingStyle>();

#define FOREACH_ENUM_ECRIMEFORGEWIRINGSTYLE(op) \
	op(ECrimeForgeWiringStyle::AlwaysMerge) \
	op(ECrimeForgeWiringStyle::MergeWhenNear) \
	op(ECrimeForgeWiringStyle::SingleWire) 

enum class ECrimeForgeWiringStyle : uint8;
template<> struct TIsUEnumClass<ECrimeForgeWiringStyle> { enum { Value = true }; };
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeWiringStyle>();

#define FOREACH_ENUM_ECRIMEFORGEAUTOFORMATTING(op) \
	op(ECrimeForgeAutoFormatting::Never) \
	op(ECrimeForgeAutoFormatting::FormatAllConnected) \
	op(ECrimeForgeAutoFormatting::FormatSingleConnected) 

enum class ECrimeForgeAutoFormatting : uint8;
template<> struct TIsUEnumClass<ECrimeForgeAutoFormatting> { enum { Value = true }; };
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeAutoFormatting>();

#define FOREACH_ENUM_ECRIMEFORGEFORMATALLSTYLE(op) \
	op(ECrimeForgeFormatAllStyle::Simple) \
	op(ECrimeForgeFormatAllStyle::Smart) \
	op(ECrimeForgeFormatAllStyle::NodeType) 

enum class ECrimeForgeFormatAllStyle : uint8;
template<> struct TIsUEnumClass<ECrimeForgeFormatAllStyle> { enum { Value = true }; };
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeFormatAllStyle>();

#define FOREACH_ENUM_ECRIMEFORGEFORMATALLHORIZONTALALIGNMENT(op) \
	op(ECrimeForgeFormatAllHorizontalAlignment::RootNode) \
	op(ECrimeForgeFormatAllHorizontalAlignment::Comment) 

enum class ECrimeForgeFormatAllHorizontalAlignment : uint8;
template<> struct TIsUEnumClass<ECrimeForgeFormatAllHorizontalAlignment> { enum { Value = true }; };
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeFormatAllHorizontalAlignment>();

#define FOREACH_ENUM_ECRIMEFORGEFORMATTERTYPE(op) \
	op(ECrimeForgeFormatterType::Blueprint) \
	op(ECrimeForgeFormatterType::BehaviorTree) \
	op(ECrimeForgeFormatterType::Simple) 

enum class ECrimeForgeFormatterType : uint8;
template<> struct TIsUEnumClass<ECrimeForgeFormatterType> { enum { Value = true }; };
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeFormatterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

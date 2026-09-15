// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForgeJsonImporter/Public/Settings/CrimeForgeJsonImporterSettings.h"
#include "CrimeForge/Public/CrimeForgeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrimeForgeJsonImporterSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
CRIMEFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FRSettings();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UCrimeForgeJsonImporterSettings();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UCrimeForgeJsonImporterSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_CrimeForgeJsonImporter();
// End Cross Module References

// Begin Class UCrimeForgeJsonImporterSettings
void UCrimeForgeJsonImporterSettings::StaticRegisterNativesUCrimeForgeJsonImporterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrimeForgeJsonImporterSettings);
UClass* Z_Construct_UClass_UCrimeForgeJsonImporterSettings_NoRegister()
{
	return UCrimeForgeJsonImporterSettings::StaticClass();
}
struct Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Hidden compatibility object used only to read settings saved by older CrimeForge builds.\n *\n * This intentionally does not derive from UDeveloperSettings, so it does not create a second\n * Project Settings entry. Values are migrated once into UCrimeForgeSettings by the importer module.\n */" },
#endif
		{ "IncludePath", "Settings/CrimeForgeJsonImporterSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/CrimeForgeJsonImporterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hidden compatibility object used only to read settings saved by older CrimeForge builds.\n\nThis intentionally does not derive from UDeveloperSettings, so it does not create a second\nProject Settings entry. Values are migrated once into UCrimeForgeSettings by the importer module." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingsFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/CrimeForgeJsonImporterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AESKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/CrimeForgeJsonImporterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/CrimeForgeJsonImporterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableExperiments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/CrimeForgeJsonImporterSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappingsFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AESKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetSettings;
	static void NewProp_EnableExperiments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableExperiments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrimeForgeJsonImporterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::NewProp_MappingsFile = { "MappingsFile", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeJsonImporterSettings, MappingsFile), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingsFile_MetaData), NewProp_MappingsFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::NewProp_AESKey = { "AESKey", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeJsonImporterSettings, AESKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AESKey_MetaData), NewProp_AESKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::NewProp_AssetSettings = { "AssetSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeJsonImporterSettings, AssetSettings), Z_Construct_UScriptStruct_FRSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetSettings_MetaData), NewProp_AssetSettings_MetaData) }; // 2987723626
void Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::NewProp_EnableExperiments_SetBit(void* Obj)
{
	((UCrimeForgeJsonImporterSettings*)Obj)->EnableExperiments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::NewProp_EnableExperiments = { "EnableExperiments", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeJsonImporterSettings), &Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::NewProp_EnableExperiments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableExperiments_MetaData), NewProp_EnableExperiments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::NewProp_MappingsFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::NewProp_AESKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::NewProp_AssetSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::NewProp_EnableExperiments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForgeJsonImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::ClassParams = {
	&UCrimeForgeJsonImporterSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrimeForgeJsonImporterSettings()
{
	if (!Z_Registration_Info_UClass_UCrimeForgeJsonImporterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrimeForgeJsonImporterSettings.OuterSingleton, Z_Construct_UClass_UCrimeForgeJsonImporterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrimeForgeJsonImporterSettings.OuterSingleton;
}
template<> CRIMEFORGEJSONIMPORTER_API UClass* StaticClass<UCrimeForgeJsonImporterSettings>()
{
	return UCrimeForgeJsonImporterSettings::StaticClass();
}
UCrimeForgeJsonImporterSettings::UCrimeForgeJsonImporterSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrimeForgeJsonImporterSettings);
UCrimeForgeJsonImporterSettings::~UCrimeForgeJsonImporterSettings() {}
// End Class UCrimeForgeJsonImporterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Settings_CrimeForgeJsonImporterSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrimeForgeJsonImporterSettings, UCrimeForgeJsonImporterSettings::StaticClass, TEXT("UCrimeForgeJsonImporterSettings"), &Z_Registration_Info_UClass_UCrimeForgeJsonImporterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrimeForgeJsonImporterSettings), 3630904840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Settings_CrimeForgeJsonImporterSettings_h_2128259837(TEXT("/Script/CrimeForgeJsonImporter"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Settings_CrimeForgeJsonImporterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Settings_CrimeForgeJsonImporterSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

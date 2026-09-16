// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForge/Public/CrimeForgeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrimeForgeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
CRIMEFORGE_API UClass* Z_Construct_UClass_UCrimeForgeSettings();
CRIMEFORGE_API UClass* Z_Construct_UClass_UCrimeForgeSettings_NoRegister();
CRIMEFORGE_API UEnum* Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType();
CRIMEFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FRAnimationBlueprintSettings();
CRIMEFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FRMaterialSettings();
CRIMEFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FRSettings();
CRIMEFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FRTextureSettings();
UPackage* Z_Construct_UPackage__Script_CrimeForge();
// End Cross Module References

// Begin Enum ECrimeForgeStartGameType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrimeForgeStartGameType;
static UEnum* ECrimeForgeStartGameType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeStartGameType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrimeForgeStartGameType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType, (UObject*)Z_Construct_UPackage__Script_CrimeForge(), TEXT("ECrimeForgeStartGameType"));
	}
	return Z_Registration_Info_UEnum_ECrimeForgeStartGameType.OuterSingleton;
}
template<> CRIMEFORGE_API UEnum* StaticEnum<ECrimeForgeStartGameType>()
{
	return ECrimeForgeStartGameType_StaticEnum();
}
struct Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EPIC_GAMES.DisplayName", "Epic Games Store" },
		{ "EPIC_GAMES.Name", "ECrimeForgeStartGameType::EPIC_GAMES" },
		{ "MICROSOFT_STORE.DisplayName", "Microsoft Store / Xbox" },
		{ "MICROSOFT_STORE.Name", "ECrimeForgeStartGameType::MICROSOFT_STORE" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
		{ "NONE.DisplayName", "Do not launch" },
		{ "NONE.Name", "ECrimeForgeStartGameType::NONE" },
		{ "STEAM.DisplayName", "Steam" },
		{ "STEAM.Name", "ECrimeForgeStartGameType::STEAM" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrimeForgeStartGameType::NONE", (int64)ECrimeForgeStartGameType::NONE },
		{ "ECrimeForgeStartGameType::STEAM", (int64)ECrimeForgeStartGameType::STEAM },
		{ "ECrimeForgeStartGameType::MICROSOFT_STORE", (int64)ECrimeForgeStartGameType::MICROSOFT_STORE },
		{ "ECrimeForgeStartGameType::EPIC_GAMES", (int64)ECrimeForgeStartGameType::EPIC_GAMES },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrimeForge,
	nullptr,
	"ECrimeForgeStartGameType",
	"ECrimeForgeStartGameType",
	Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType()
{
	if (!Z_Registration_Info_UEnum_ECrimeForgeStartGameType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrimeForgeStartGameType.InnerSingleton, Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrimeForgeStartGameType.InnerSingleton;
}
// End Enum ECrimeForgeStartGameType

// Begin ScriptStruct FRAnimationBlueprintSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RAnimationBlueprintSettings;
class UScriptStruct* FRAnimationBlueprintSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RAnimationBlueprintSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RAnimationBlueprintSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRAnimationBlueprintSettings, (UObject*)Z_Construct_UPackage__Script_CrimeForge(), TEXT("RAnimationBlueprintSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RAnimationBlueprintSettings.OuterSingleton;
}
template<> CRIMEFORGE_API UScriptStruct* StaticStruct<FRAnimationBlueprintSettings>()
{
	return FRAnimationBlueprintSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Legacy importer setting structs are kept here so existing config can be migrated into the\n * unified CrimeForge settings object without keeping a second visible Project Settings page. */" },
#endif
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Legacy importer setting structs are kept here so existing config can be migrated into the\n* unified CrimeForge settings object without keeping a second visible Project Settings page." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIDComments_MetaData[] = {
		{ "Category", "RAnimationBlueprintSettings" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NodeIDComments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NodeIDComments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRAnimationBlueprintSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::NewProp_NodeIDComments_SetBit(void* Obj)
{
	((FRAnimationBlueprintSettings*)Obj)->NodeIDComments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::NewProp_NodeIDComments = { "NodeIDComments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRAnimationBlueprintSettings), &Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::NewProp_NodeIDComments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIDComments_MetaData), NewProp_NodeIDComments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::NewProp_NodeIDComments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForge,
	nullptr,
	&NewStructOps,
	"RAnimationBlueprintSettings",
	Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::PropPointers),
	sizeof(FRAnimationBlueprintSettings),
	alignof(FRAnimationBlueprintSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRAnimationBlueprintSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RAnimationBlueprintSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RAnimationBlueprintSettings.InnerSingleton, Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RAnimationBlueprintSettings.InnerSingleton;
}
// End ScriptStruct FRAnimationBlueprintSettings

// Begin ScriptStruct FRTextureSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTextureSettings;
class UScriptStruct* FRTextureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTextureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTextureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTextureSettings, (UObject*)Z_Construct_UPackage__Script_CrimeForge(), TEXT("RTextureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RTextureSettings.OuterSingleton;
}
template<> CRIMEFORGE_API UScriptStruct* StaticStruct<FRTextureSettings>()
{
	return FRTextureSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRTextureSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectExistingTextures_MetaData[] = {
		{ "Category", "RTextureSettings" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReflectExistingTextures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReflectExistingTextures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTextureSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRTextureSettings_Statics::NewProp_ReflectExistingTextures_SetBit(void* Obj)
{
	((FRTextureSettings*)Obj)->ReflectExistingTextures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRTextureSettings_Statics::NewProp_ReflectExistingTextures = { "ReflectExistingTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRTextureSettings), &Z_Construct_UScriptStruct_FRTextureSettings_Statics::NewProp_ReflectExistingTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectExistingTextures_MetaData), NewProp_ReflectExistingTextures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTextureSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTextureSettings_Statics::NewProp_ReflectExistingTextures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTextureSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTextureSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForge,
	nullptr,
	&NewStructOps,
	"RTextureSettings",
	Z_Construct_UScriptStruct_FRTextureSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTextureSettings_Statics::PropPointers),
	sizeof(FRTextureSettings),
	alignof(FRTextureSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTextureSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRTextureSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRTextureSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RTextureSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTextureSettings.InnerSingleton, Z_Construct_UScriptStruct_FRTextureSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RTextureSettings.InnerSingleton;
}
// End ScriptStruct FRTextureSettings

// Begin ScriptStruct FRMaterialSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RMaterialSettings;
class UScriptStruct* FRMaterialSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RMaterialSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RMaterialSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRMaterialSettings, (UObject*)Z_Construct_UPackage__Script_CrimeForge(), TEXT("RMaterialSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RMaterialSettings.OuterSingleton;
}
template<> CRIMEFORGE_API UScriptStruct* StaticStruct<FRMaterialSettings>()
{
	return FRMaterialSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRMaterialSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stubs_MetaData[] = {
		{ "Category", "RMaterialSettings" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Stubs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Stubs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRMaterialSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRMaterialSettings_Statics::NewProp_Stubs_SetBit(void* Obj)
{
	((FRMaterialSettings*)Obj)->Stubs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRMaterialSettings_Statics::NewProp_Stubs = { "Stubs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRMaterialSettings), &Z_Construct_UScriptStruct_FRMaterialSettings_Statics::NewProp_Stubs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stubs_MetaData), NewProp_Stubs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRMaterialSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRMaterialSettings_Statics::NewProp_Stubs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRMaterialSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRMaterialSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForge,
	nullptr,
	&NewStructOps,
	"RMaterialSettings",
	Z_Construct_UScriptStruct_FRMaterialSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRMaterialSettings_Statics::PropPointers),
	sizeof(FRMaterialSettings),
	alignof(FRMaterialSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRMaterialSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRMaterialSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRMaterialSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RMaterialSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RMaterialSettings.InnerSingleton, Z_Construct_UScriptStruct_FRMaterialSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RMaterialSettings.InnerSingleton;
}
// End ScriptStruct FRMaterialSettings

// Begin ScriptStruct FRSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RSettings;
class UScriptStruct* FRSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRSettings, (UObject*)Z_Construct_UPackage__Script_CrimeForge(), TEXT("RSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RSettings.OuterSingleton;
}
template<> CRIMEFORGE_API UScriptStruct* StaticStruct<FRSettings>()
{
	return FRSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationBlueprint_MetaData[] = {
		{ "Category", "RSettings" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "RSettings" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "RSettings" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveAssets_MetaData[] = {
		{ "Category", "RSettings" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoFormatBlueprintGraphs_MetaData[] = {
		{ "Category", "RSettings" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportBlueprintDependenciesBeforeGraphs_MetaData[] = {
		{ "Category", "RSettings" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationBlueprint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static void NewProp_SaveAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveAssets;
	static void NewProp_AutoFormatBlueprintGraphs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoFormatBlueprintGraphs;
	static void NewProp_ImportBlueprintDependenciesBeforeGraphs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ImportBlueprintDependenciesBeforeGraphs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRSettings, AnimationBlueprint), Z_Construct_UScriptStruct_FRAnimationBlueprintSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationBlueprint_MetaData), NewProp_AnimationBlueprint_MetaData) }; // 2519318313
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRSettings, Texture), Z_Construct_UScriptStruct_FRTextureSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) }; // 1661392631
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRSettings, Material), Z_Construct_UScriptStruct_FRMaterialSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) }; // 3539753457
void Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_SaveAssets_SetBit(void* Obj)
{
	((FRSettings*)Obj)->SaveAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_SaveAssets = { "SaveAssets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRSettings), &Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_SaveAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveAssets_MetaData), NewProp_SaveAssets_MetaData) };
void Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_AutoFormatBlueprintGraphs_SetBit(void* Obj)
{
	((FRSettings*)Obj)->AutoFormatBlueprintGraphs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_AutoFormatBlueprintGraphs = { "AutoFormatBlueprintGraphs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRSettings), &Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_AutoFormatBlueprintGraphs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoFormatBlueprintGraphs_MetaData), NewProp_AutoFormatBlueprintGraphs_MetaData) };
void Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_ImportBlueprintDependenciesBeforeGraphs_SetBit(void* Obj)
{
	((FRSettings*)Obj)->ImportBlueprintDependenciesBeforeGraphs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_ImportBlueprintDependenciesBeforeGraphs = { "ImportBlueprintDependenciesBeforeGraphs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRSettings), &Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_ImportBlueprintDependenciesBeforeGraphs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportBlueprintDependenciesBeforeGraphs_MetaData), NewProp_ImportBlueprintDependenciesBeforeGraphs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_AnimationBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_SaveAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_AutoFormatBlueprintGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRSettings_Statics::NewProp_ImportBlueprintDependenciesBeforeGraphs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForge,
	nullptr,
	&NewStructOps,
	"RSettings",
	Z_Construct_UScriptStruct_FRSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRSettings_Statics::PropPointers),
	sizeof(FRSettings),
	alignof(FRSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RSettings.InnerSingleton, Z_Construct_UScriptStruct_FRSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RSettings.InnerSingleton;
}
// End ScriptStruct FRSettings

// Begin Class UCrimeForgeSettings
void UCrimeForgeSettings::StaticRegisterNativesUCrimeForgeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrimeForgeSettings);
UClass* Z_Construct_UClass_UCrimeForgeSettings_NoRegister()
{
	return UCrimeForgeSettings::StaticClass();
}
struct Z_Construct_UClass_UCrimeForgeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Single Project Settings object for all CrimeForge configuration.\n *\n * It is registered manually under Project Settings -> Plugins -> CrimeForge so the editor shows\n * one CrimeForge page with normal expandable categories instead of separate General and JSON\n * Importer entries.\n */" },
#endif
		{ "IncludePath", "CrimeForgeSettings.h" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single Project Settings object for all CrimeForge configuration.\n\nIt is registered manually under Project Settings -> Plugins -> CrimeForge so the editor shows\none CrimeForge page with normal expandable categories instead of separate General and JSON\nImporter entries." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PD3GamePath_MetaData[] = {
		{ "Category", "General|PAYDAY 3" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* General ------------------------------------------------------------------------------ */" },
#endif
		{ "DisplayName", "PAYDAY 3 Game Path" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General ------------------------------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyModsToGame_MetaData[] = {
		{ "Category", "General|PAYDAY 3" },
		{ "DisplayName", "Copy Mods To Game" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchGameAfterPacking_MetaData[] = {
		{ "Category", "General|PAYDAY 3" },
		{ "DisplayName", "Launch Game After Packing" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableExperimentalFeatures_MetaData[] = {
		{ "Category", "Experimental" },
		{ "DisplayName", "Enable Experimental Features" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables experimental PAYDAY 3 asset reading/importing features and shows the JSON Import toolbar button. Disabled by default." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingsFile_MetaData[] = {
		{ "Category", "JSON Importer|PAYDAY 3 Data" },
		{ "DisplayName", "Mappings File" },
		{ "FilePathFilter", "usmap" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PAYDAY 3 .usmap mappings used by AssetReader/CUE4Parse." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AESKey_MetaData[] = {
		{ "Category", "JSON Importer|PAYDAY 3 Data" },
		{ "DisplayName", "AES Key" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
		{ "PasswordField", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PAYDAY 3 AES key used to decrypt encrypted .pak/.utoc/.ucas containers. Paste the full 256-bit key here. Leave blank only if the installed game data is not encrypted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveImportedAssets_MetaData[] = {
		{ "Category", "JSON Importer|Import" },
		{ "DisplayName", "Save Imported Assets" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFormatBlueprintGraphs_MetaData[] = {
		{ "Category", "JSON Importer|Import" },
		{ "DisplayName", "Auto Format Blueprint Graphs" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportBlueprintDependenciesBeforeGraphs_MetaData[] = {
		{ "Category", "JSON Importer|Import" },
		{ "DisplayName", "Import Blueprint Dependencies Before Graphs" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReflectExistingTextures_MetaData[] = {
		{ "Category", "JSON Importer|Textures" },
		{ "DisplayName", "Reimport Existing Textures" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import textures even when they already exist. This can significantly increase import time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterialStubs_MetaData[] = {
		{ "Category", "JSON Importer|Materials" },
		{ "DisplayName", "Create Material Stubs" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimationBlueprintNodeIdComments_MetaData[] = {
		{ "Category", "JSON Importer|Blueprints" },
		{ "DisplayName", "Store Animation Blueprint Node IDs In Comments" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableImporterExperiments_MetaData[] = {
		{ "Category", "JSON Importer|Experimental" },
		{ "DisplayName", "Enable Experiments" },
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModSelection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Internal state ----------------------------------------------------------------------- */" },
#endif
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal state -----------------------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMigratedLegacyJsonImporterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMigratedLegacyCrimeForgeGameSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PD3GamePath;
	static void NewProp_bCopyModsToGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyModsToGame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LaunchGameAfterPacking_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LaunchGameAfterPacking;
	static void NewProp_bEnableExperimentalFeatures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableExperimentalFeatures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappingsFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AESKey;
	static void NewProp_bSaveImportedAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveImportedAssets;
	static void NewProp_bAutoFormatBlueprintGraphs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFormatBlueprintGraphs;
	static void NewProp_bImportBlueprintDependenciesBeforeGraphs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportBlueprintDependenciesBeforeGraphs;
	static void NewProp_bReflectExistingTextures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReflectExistingTextures;
	static void NewProp_bCreateMaterialStubs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterialStubs;
	static void NewProp_bAnimationBlueprintNodeIdComments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimationBlueprintNodeIdComments;
	static void NewProp_bEnableImporterExperiments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableImporterExperiments;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ModSelection_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModSelection_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ModSelection;
	static void NewProp_bMigratedLegacyJsonImporterSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMigratedLegacyJsonImporterSettings;
	static void NewProp_bMigratedLegacyCrimeForgeGameSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMigratedLegacyCrimeForgeGameSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrimeForgeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_PD3GamePath = { "PD3GamePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeSettings, PD3GamePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PD3GamePath_MetaData), NewProp_PD3GamePath_MetaData) };
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bCopyModsToGame_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bCopyModsToGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bCopyModsToGame = { "bCopyModsToGame", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bCopyModsToGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyModsToGame_MetaData), NewProp_bCopyModsToGame_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_LaunchGameAfterPacking_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_LaunchGameAfterPacking = { "LaunchGameAfterPacking", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeSettings, LaunchGameAfterPacking), Z_Construct_UEnum_CrimeForge_ECrimeForgeStartGameType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchGameAfterPacking_MetaData), NewProp_LaunchGameAfterPacking_MetaData) }; // 2914092134
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bEnableExperimentalFeatures_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bEnableExperimentalFeatures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bEnableExperimentalFeatures = { "bEnableExperimentalFeatures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bEnableExperimentalFeatures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableExperimentalFeatures_MetaData), NewProp_bEnableExperimentalFeatures_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_MappingsFile = { "MappingsFile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeSettings, MappingsFile), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingsFile_MetaData), NewProp_MappingsFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_AESKey = { "AESKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeSettings, AESKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AESKey_MetaData), NewProp_AESKey_MetaData) };
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bSaveImportedAssets_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bSaveImportedAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bSaveImportedAssets = { "bSaveImportedAssets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bSaveImportedAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveImportedAssets_MetaData), NewProp_bSaveImportedAssets_MetaData) };
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bAutoFormatBlueprintGraphs_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bAutoFormatBlueprintGraphs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bAutoFormatBlueprintGraphs = { "bAutoFormatBlueprintGraphs", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bAutoFormatBlueprintGraphs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFormatBlueprintGraphs_MetaData), NewProp_bAutoFormatBlueprintGraphs_MetaData) };
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bImportBlueprintDependenciesBeforeGraphs_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bImportBlueprintDependenciesBeforeGraphs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bImportBlueprintDependenciesBeforeGraphs = { "bImportBlueprintDependenciesBeforeGraphs", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bImportBlueprintDependenciesBeforeGraphs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportBlueprintDependenciesBeforeGraphs_MetaData), NewProp_bImportBlueprintDependenciesBeforeGraphs_MetaData) };
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bReflectExistingTextures_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bReflectExistingTextures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bReflectExistingTextures = { "bReflectExistingTextures", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bReflectExistingTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReflectExistingTextures_MetaData), NewProp_bReflectExistingTextures_MetaData) };
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bCreateMaterialStubs_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bCreateMaterialStubs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bCreateMaterialStubs = { "bCreateMaterialStubs", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bCreateMaterialStubs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateMaterialStubs_MetaData), NewProp_bCreateMaterialStubs_MetaData) };
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bAnimationBlueprintNodeIdComments_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bAnimationBlueprintNodeIdComments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bAnimationBlueprintNodeIdComments = { "bAnimationBlueprintNodeIdComments", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bAnimationBlueprintNodeIdComments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimationBlueprintNodeIdComments_MetaData), NewProp_bAnimationBlueprintNodeIdComments_MetaData) };
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bEnableImporterExperiments_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bEnableImporterExperiments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bEnableImporterExperiments = { "bEnableImporterExperiments", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bEnableImporterExperiments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableImporterExperiments_MetaData), NewProp_bEnableImporterExperiments_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_ModSelection_ValueProp = { "ModSelection", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_ModSelection_Key_KeyProp = { "ModSelection_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_ModSelection = { "ModSelection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrimeForgeSettings, ModSelection), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModSelection_MetaData), NewProp_ModSelection_MetaData) };
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bMigratedLegacyJsonImporterSettings_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bMigratedLegacyJsonImporterSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bMigratedLegacyJsonImporterSettings = { "bMigratedLegacyJsonImporterSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bMigratedLegacyJsonImporterSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMigratedLegacyJsonImporterSettings_MetaData), NewProp_bMigratedLegacyJsonImporterSettings_MetaData) };
void Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bMigratedLegacyCrimeForgeGameSettings_SetBit(void* Obj)
{
	((UCrimeForgeSettings*)Obj)->bMigratedLegacyCrimeForgeGameSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bMigratedLegacyCrimeForgeGameSettings = { "bMigratedLegacyCrimeForgeGameSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrimeForgeSettings), &Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bMigratedLegacyCrimeForgeGameSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMigratedLegacyCrimeForgeGameSettings_MetaData), NewProp_bMigratedLegacyCrimeForgeGameSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrimeForgeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_PD3GamePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bCopyModsToGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_LaunchGameAfterPacking_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_LaunchGameAfterPacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bEnableExperimentalFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_MappingsFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_AESKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bSaveImportedAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bAutoFormatBlueprintGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bImportBlueprintDependenciesBeforeGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bReflectExistingTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bCreateMaterialStubs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bAnimationBlueprintNodeIdComments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bEnableImporterExperiments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_ModSelection_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_ModSelection_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_ModSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bMigratedLegacyJsonImporterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrimeForgeSettings_Statics::NewProp_bMigratedLegacyCrimeForgeGameSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCrimeForgeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrimeForgeSettings_Statics::ClassParams = {
	&UCrimeForgeSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCrimeForgeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrimeForgeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrimeForgeSettings()
{
	if (!Z_Registration_Info_UClass_UCrimeForgeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrimeForgeSettings.OuterSingleton, Z_Construct_UClass_UCrimeForgeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrimeForgeSettings.OuterSingleton;
}
template<> CRIMEFORGE_API UClass* StaticClass<UCrimeForgeSettings>()
{
	return UCrimeForgeSettings::StaticClass();
}
UCrimeForgeSettings::UCrimeForgeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrimeForgeSettings);
UCrimeForgeSettings::~UCrimeForgeSettings() {}
// End Class UCrimeForgeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgeSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECrimeForgeStartGameType_StaticEnum, TEXT("ECrimeForgeStartGameType"), &Z_Registration_Info_UEnum_ECrimeForgeStartGameType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2914092134U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRAnimationBlueprintSettings::StaticStruct, Z_Construct_UScriptStruct_FRAnimationBlueprintSettings_Statics::NewStructOps, TEXT("RAnimationBlueprintSettings"), &Z_Registration_Info_UScriptStruct_RAnimationBlueprintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRAnimationBlueprintSettings), 2519318313U) },
		{ FRTextureSettings::StaticStruct, Z_Construct_UScriptStruct_FRTextureSettings_Statics::NewStructOps, TEXT("RTextureSettings"), &Z_Registration_Info_UScriptStruct_RTextureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTextureSettings), 1661392631U) },
		{ FRMaterialSettings::StaticStruct, Z_Construct_UScriptStruct_FRMaterialSettings_Statics::NewStructOps, TEXT("RMaterialSettings"), &Z_Registration_Info_UScriptStruct_RMaterialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRMaterialSettings), 3539753457U) },
		{ FRSettings::StaticStruct, Z_Construct_UScriptStruct_FRSettings_Statics::NewStructOps, TEXT("RSettings"), &Z_Registration_Info_UScriptStruct_RSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRSettings), 2987723626U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrimeForgeSettings, UCrimeForgeSettings::StaticClass, TEXT("UCrimeForgeSettings"), &Z_Registration_Info_UClass_UCrimeForgeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrimeForgeSettings), 425132494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgeSettings_h_3866043541(TEXT("/Script/CrimeForge"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgeSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgeSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgeSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

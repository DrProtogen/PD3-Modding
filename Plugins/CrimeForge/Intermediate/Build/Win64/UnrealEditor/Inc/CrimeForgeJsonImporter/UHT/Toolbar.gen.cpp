// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForgeJsonImporter/Public/Modules/Toolbar/Toolbar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolbar() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UCrimeForgeJsonImporterToolbar();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UCrimeForgeJsonImporterToolbar_NoRegister();
UPackage* Z_Construct_UPackage__Script_CrimeForgeJsonImporter();
// End Cross Module References

// Begin Class UCrimeForgeJsonImporterToolbar
void UCrimeForgeJsonImporterToolbar::StaticRegisterNativesUCrimeForgeJsonImporterToolbar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrimeForgeJsonImporterToolbar);
UClass* Z_Construct_UClass_UCrimeForgeJsonImporterToolbar_NoRegister()
{
	return UCrimeForgeJsonImporterToolbar::StaticClass();
}
struct Z_Construct_UClass_UCrimeForgeJsonImporterToolbar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* 4.25 and below build this module without the engine's shared PCH (see CrimeForgeJsonImporter.Build.cs),\n * which is where the menu types below used to come in from. FToolMenuSection is only named at\n * all on the versions that have ToolMenus, so 4.24 and 4.25 are the ones that need it. */" },
#endif
		{ "IncludePath", "Modules/Toolbar/Toolbar.h" },
		{ "ModuleRelativePath", "Public/Modules/Toolbar/Toolbar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "4.25 and below build this module without the engine's shared PCH (see CrimeForgeJsonImporter.Build.cs),\n* which is where the menu types below used to come in from. FToolMenuSection is only named at\n* all on the versions that have ToolMenus, so 4.24 and 4.25 are the ones that need it." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrimeForgeJsonImporterToolbar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCrimeForgeJsonImporterToolbar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForgeJsonImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeJsonImporterToolbar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrimeForgeJsonImporterToolbar_Statics::ClassParams = {
	&UCrimeForgeJsonImporterToolbar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeJsonImporterToolbar_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrimeForgeJsonImporterToolbar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrimeForgeJsonImporterToolbar()
{
	if (!Z_Registration_Info_UClass_UCrimeForgeJsonImporterToolbar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrimeForgeJsonImporterToolbar.OuterSingleton, Z_Construct_UClass_UCrimeForgeJsonImporterToolbar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrimeForgeJsonImporterToolbar.OuterSingleton;
}
template<> CRIMEFORGEJSONIMPORTER_API UClass* StaticClass<UCrimeForgeJsonImporterToolbar>()
{
	return UCrimeForgeJsonImporterToolbar::StaticClass();
}
UCrimeForgeJsonImporterToolbar::UCrimeForgeJsonImporterToolbar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrimeForgeJsonImporterToolbar);
UCrimeForgeJsonImporterToolbar::~UCrimeForgeJsonImporterToolbar() {}
// End Class UCrimeForgeJsonImporterToolbar

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_Toolbar_Toolbar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrimeForgeJsonImporterToolbar, UCrimeForgeJsonImporterToolbar::StaticClass, TEXT("UCrimeForgeJsonImporterToolbar"), &Z_Registration_Info_UClass_UCrimeForgeJsonImporterToolbar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrimeForgeJsonImporterToolbar), 1438559471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_Toolbar_Toolbar_h_3348413822(TEXT("/Script/CrimeForgeJsonImporter"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_Toolbar_Toolbar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_Toolbar_Toolbar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

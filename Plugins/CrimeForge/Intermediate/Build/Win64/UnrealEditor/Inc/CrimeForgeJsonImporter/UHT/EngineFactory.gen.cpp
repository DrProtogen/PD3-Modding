// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForgeJsonImporter/Public/Modules/EngineFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineFactory() {}

// Begin Cross Module References
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UREngineImplementation();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UREngineImplementation_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_CrimeForgeJsonImporter();
// End Cross Module References

// Begin Class UREngineImplementation
void UREngineImplementation::StaticRegisterNativesUREngineImplementation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UREngineImplementation);
UClass* Z_Construct_UClass_UREngineImplementation_NoRegister()
{
	return UREngineImplementation::StaticClass();
}
struct Z_Construct_UClass_UREngineImplementation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Engine implementation to allow importing by dragging files into the Content Browser */" },
#endif
		{ "IncludePath", "Modules/EngineFactory.h" },
		{ "ModuleRelativePath", "Public/Modules/EngineFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Engine implementation to allow importing by dragging files into the Content Browser" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UREngineImplementation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UREngineImplementation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForgeJsonImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UREngineImplementation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UREngineImplementation_Statics::ClassParams = {
	&UREngineImplementation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UREngineImplementation_Statics::Class_MetaDataParams), Z_Construct_UClass_UREngineImplementation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UREngineImplementation()
{
	if (!Z_Registration_Info_UClass_UREngineImplementation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UREngineImplementation.OuterSingleton, Z_Construct_UClass_UREngineImplementation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UREngineImplementation.OuterSingleton;
}
template<> CRIMEFORGEJSONIMPORTER_API UClass* StaticClass<UREngineImplementation>()
{
	return UREngineImplementation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UREngineImplementation);
UREngineImplementation::~UREngineImplementation() {}
// End Class UREngineImplementation

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UREngineImplementation, UREngineImplementation::StaticClass, TEXT("UREngineImplementation"), &Z_Registration_Info_UClass_UREngineImplementation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UREngineImplementation), 2639603670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h_1660259532(TEXT("/Script/CrimeForgeJsonImporter"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

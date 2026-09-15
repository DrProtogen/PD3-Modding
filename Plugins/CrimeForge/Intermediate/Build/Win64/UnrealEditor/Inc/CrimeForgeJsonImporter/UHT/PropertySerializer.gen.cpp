// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForgeJsonImporter/Public/Serializers/PropertySerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertySerializer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UObjectSerializer_NoRegister();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UPropertySerializer();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UPropertySerializer_NoRegister();
UPackage* Z_Construct_UPackage__Script_CrimeForgeJsonImporter();
// End Cross Module References

// Begin Class UPropertySerializer
void UPropertySerializer::StaticRegisterNativesUPropertySerializer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertySerializer);
UClass* Z_Construct_UClass_UPropertySerializer_NoRegister()
{
	return UPropertySerializer::StaticClass();
}
struct Z_Construct_UClass_UPropertySerializer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Serializers/PropertySerializer.h" },
		{ "ModuleRelativePath", "Public/Serializers/PropertySerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSerializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serializers/PropertySerializer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectSerializer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertySerializer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectSerializer = { "ObjectSerializer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertySerializer, ObjectSerializer), Z_Construct_UClass_UObjectSerializer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectSerializer_MetaData), NewProp_ObjectSerializer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertySerializer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectSerializer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPropertySerializer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForgeJsonImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertySerializer_Statics::ClassParams = {
	&UPropertySerializer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPropertySerializer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::Class_MetaDataParams), Z_Construct_UClass_UPropertySerializer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPropertySerializer()
{
	if (!Z_Registration_Info_UClass_UPropertySerializer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertySerializer.OuterSingleton, Z_Construct_UClass_UPropertySerializer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPropertySerializer.OuterSingleton;
}
template<> CRIMEFORGEJSONIMPORTER_API UClass* StaticClass<UPropertySerializer>()
{
	return UPropertySerializer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertySerializer);
UPropertySerializer::~UPropertySerializer() {}
// End Class UPropertySerializer

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_PropertySerializer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPropertySerializer, UPropertySerializer::StaticClass, TEXT("UPropertySerializer"), &Z_Registration_Info_UClass_UPropertySerializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertySerializer), 3150084871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_PropertySerializer_h_420390276(TEXT("/Script/CrimeForgeJsonImporter"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_PropertySerializer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_PropertySerializer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

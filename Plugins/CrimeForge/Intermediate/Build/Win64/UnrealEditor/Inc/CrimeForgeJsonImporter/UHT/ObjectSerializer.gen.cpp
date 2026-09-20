// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForgeJsonImporter/Public/Serializers/ObjectSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectSerializer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UObjectSerializer();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UObjectSerializer_NoRegister();
CRIMEFORGEJSONIMPORTER_API UClass* Z_Construct_UClass_UPropertySerializer_NoRegister();
UPackage* Z_Construct_UPackage__Script_CrimeForgeJsonImporter();
// End Cross Module References

// Begin Class UObjectSerializer
void UObjectSerializer::StaticRegisterNativesUObjectSerializer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectSerializer);
UClass* Z_Construct_UClass_UObjectSerializer_NoRegister()
{
	return UObjectSerializer::StaticClass();
}
struct Z_Construct_UClass_UObjectSerializer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Serializers/ObjectSerializer.h" },
		{ "ModuleRelativePath", "Public/Serializers/ObjectSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serializers/ObjectSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serializers/ObjectSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertySerializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serializers/ObjectSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportsToNotDeserialize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serializers/ObjectSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhitelistedTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serializers/ObjectSerializer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructedObjects_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConstructedObjects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ConstructedObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySerializer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExportsToNotDeserialize_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExportsToNotDeserialize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WhitelistedTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WhitelistedTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectSerializer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSerializer, Parent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ConstructedObjects_ValueProp = { "ConstructedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ConstructedObjects_Key_KeyProp = { "ConstructedObjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ConstructedObjects = { "ConstructedObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSerializer, ConstructedObjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructedObjects_MetaData), NewProp_ConstructedObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_PropertySerializer = { "PropertySerializer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSerializer, PropertySerializer), Z_Construct_UClass_UPropertySerializer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertySerializer_MetaData), NewProp_PropertySerializer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ExportsToNotDeserialize_Inner = { "ExportsToNotDeserialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ExportsToNotDeserialize = { "ExportsToNotDeserialize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSerializer, ExportsToNotDeserialize), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportsToNotDeserialize_MetaData), NewProp_ExportsToNotDeserialize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_WhitelistedTypes_Inner = { "WhitelistedTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_WhitelistedTypes = { "WhitelistedTypes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSerializer, WhitelistedTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhitelistedTypes_MetaData), NewProp_WhitelistedTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectSerializer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ConstructedObjects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ConstructedObjects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ConstructedObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_PropertySerializer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ExportsToNotDeserialize_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ExportsToNotDeserialize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_WhitelistedTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_WhitelistedTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectSerializer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForgeJsonImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectSerializer_Statics::ClassParams = {
	&UObjectSerializer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectSerializer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectSerializer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectSerializer()
{
	if (!Z_Registration_Info_UClass_UObjectSerializer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectSerializer.OuterSingleton, Z_Construct_UClass_UObjectSerializer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectSerializer.OuterSingleton;
}
template<> CRIMEFORGEJSONIMPORTER_API UClass* StaticClass<UObjectSerializer>()
{
	return UObjectSerializer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectSerializer);
UObjectSerializer::~UObjectSerializer() {}
// End Class UObjectSerializer

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectSerializer, UObjectSerializer::StaticClass, TEXT("UObjectSerializer"), &Z_Registration_Info_UClass_UObjectSerializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectSerializer), 341243257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h_3290580453(TEXT("/Script/CrimeForgeJsonImporter"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

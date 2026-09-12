// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteBinaryFileStructureObsolete.h"
#include "AccelByteUe4Sdk/Public/AccelByteArrayByteObsolete.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteBinaryFileStructureObsolete() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteBinaryFileStructureObsolete
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteBinaryFileStructureObsolete;
class UScriptStruct* FAccelByteBinaryFileStructureObsolete::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteBinaryFileStructureObsolete.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteBinaryFileStructureObsolete.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteBinaryFileStructureObsolete"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteBinaryFileStructureObsolete.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteBinaryFileStructureObsolete>()
{
	return FAccelByteBinaryFileStructureObsolete::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteBinaryFileStructureObsolete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteBinaryFileStructureObsolete" },
		{ "ModuleRelativePath", "Public/AccelByteBinaryFileStructureObsolete.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Segments_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Segments_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteBinaryFileStructureObsolete>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::NewProp_Segments_ValueProp = { "Segments", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete, METADATA_PARAMS(0, nullptr) }; // 1655031059
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::NewProp_Segments_Key_KeyProp = { "Segments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteBinaryFileStructureObsolete, Segments), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) }; // 1655031059
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::NewProp_Segments_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::NewProp_Segments_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::NewProp_Segments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteBinaryFileStructureObsolete",
	Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::PropPointers),
	sizeof(FAccelByteBinaryFileStructureObsolete),
	alignof(FAccelByteBinaryFileStructureObsolete),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteBinaryFileStructureObsolete.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteBinaryFileStructureObsolete.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteBinaryFileStructureObsolete.InnerSingleton;
}
// End ScriptStruct FAccelByteBinaryFileStructureObsolete

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBinaryFileStructureObsolete_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteBinaryFileStructureObsolete::StaticStruct, Z_Construct_UScriptStruct_FAccelByteBinaryFileStructureObsolete_Statics::NewStructOps, TEXT("AccelByteBinaryFileStructureObsolete"), &Z_Registration_Info_UScriptStruct_AccelByteBinaryFileStructureObsolete, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteBinaryFileStructureObsolete), 1826449211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBinaryFileStructureObsolete_h_2650085668(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBinaryFileStructureObsolete_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBinaryFileStructureObsolete_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteArrayByteObsolete.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteArrayByteObsolete() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteArrayByteObsolete
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteArrayByteObsolete;
class UScriptStruct* FAccelByteArrayByteObsolete::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteArrayByteObsolete.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteArrayByteObsolete.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteArrayByteObsolete"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteArrayByteObsolete.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteArrayByteObsolete>()
{
	return FAccelByteArrayByteObsolete::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteArrayByteObsolete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteArrayByteObsolete" },
		{ "ModuleRelativePath", "Public/AccelByteArrayByteObsolete.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteArrayByteObsolete>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteArrayByteObsolete, Content), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::NewProp_Content_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteArrayByteObsolete",
	Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::PropPointers),
	sizeof(FAccelByteArrayByteObsolete),
	alignof(FAccelByteArrayByteObsolete),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteArrayByteObsolete.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteArrayByteObsolete.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteArrayByteObsolete.InnerSingleton;
}
// End ScriptStruct FAccelByteArrayByteObsolete

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteArrayByteObsolete_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteArrayByteObsolete::StaticStruct, Z_Construct_UScriptStruct_FAccelByteArrayByteObsolete_Statics::NewStructOps, TEXT("AccelByteArrayByteObsolete"), &Z_Registration_Info_UScriptStruct_AccelByteArrayByteObsolete, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteArrayByteObsolete), 1655031059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteArrayByteObsolete_h_3697379053(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteArrayByteObsolete_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteArrayByteObsolete_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

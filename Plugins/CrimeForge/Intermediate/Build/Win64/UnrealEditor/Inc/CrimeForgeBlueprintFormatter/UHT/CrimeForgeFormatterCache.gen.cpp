// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForgeBlueprintFormatter/Public/CrimeForgeFormatterCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrimeForgeFormatterCache() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
CRIMEFORGEBLUEPRINTFORMATTER_API UScriptStruct* Z_Construct_UScriptStruct_FCrimeForgeGraphData();
CRIMEFORGEBLUEPRINTFORMATTER_API UScriptStruct* Z_Construct_UScriptStruct_FCrimeForgeNodeData();
UPackage* Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter();
// End Cross Module References

// Begin ScriptStruct FCrimeForgeNodeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrimeForgeNodeData;
class UScriptStruct* FCrimeForgeNodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrimeForgeNodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrimeForgeNodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrimeForgeNodeData, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("CrimeForgeNodeData"));
	}
	return Z_Registration_Info_UScriptStruct_CrimeForgeNodeData.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UScriptStruct* StaticStruct<FCrimeForgeNodeData>()
{
	return FCrimeForgeNodeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentBubbleSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Last_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRoot_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommentBubbleSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedPins_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedPins_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedPins;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Last;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrimeForgeNodeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrimeForgeNodeData, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_CommentBubbleSize = { "CommentBubbleSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrimeForgeNodeData, CommentBubbleSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentBubbleSize_MetaData), NewProp_CommentBubbleSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_CachedPins_ValueProp = { "CachedPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_CachedPins_Key_KeyProp = { "CachedPins_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_CachedPins = { "CachedPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrimeForgeNodeData, CachedPins), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPins_MetaData), NewProp_CachedPins_MetaData) };
void Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((FCrimeForgeNodeData*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCrimeForgeNodeData), &Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_Last = { "Last", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrimeForgeNodeData, Last), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Last_MetaData), NewProp_Last_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_LastRoot = { "LastRoot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrimeForgeNodeData, LastRoot), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRoot_MetaData), NewProp_LastRoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_CommentBubbleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_CachedPins_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_CachedPins_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_CachedPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_Last,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewProp_LastRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	&NewStructOps,
	"CrimeForgeNodeData",
	Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::PropPointers),
	sizeof(FCrimeForgeNodeData),
	alignof(FCrimeForgeNodeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrimeForgeNodeData()
{
	if (!Z_Registration_Info_UScriptStruct_CrimeForgeNodeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrimeForgeNodeData.InnerSingleton, Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrimeForgeNodeData.InnerSingleton;
}
// End ScriptStruct FCrimeForgeNodeData

// Begin ScriptStruct FCrimeForgeGraphData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrimeForgeGraphData;
class UScriptStruct* FCrimeForgeGraphData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrimeForgeGraphData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrimeForgeGraphData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrimeForgeGraphData, (UObject*)Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter(), TEXT("CrimeForgeGraphData"));
	}
	return Z_Registration_Info_UScriptStruct_CrimeForgeGraphData.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UScriptStruct* StaticStruct<FCrimeForgeGraphData>()
{
	return FCrimeForgeGraphData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrimeForgeFormatterCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NodeData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrimeForgeGraphData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::NewProp_NodeData_ValueProp = { "NodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCrimeForgeNodeData, METADATA_PARAMS(0, nullptr) }; // 1730826811
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::NewProp_NodeData_Key_KeyProp = { "NodeData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrimeForgeGraphData, NodeData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeData_MetaData), NewProp_NodeData_MetaData) }; // 1730826811
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::NewProp_NodeData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::NewProp_NodeData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::NewProp_NodeData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
	nullptr,
	&NewStructOps,
	"CrimeForgeGraphData",
	Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::PropPointers),
	sizeof(FCrimeForgeGraphData),
	alignof(FCrimeForgeGraphData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrimeForgeGraphData()
{
	if (!Z_Registration_Info_UScriptStruct_CrimeForgeGraphData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrimeForgeGraphData.InnerSingleton, Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrimeForgeGraphData.InnerSingleton;
}
// End ScriptStruct FCrimeForgeGraphData

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterCache_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCrimeForgeNodeData::StaticStruct, Z_Construct_UScriptStruct_FCrimeForgeNodeData_Statics::NewStructOps, TEXT("CrimeForgeNodeData"), &Z_Registration_Info_UScriptStruct_CrimeForgeNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrimeForgeNodeData), 1730826811U) },
		{ FCrimeForgeGraphData::StaticStruct, Z_Construct_UScriptStruct_FCrimeForgeGraphData_Statics::NewStructOps, TEXT("CrimeForgeGraphData"), &Z_Registration_Info_UScriptStruct_CrimeForgeGraphData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrimeForgeGraphData), 4214299467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterCache_h_1690072747(TEXT("/Script/CrimeForgeBlueprintFormatter"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterCache_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

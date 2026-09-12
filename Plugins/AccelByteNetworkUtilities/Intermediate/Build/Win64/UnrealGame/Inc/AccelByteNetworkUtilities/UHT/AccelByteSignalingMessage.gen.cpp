// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteNetworkUtilities/Public/AccelByteSignalingMessage.h"
#include "AccelByteNetworkUtilities/Public/AccelByteSignalingTurnServer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteSignalingMessage() {}

// Begin Cross Module References
ACCELBYTENETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSignalingMessage();
ACCELBYTENETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer();
UPackage* Z_Construct_UPackage__Script_AccelByteNetworkUtilities();
// End Cross Module References

// Begin ScriptStruct FAccelByteSignalingMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteSignalingMessage;
class UScriptStruct* FAccelByteSignalingMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteSignalingMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteSignalingMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteSignalingMessage, (UObject*)Z_Construct_UPackage__Script_AccelByteNetworkUtilities(), TEXT("AccelByteSignalingMessage"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteSignalingMessage.OuterSingleton;
}
template<> ACCELBYTENETWORKUTILITIES_API UScriptStruct* StaticStruct<FAccelByteSignalingMessage>()
{
	return FAccelByteSignalingMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingMessage" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingMessage" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingMessage" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingMessage" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteSignalingMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteSignalingMessage, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteSignalingMessage, Channel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteSignalingMessage, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_TurnServer = { "TurnServer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteSignalingMessage, TurnServer), Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnServer_MetaData), NewProp_TurnServer_MetaData) }; // 4204752788
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewProp_TurnServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteNetworkUtilities,
	nullptr,
	&NewStructOps,
	"AccelByteSignalingMessage",
	Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::PropPointers),
	sizeof(FAccelByteSignalingMessage),
	alignof(FAccelByteSignalingMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSignalingMessage()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteSignalingMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteSignalingMessage.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteSignalingMessage.InnerSingleton;
}
// End ScriptStruct FAccelByteSignalingMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_AccelByteSignalingMessage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteSignalingMessage::StaticStruct, Z_Construct_UScriptStruct_FAccelByteSignalingMessage_Statics::NewStructOps, TEXT("AccelByteSignalingMessage"), &Z_Registration_Info_UScriptStruct_AccelByteSignalingMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteSignalingMessage), 1492277333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_AccelByteSignalingMessage_h_1056799860(TEXT("/Script/AccelByteNetworkUtilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_AccelByteSignalingMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_AccelByteSignalingMessage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

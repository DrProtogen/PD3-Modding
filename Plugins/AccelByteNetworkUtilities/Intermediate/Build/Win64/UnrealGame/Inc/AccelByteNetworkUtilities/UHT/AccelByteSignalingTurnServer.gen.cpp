// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteNetworkUtilities/Public/AccelByteSignalingTurnServer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteSignalingTurnServer() {}

// Begin Cross Module References
ACCELBYTENETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer();
UPackage* Z_Construct_UPackage__Script_AccelByteNetworkUtilities();
// End Cross Module References

// Begin ScriptStruct FAccelByteSignalingTurnServer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteSignalingTurnServer;
class UScriptStruct* FAccelByteSignalingTurnServer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteSignalingTurnServer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteSignalingTurnServer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer, (UObject*)Z_Construct_UPackage__Script_AccelByteNetworkUtilities(), TEXT("AccelByteSignalingTurnServer"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteSignalingTurnServer.OuterSingleton;
}
template<> ACCELBYTENETWORKUTILITIES_API UScriptStruct* StaticStruct<FAccelByteSignalingTurnServer>()
{
	return FAccelByteSignalingTurnServer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingTurnServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingTurnServer" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingTurnServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingTurnServer" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingTurnServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingTurnServer" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingTurnServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingTurnServer" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingTurnServer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteSignalingTurnServer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteSignalingTurnServer, Host), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Host_MetaData), NewProp_Host_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteSignalingTurnServer, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteSignalingTurnServer, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteSignalingTurnServer, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Host,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteNetworkUtilities,
	nullptr,
	&NewStructOps,
	"AccelByteSignalingTurnServer",
	Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::PropPointers),
	sizeof(FAccelByteSignalingTurnServer),
	alignof(FAccelByteSignalingTurnServer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteSignalingTurnServer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteSignalingTurnServer.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteSignalingTurnServer.InnerSingleton;
}
// End ScriptStruct FAccelByteSignalingTurnServer

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_AccelByteSignalingTurnServer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteSignalingTurnServer::StaticStruct, Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewStructOps, TEXT("AccelByteSignalingTurnServer"), &Z_Registration_Info_UScriptStruct_AccelByteSignalingTurnServer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteSignalingTurnServer), 4204752788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_AccelByteSignalingTurnServer_h_2161256473(TEXT("/Script/AccelByteNetworkUtilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_AccelByteSignalingTurnServer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_AccelByteSignalingTurnServer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

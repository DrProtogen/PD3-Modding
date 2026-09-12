// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerDSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerDSM() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerDSM();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerDSM_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_UEnumServerType();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerInfoDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionResponseDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerDSM Function ConfigureAutoShutdown
struct Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics
{
	struct ABServerDSM_eventConfigureAutoShutdown_Parms
	{
		int32 TickSeconds;
		int32 CountdownStart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TickSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountdownStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::NewProp_TickSeconds = { "TickSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventConfigureAutoShutdown_Parms, TickSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::NewProp_CountdownStart = { "CountdownStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventConfigureAutoShutdown_Parms, CountdownStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::NewProp_TickSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::NewProp_CountdownStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "ConfigureAutoShutdown", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::ABServerDSM_eventConfigureAutoShutdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::ABServerDSM_eventConfigureAutoShutdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execConfigureAutoShutdown)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TickSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_CountdownStart);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureAutoShutdown(Z_Param_TickSeconds,Z_Param_CountdownStart);
	P_NATIVE_END;
}
// End Class UABServerDSM Function ConfigureAutoShutdown

// Begin Class UABServerDSM Function DeregisterLocalServerFromDSM
struct Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics
{
	struct ABServerDSM_eventDeregisterLocalServerFromDSM_Parms
	{
		FString ServerName;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventDeregisterLocalServerFromDSM_Parms, ServerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerName_MetaData), NewProp_ServerName_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventDeregisterLocalServerFromDSM_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventDeregisterLocalServerFromDSM_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_ServerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "DeregisterLocalServerFromDSM", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::ABServerDSM_eventDeregisterLocalServerFromDSM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::ABServerDSM_eventDeregisterLocalServerFromDSM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execDeregisterLocalServerFromDSM)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeregisterLocalServerFromDSM(Z_Param_ServerName,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerDSM Function DeregisterLocalServerFromDSM

// Begin Class UABServerDSM Function GetPlayerNum
struct Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics
{
	struct ABServerDSM_eventGetPlayerNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventGetPlayerNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "GetPlayerNum", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::ABServerDSM_eventGetPlayerNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::ABServerDSM_eventGetPlayerNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_GetPlayerNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execGetPlayerNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayerNum();
	P_NATIVE_END;
}
// End Class UABServerDSM Function GetPlayerNum

// Begin Class UABServerDSM Function GetServerInfo
struct Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics
{
	struct ABServerDSM_eventGetServerInfo_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventGetServerInfo_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerInfoDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 291416657
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventGetServerInfo_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "GetServerInfo", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::ABServerDSM_eventGetServerInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::ABServerDSM_eventGetServerInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_GetServerInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execGetServerInfo)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetServerInfo(FDServerInfoDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerDSM Function GetServerInfo

// Begin Class UABServerDSM Function GetSessionId
struct Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics
{
	struct ABServerDSM_eventGetSessionId_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventGetSessionId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionResponseDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 653128538
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventGetSessionId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "GetSessionId", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::ABServerDSM_eventGetSessionId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::ABServerDSM_eventGetSessionId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_GetSessionId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execGetSessionId)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSessionId(FDServerSessionResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerDSM Function GetSessionId

// Begin Class UABServerDSM Function RegisterLocalServerToDSM
struct Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics
{
	struct ABServerDSM_eventRegisterLocalServerToDSM_Parms
	{
		FString IPAddress;
		int32 Port;
		FString ServerName;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterLocalServerToDSM_Parms, IPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPAddress_MetaData), NewProp_IPAddress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterLocalServerToDSM_Parms, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterLocalServerToDSM_Parms, ServerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerName_MetaData), NewProp_ServerName_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterLocalServerToDSM_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterLocalServerToDSM_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_IPAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_ServerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "RegisterLocalServerToDSM", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::ABServerDSM_eventRegisterLocalServerToDSM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::ABServerDSM_eventRegisterLocalServerToDSM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execRegisterLocalServerToDSM)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Port);
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterLocalServerToDSM(Z_Param_IPAddress,Z_Param_Out_Port,Z_Param_ServerName,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerDSM Function RegisterLocalServerToDSM

// Begin Class UABServerDSM Function RegisterServerToDSM
struct Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics
{
	struct ABServerDSM_eventRegisterServerToDSM_Parms
	{
		int32 Port;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterServerToDSM_Parms, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterServerToDSM_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterServerToDSM_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "RegisterServerToDSM", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::ABServerDSM_eventRegisterServerToDSM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::ABServerDSM_eventRegisterServerToDSM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execRegisterServerToDSM)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Port);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterServerToDSM(Z_Param_Out_Port,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerDSM Function RegisterServerToDSM

// Begin Class UABServerDSM Function SendShutdownToDSM
struct Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics
{
	struct ABServerDSM_eventSendShutdownToDSM_Parms
	{
		bool KillMe;
		FString MatchId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillMe_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_KillMe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KillMe;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe_SetBit(void* Obj)
{
	((ABServerDSM_eventSendShutdownToDSM_Parms*)Obj)->KillMe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe = { "KillMe", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABServerDSM_eventSendShutdownToDSM_Parms), &Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillMe_MetaData), NewProp_KillMe_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventSendShutdownToDSM_Parms, MatchId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchId_MetaData), NewProp_MatchId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventSendShutdownToDSM_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventSendShutdownToDSM_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_MatchId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "SendShutdownToDSM", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::ABServerDSM_eventSendShutdownToDSM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::ABServerDSM_eventSendShutdownToDSM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execSendShutdownToDSM)
{
	P_GET_UBOOL_REF(Z_Param_Out_KillMe);
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendShutdownToDSM(Z_Param_Out_KillMe,Z_Param_MatchId,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerDSM Function SendShutdownToDSM

// Begin Class UABServerDSM Function SetOnAutoShutdownErrorDelegate
struct Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics
{
	struct ABServerDSM_eventSetOnAutoShutdownErrorDelegate_Parms
	{
		FScriptDelegate OnShutdownError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnShutdownError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::NewProp_OnShutdownError = { "OnShutdownError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventSetOnAutoShutdownErrorDelegate_Parms, OnShutdownError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::NewProp_OnShutdownError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "SetOnAutoShutdownErrorDelegate", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::ABServerDSM_eventSetOnAutoShutdownErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::ABServerDSM_eventSetOnAutoShutdownErrorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execSetOnAutoShutdownErrorDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnShutdownError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnAutoShutdownErrorDelegate(FDErrorHandler(Z_Param_OnShutdownError));
	P_NATIVE_END;
}
// End Class UABServerDSM Function SetOnAutoShutdownErrorDelegate

// Begin Class UABServerDSM Function SetOnAutoShutdownResponse
struct Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics
{
	struct ABServerDSM_eventSetOnAutoShutdownResponse_Parms
	{
		FScriptDelegate OnAutoShutdown;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAutoShutdown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::NewProp_OnAutoShutdown = { "OnAutoShutdown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventSetOnAutoShutdownResponse_Parms, OnAutoShutdown), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::NewProp_OnAutoShutdown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "SetOnAutoShutdownResponse", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::ABServerDSM_eventSetOnAutoShutdownResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::ABServerDSM_eventSetOnAutoShutdownResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execSetOnAutoShutdownResponse)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnAutoShutdown);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnAutoShutdownResponse(FDHandler(Z_Param_OnAutoShutdown));
	P_NATIVE_END;
}
// End Class UABServerDSM Function SetOnAutoShutdownResponse

// Begin Class UABServerDSM Function SetServerName
struct Z_Construct_UFunction_UABServerDSM_SetServerName_Statics
{
	struct ABServerDSM_eventSetServerName_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventSetServerName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "SetServerName", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::ABServerDSM_eventSetServerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::ABServerDSM_eventSetServerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_SetServerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execSetServerName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetServerName(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UABServerDSM Function SetServerName

// Begin Class UABServerDSM Function SetServerType
struct Z_Construct_UFunction_UABServerDSM_SetServerType_Statics
{
	struct ABServerDSM_eventSetServerType_Parms
	{
		UEnumServerType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerDSM_eventSetServerType_Parms, Type), Z_Construct_UEnum_AccelByteUe4Sdk_UEnumServerType, METADATA_PARAMS(0, nullptr) }; // 3153690366
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "SetServerType", nullptr, nullptr, Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::ABServerDSM_eventSetServerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::ABServerDSM_eventSetServerType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerDSM_SetServerType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerDSM::execSetServerType)
{
	P_GET_ENUM(UEnumServerType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetServerType(UEnumServerType(Z_Param_Type));
	P_NATIVE_END;
}
// End Class UABServerDSM Function SetServerType

// Begin Class UABServerDSM
void UABServerDSM::StaticRegisterNativesUABServerDSM()
{
	UClass* Class = UABServerDSM::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfigureAutoShutdown", &UABServerDSM::execConfigureAutoShutdown },
		{ "DeregisterLocalServerFromDSM", &UABServerDSM::execDeregisterLocalServerFromDSM },
		{ "GetPlayerNum", &UABServerDSM::execGetPlayerNum },
		{ "GetServerInfo", &UABServerDSM::execGetServerInfo },
		{ "GetSessionId", &UABServerDSM::execGetSessionId },
		{ "RegisterLocalServerToDSM", &UABServerDSM::execRegisterLocalServerToDSM },
		{ "RegisterServerToDSM", &UABServerDSM::execRegisterServerToDSM },
		{ "SendShutdownToDSM", &UABServerDSM::execSendShutdownToDSM },
		{ "SetOnAutoShutdownErrorDelegate", &UABServerDSM::execSetOnAutoShutdownErrorDelegate },
		{ "SetOnAutoShutdownResponse", &UABServerDSM::execSetOnAutoShutdownResponse },
		{ "SetServerName", &UABServerDSM::execSetServerName },
		{ "SetServerType", &UABServerDSM::execSetServerType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerDSM);
UClass* Z_Construct_UClass_UABServerDSM_NoRegister()
{
	return UABServerDSM::StaticClass();
}
struct Z_Construct_UClass_UABServerDSM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerDSM.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown, "ConfigureAutoShutdown" }, // 561854975
		{ &Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM, "DeregisterLocalServerFromDSM" }, // 3305909353
		{ &Z_Construct_UFunction_UABServerDSM_GetPlayerNum, "GetPlayerNum" }, // 4157880164
		{ &Z_Construct_UFunction_UABServerDSM_GetServerInfo, "GetServerInfo" }, // 1826347507
		{ &Z_Construct_UFunction_UABServerDSM_GetSessionId, "GetSessionId" }, // 3182463109
		{ &Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM, "RegisterLocalServerToDSM" }, // 2520493713
		{ &Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM, "RegisterServerToDSM" }, // 2227714414
		{ &Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM, "SendShutdownToDSM" }, // 3701959244
		{ &Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate, "SetOnAutoShutdownErrorDelegate" }, // 1336524654
		{ &Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse, "SetOnAutoShutdownResponse" }, // 449775596
		{ &Z_Construct_UFunction_UABServerDSM_SetServerName, "SetServerName" }, // 4204113577
		{ &Z_Construct_UFunction_UABServerDSM_SetServerType, "SetServerType" }, // 418156914
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerDSM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerDSM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerDSM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerDSM_Statics::ClassParams = {
	&UABServerDSM::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerDSM_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerDSM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerDSM()
{
	if (!Z_Registration_Info_UClass_UABServerDSM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerDSM.OuterSingleton, Z_Construct_UClass_UABServerDSM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerDSM.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerDSM>()
{
	return UABServerDSM::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerDSM);
UABServerDSM::~UABServerDSM() {}
// End Class UABServerDSM

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerDSM, UABServerDSM::StaticClass, TEXT("UABServerDSM"), &Z_Registration_Info_UClass_UABServerDSM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerDSM), 3116689710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_1860797738(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

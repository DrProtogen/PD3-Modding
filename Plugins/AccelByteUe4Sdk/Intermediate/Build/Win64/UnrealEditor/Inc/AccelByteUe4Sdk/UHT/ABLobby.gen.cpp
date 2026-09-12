// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABLobby.h"
#include "AccelByteUe4Sdk/Public/RefreshTokenRequest.h"
#include "AccelByteUe4Sdk/Public/RequestDSModel.h"
#include "AccelByteUe4Sdk/Public/SetRetryParametersRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABLobby() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABLobby();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABLobby_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDisconnectNotifDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRefreshTokenResponseDelegate__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FRefreshTokenRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FRequestDSModel();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSetRetryParametersRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABLobby Function Connect
struct Z_Construct_UFunction_UABLobby_Connect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "Connect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_Connect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABLobby_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execConnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect();
	P_NATIVE_END;
}
// End Class UABLobby Function Connect

// Begin Class UABLobby Function Disconnect
struct Z_Construct_UFunction_UABLobby_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_Disconnect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABLobby_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// End Class UABLobby Function Disconnect

// Begin Class UABLobby Function IsConnected
struct Z_Construct_UFunction_UABLobby_IsConnected_Statics
{
	struct ABLobby_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UABLobby_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ABLobby_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABLobby_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABLobby_eventIsConnected_Parms), &Z_Construct_UFunction_UABLobby_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "IsConnected", nullptr, nullptr, Z_Construct_UFunction_UABLobby_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLobby_IsConnected_Statics::ABLobby_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_IsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLobby_IsConnected_Statics::ABLobby_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLobby_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// End Class UABLobby Function IsConnected

// Begin Class UABLobby Function RefreshToken
struct Z_Construct_UFunction_UABLobby_RefreshToken_Statics
{
	struct ABLobby_eventRefreshToken_Parms
	{
		FRefreshTokenRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventRefreshToken_Parms, Request), Z_Construct_UScriptStruct_FRefreshTokenRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1831322658
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventRefreshToken_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRefreshTokenResponseDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3780864323
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventRefreshToken_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventRefreshToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_RefreshToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RefreshToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_RefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "RefreshToken", nullptr, nullptr, Z_Construct_UFunction_UABLobby_RefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RefreshToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLobby_RefreshToken_Statics::ABLobby_eventRefreshToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RefreshToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_RefreshToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLobby_RefreshToken_Statics::ABLobby_eventRefreshToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLobby_RefreshToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_RefreshToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execRefreshToken)
{
	P_GET_STRUCT_REF(FRefreshTokenRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->RefreshToken(Z_Param_Out_Request,FDRefreshTokenResponseDelegate(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABLobby Function RefreshToken

// Begin Class UABLobby Function RequestDS
struct Z_Construct_UFunction_UABLobby_RequestDS_Statics
{
	struct ABLobby_eventRequestDS_Parms
	{
		FRequestDSModel Request;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventRequestDS_Parms, Request), Z_Construct_UScriptStruct_FRequestDSModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 2698784257
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventRequestDS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_RequestDS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RequestDS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_RequestDS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "RequestDS", nullptr, nullptr, Z_Construct_UFunction_UABLobby_RequestDS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RequestDS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLobby_RequestDS_Statics::ABLobby_eventRequestDS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RequestDS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_RequestDS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLobby_RequestDS_Statics::ABLobby_eventRequestDS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLobby_RequestDS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_RequestDS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execRequestDS)
{
	P_GET_STRUCT_REF(FRequestDSModel,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->RequestDS(Z_Param_Out_Request);
	P_NATIVE_END;
}
// End Class UABLobby Function RequestDS

// Begin Class UABLobby Function SetOnConnected
struct Z_Construct_UFunction_UABLobby_SetOnConnected_Statics
{
	struct ABLobby_eventSetOnConnected_Parms
	{
		FScriptDelegate OnConnected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnConnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventSetOnConnected_Parms, OnConnected), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::NewProp_OnConnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetOnConnected", nullptr, nullptr, Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::ABLobby_eventSetOnConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::ABLobby_eventSetOnConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLobby_SetOnConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execSetOnConnected)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnConnected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnConnected(FDHandler(Z_Param_OnConnected));
	P_NATIVE_END;
}
// End Class UABLobby Function SetOnConnected

// Begin Class UABLobby Function SetOnConnectFailed
struct Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics
{
	struct ABLobby_eventSetOnConnectFailed_Parms
	{
		FScriptDelegate OnConnectError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnConnectError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::NewProp_OnConnectError = { "OnConnectError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventSetOnConnectFailed_Parms, OnConnectError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectError_MetaData), NewProp_OnConnectError_MetaData) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::NewProp_OnConnectError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetOnConnectFailed", nullptr, nullptr, Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::ABLobby_eventSetOnConnectFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::ABLobby_eventSetOnConnectFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLobby_SetOnConnectFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execSetOnConnectFailed)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnConnectError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnConnectFailed(FDErrorHandler(Z_Param_Out_OnConnectError));
	P_NATIVE_END;
}
// End Class UABLobby Function SetOnConnectFailed

// Begin Class UABLobby Function SetOnConnectionClosed
struct Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics
{
	struct ABLobby_eventSetOnConnectionClosed_Parms
	{
		FScriptDelegate OnConnectionClosed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnConnectionClosed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::NewProp_OnConnectionClosed = { "OnConnectionClosed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventSetOnConnectionClosed_Parms, OnConnectionClosed), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 958972873
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::NewProp_OnConnectionClosed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetOnConnectionClosed", nullptr, nullptr, Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::ABLobby_eventSetOnConnectionClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::ABLobby_eventSetOnConnectionClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLobby_SetOnConnectionClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execSetOnConnectionClosed)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnConnectionClosed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnConnectionClosed(FDConnectionClosedDelegate(Z_Param_OnConnectionClosed));
	P_NATIVE_END;
}
// End Class UABLobby Function SetOnConnectionClosed

// Begin Class UABLobby Function SetOnDisconnect
struct Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics
{
	struct ABLobby_eventSetOnDisconnect_Parms
	{
		FScriptDelegate OnDisconnected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventSetOnDisconnect_Parms, OnDisconnected), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDisconnectNotifDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDisconnected_MetaData), NewProp_OnDisconnected_MetaData) }; // 2992872338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::NewProp_OnDisconnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetOnDisconnect", nullptr, nullptr, Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::ABLobby_eventSetOnDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::ABLobby_eventSetOnDisconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLobby_SetOnDisconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execSetOnDisconnect)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDisconnected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnDisconnect(FDDisconnectNotifDelegate(Z_Param_Out_OnDisconnected));
	P_NATIVE_END;
}
// End Class UABLobby Function SetOnDisconnect

// Begin Class UABLobby Function SetOnErrorNotification
struct Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics
{
	struct ABLobby_eventSetOnErrorNotification_Parms
	{
		FScriptDelegate OnErrorNotification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnErrorNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::NewProp_OnErrorNotification = { "OnErrorNotification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventSetOnErrorNotification_Parms, OnErrorNotification), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::NewProp_OnErrorNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetOnErrorNotification", nullptr, nullptr, Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::ABLobby_eventSetOnErrorNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::ABLobby_eventSetOnErrorNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLobby_SetOnErrorNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execSetOnErrorNotification)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnErrorNotification);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnErrorNotification(FDErrorHandler(Z_Param_OnErrorNotification));
	P_NATIVE_END;
}
// End Class UABLobby Function SetOnErrorNotification

// Begin Class UABLobby Function SetRetryParameters
struct Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics
{
	struct ABLobby_eventSetRetryParameters_Parms
	{
		FSetRetryParametersRequest Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABLobby_eventSetRetryParameters_Parms, Request), Z_Construct_UScriptStruct_FSetRetryParametersRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3040303078
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetRetryParameters", nullptr, nullptr, Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::ABLobby_eventSetRetryParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::ABLobby_eventSetRetryParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABLobby_SetRetryParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execSetRetryParameters)
{
	P_GET_STRUCT_REF(FSetRetryParametersRequest,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRetryParameters(Z_Param_Out_Request);
	P_NATIVE_END;
}
// End Class UABLobby Function SetRetryParameters

// Begin Class UABLobby Function UnbindEvent
struct Z_Construct_UFunction_UABLobby_UnbindEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_UnbindEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "UnbindEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_UnbindEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABLobby_UnbindEvent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABLobby_UnbindEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABLobby_UnbindEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABLobby::execUnbindEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindEvent();
	P_NATIVE_END;
}
// End Class UABLobby Function UnbindEvent

// Begin Class UABLobby
void UABLobby::StaticRegisterNativesUABLobby()
{
	UClass* Class = UABLobby::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UABLobby::execConnect },
		{ "Disconnect", &UABLobby::execDisconnect },
		{ "IsConnected", &UABLobby::execIsConnected },
		{ "RefreshToken", &UABLobby::execRefreshToken },
		{ "RequestDS", &UABLobby::execRequestDS },
		{ "SetOnConnected", &UABLobby::execSetOnConnected },
		{ "SetOnConnectFailed", &UABLobby::execSetOnConnectFailed },
		{ "SetOnConnectionClosed", &UABLobby::execSetOnConnectionClosed },
		{ "SetOnDisconnect", &UABLobby::execSetOnDisconnect },
		{ "SetOnErrorNotification", &UABLobby::execSetOnErrorNotification },
		{ "SetRetryParameters", &UABLobby::execSetRetryParameters },
		{ "UnbindEvent", &UABLobby::execUnbindEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABLobby);
UClass* Z_Construct_UClass_UABLobby_NoRegister()
{
	return UABLobby::StaticClass();
}
struct Z_Construct_UClass_UABLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABLobby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABLobby_Connect, "Connect" }, // 3530017703
		{ &Z_Construct_UFunction_UABLobby_Disconnect, "Disconnect" }, // 1706585957
		{ &Z_Construct_UFunction_UABLobby_IsConnected, "IsConnected" }, // 3793943534
		{ &Z_Construct_UFunction_UABLobby_RefreshToken, "RefreshToken" }, // 2893884811
		{ &Z_Construct_UFunction_UABLobby_RequestDS, "RequestDS" }, // 2067613270
		{ &Z_Construct_UFunction_UABLobby_SetOnConnected, "SetOnConnected" }, // 443686565
		{ &Z_Construct_UFunction_UABLobby_SetOnConnectFailed, "SetOnConnectFailed" }, // 806598263
		{ &Z_Construct_UFunction_UABLobby_SetOnConnectionClosed, "SetOnConnectionClosed" }, // 3005757924
		{ &Z_Construct_UFunction_UABLobby_SetOnDisconnect, "SetOnDisconnect" }, // 2507716895
		{ &Z_Construct_UFunction_UABLobby_SetOnErrorNotification, "SetOnErrorNotification" }, // 2462973904
		{ &Z_Construct_UFunction_UABLobby_SetRetryParameters, "SetRetryParameters" }, // 626741881
		{ &Z_Construct_UFunction_UABLobby_UnbindEvent, "UnbindEvent" }, // 2511499900
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABLobby_Statics::ClassParams = {
	&UABLobby::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_UABLobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABLobby()
{
	if (!Z_Registration_Info_UClass_UABLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABLobby.OuterSingleton, Z_Construct_UClass_UABLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABLobby.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABLobby>()
{
	return UABLobby::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABLobby);
UABLobby::~UABLobby() {}
// End Class UABLobby

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABLobby, UABLobby::StaticClass, TEXT("UABLobby"), &Z_Registration_Info_UClass_UABLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABLobby), 1849754203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_2072116989(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

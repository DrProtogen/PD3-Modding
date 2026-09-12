// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABMessage.h"
#include "AccelByteUe4Sdk/Public/SendChannelMessageRequest.h"
#include "AccelByteUe4Sdk/Public/SendPartyMessageRequest.h"
#include "AccelByteUe4Sdk/Public/SendPrivateMessageRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABMessage() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMessage();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMessage_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DChannelChatNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DChannelChatResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DJoinDefaultChannelChatResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMessageNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyChatNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyChatResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPersonalChatNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPersonalChatResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSendChannelMessageRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSendPartyMessageRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSendPrivateMessageRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABMessage Function SendChannelMessage
struct Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics
{
	struct ABMessage_eventSendChannelMessage_Parms
	{
		FSendChannelMessageRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendChannelMessage_Parms, Request), Z_Construct_UScriptStruct_FSendChannelMessageRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1955091182
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendChannelMessage_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DChannelChatResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 344918146
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendChannelMessage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendChannelMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SendChannelMessage", nullptr, nullptr, Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::ABMessage_eventSendChannelMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::ABMessage_eventSendChannelMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMessage_SendChannelMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMessage::execSendChannelMessage)
{
	P_GET_STRUCT_REF(FSendChannelMessageRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SendChannelMessage(Z_Param_Out_Request,FDChannelChatResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABMessage Function SendChannelMessage

// Begin Class UABMessage Function SendJoinDefaultChannelChatRequest
struct Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics
{
	struct ABMessage_eventSendJoinDefaultChannelChatRequest_Parms
	{
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendJoinDefaultChannelChatRequest_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DJoinDefaultChannelChatResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1265090820
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendJoinDefaultChannelChatRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendJoinDefaultChannelChatRequest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SendJoinDefaultChannelChatRequest", nullptr, nullptr, Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::ABMessage_eventSendJoinDefaultChannelChatRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::ABMessage_eventSendJoinDefaultChannelChatRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMessage::execSendJoinDefaultChannelChatRequest)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SendJoinDefaultChannelChatRequest(FDJoinDefaultChannelChatResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABMessage Function SendJoinDefaultChannelChatRequest

// Begin Class UABMessage Function SendPartyMessage
struct Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics
{
	struct ABMessage_eventSendPartyMessage_Parms
	{
		FSendPartyMessageRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendPartyMessage_Parms, Request), Z_Construct_UScriptStruct_FSendPartyMessageRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 2388112973
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendPartyMessage_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyChatResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1223105277
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendPartyMessage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendPartyMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SendPartyMessage", nullptr, nullptr, Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::ABMessage_eventSendPartyMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::ABMessage_eventSendPartyMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMessage_SendPartyMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMessage::execSendPartyMessage)
{
	P_GET_STRUCT_REF(FSendPartyMessageRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SendPartyMessage(Z_Param_Out_Request,FDPartyChatResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABMessage Function SendPartyMessage

// Begin Class UABMessage Function SendPing
struct Z_Construct_UFunction_UABMessage_SendPing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SendPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SendPing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMessage_SendPing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABMessage_SendPing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMessage_SendPing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMessage::execSendPing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendPing();
	P_NATIVE_END;
}
// End Class UABMessage Function SendPing

// Begin Class UABMessage Function SendPrivateMessage
struct Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics
{
	struct ABMessage_eventSendPrivateMessage_Parms
	{
		FSendPrivateMessageRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendPrivateMessage_Parms, Request), Z_Construct_UScriptStruct_FSendPrivateMessageRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3037522041
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendPrivateMessage_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPersonalChatResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1765225165
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendPrivateMessage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSendPrivateMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SendPrivateMessage", nullptr, nullptr, Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::ABMessage_eventSendPrivateMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::ABMessage_eventSendPrivateMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMessage_SendPrivateMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMessage::execSendPrivateMessage)
{
	P_GET_STRUCT_REF(FSendPrivateMessageRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SendPrivateMessage(Z_Param_Out_Request,FDPersonalChatResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABMessage Function SendPrivateMessage

// Begin Class UABMessage Function SetChannelMessageNotifDelegate
struct Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics
{
	struct ABMessage_eventSetChannelMessageNotifDelegate_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSetChannelMessageNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DChannelChatNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 644537145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SetChannelMessageNotifDelegate", nullptr, nullptr, Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::ABMessage_eventSetChannelMessageNotifDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::ABMessage_eventSetChannelMessageNotifDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMessage::execSetChannelMessageNotifDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChannelMessageNotifDelegate(FDChannelChatNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABMessage Function SetChannelMessageNotifDelegate

// Begin Class UABMessage Function SetMessageNotifDelegate
struct Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics
{
	struct ABMessage_eventSetMessageNotifDelegate_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSetMessageNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMessageNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3277881147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SetMessageNotifDelegate", nullptr, nullptr, Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::ABMessage_eventSetMessageNotifDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::ABMessage_eventSetMessageNotifDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMessage::execSetMessageNotifDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMessageNotifDelegate(FDMessageNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABMessage Function SetMessageNotifDelegate

// Begin Class UABMessage Function SetOnPartyChatNotification
struct Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics
{
	struct ABMessage_eventSetOnPartyChatNotification_Parms
	{
		FScriptDelegate OnPartyChatNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPartyChatNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::NewProp_OnPartyChatNotif = { "OnPartyChatNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSetOnPartyChatNotification_Parms, OnPartyChatNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyChatNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1204634822
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::NewProp_OnPartyChatNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SetOnPartyChatNotification", nullptr, nullptr, Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::ABMessage_eventSetOnPartyChatNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::ABMessage_eventSetOnPartyChatNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMessage::execSetOnPartyChatNotification)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPartyChatNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnPartyChatNotification(FDPartyChatNotif(Z_Param_OnPartyChatNotif));
	P_NATIVE_END;
}
// End Class UABMessage Function SetOnPartyChatNotification

// Begin Class UABMessage Function SetPrivateMessageNotifDelegate
struct Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics
{
	struct ABMessage_eventSetPrivateMessageNotifDelegate_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMessage_eventSetPrivateMessageNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPersonalChatNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3740251862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SetPrivateMessageNotifDelegate", nullptr, nullptr, Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::ABMessage_eventSetPrivateMessageNotifDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::ABMessage_eventSetPrivateMessageNotifDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMessage::execSetPrivateMessageNotifDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPrivateMessageNotifDelegate(FDPersonalChatNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABMessage Function SetPrivateMessageNotifDelegate

// Begin Class UABMessage
void UABMessage::StaticRegisterNativesUABMessage()
{
	UClass* Class = UABMessage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendChannelMessage", &UABMessage::execSendChannelMessage },
		{ "SendJoinDefaultChannelChatRequest", &UABMessage::execSendJoinDefaultChannelChatRequest },
		{ "SendPartyMessage", &UABMessage::execSendPartyMessage },
		{ "SendPing", &UABMessage::execSendPing },
		{ "SendPrivateMessage", &UABMessage::execSendPrivateMessage },
		{ "SetChannelMessageNotifDelegate", &UABMessage::execSetChannelMessageNotifDelegate },
		{ "SetMessageNotifDelegate", &UABMessage::execSetMessageNotifDelegate },
		{ "SetOnPartyChatNotification", &UABMessage::execSetOnPartyChatNotification },
		{ "SetPrivateMessageNotifDelegate", &UABMessage::execSetPrivateMessageNotifDelegate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABMessage);
UClass* Z_Construct_UClass_UABMessage_NoRegister()
{
	return UABMessage::StaticClass();
}
struct Z_Construct_UClass_UABMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABMessage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABMessage_SendChannelMessage, "SendChannelMessage" }, // 2125518308
		{ &Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest, "SendJoinDefaultChannelChatRequest" }, // 2698754332
		{ &Z_Construct_UFunction_UABMessage_SendPartyMessage, "SendPartyMessage" }, // 4168396071
		{ &Z_Construct_UFunction_UABMessage_SendPing, "SendPing" }, // 1716778634
		{ &Z_Construct_UFunction_UABMessage_SendPrivateMessage, "SendPrivateMessage" }, // 2526065235
		{ &Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate, "SetChannelMessageNotifDelegate" }, // 1104373634
		{ &Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate, "SetMessageNotifDelegate" }, // 2551903059
		{ &Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification, "SetOnPartyChatNotification" }, // 1302145934
		{ &Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate, "SetPrivateMessageNotifDelegate" }, // 3950742440
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABMessage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABMessage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABMessage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABMessage_Statics::ClassParams = {
	&UABMessage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UABMessage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABMessage()
{
	if (!Z_Registration_Info_UClass_UABMessage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABMessage.OuterSingleton, Z_Construct_UClass_UABMessage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABMessage.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABMessage>()
{
	return UABMessage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABMessage);
UABMessage::~UABMessage() {}
// End Class UABMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABMessage, UABMessage::StaticClass, TEXT("UABMessage"), &Z_Registration_Info_UClass_UABMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABMessage), 4272305410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_2293781235(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMessage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

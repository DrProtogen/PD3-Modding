// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABCredentials.h"
#include "AccelByteUe4Sdk/Public/AccountUserData.h"
#include "AccelByteUe4Sdk/Public/ErrorOAuthInfo.h"
#include "AccelByteUe4Sdk/Public/Oauth2Token.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCredentials() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCredentials();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCredentials_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_ESettingsEnvironment();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccountUserData();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FErrorOAuthInfo();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FOauth2Token();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABCredentials Function ForgetAll
struct Z_Construct_UFunction_UABCredentials_ForgetAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_ForgetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "ForgetAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_ForgetAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_ForgetAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABCredentials_ForgetAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_ForgetAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execForgetAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForgetAll();
	P_NATIVE_END;
}
// End Class UABCredentials Function ForgetAll

// Begin Class UABCredentials Function GetAccessToken
struct Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics
{
	struct ABCredentials_eventGetAccessToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventGetAccessToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetAccessToken", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::ABCredentials_eventGetAccessToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::ABCredentials_eventGetAccessToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_GetAccessToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_GetAccessToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execGetAccessToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAccessToken();
	P_NATIVE_END;
}
// End Class UABCredentials Function GetAccessToken

// Begin Class UABCredentials Function GetAccountUserData
struct Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics
{
	struct ABCredentials_eventGetAccountUserData_Parms
	{
		FAccountUserData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventGetAccountUserData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAccountUserData, METADATA_PARAMS(0, nullptr) }; // 2933282414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetAccountUserData", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::ABCredentials_eventGetAccountUserData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::ABCredentials_eventGetAccountUserData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_GetAccountUserData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_GetAccountUserData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execGetAccountUserData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAccountUserData*)Z_Param__Result=P_THIS->GetAccountUserData();
	P_NATIVE_END;
}
// End Class UABCredentials Function GetAccountUserData

// Begin Class UABCredentials Function GetAuthToken
struct Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics
{
	struct ABCredentials_eventGetAuthToken_Parms
	{
		FOauth2Token ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventGetAuthToken_Parms, ReturnValue), Z_Construct_UScriptStruct_FOauth2Token, METADATA_PARAMS(0, nullptr) }; // 3676478223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetAuthToken", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::ABCredentials_eventGetAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::ABCredentials_eventGetAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_GetAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_GetAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execGetAuthToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOauth2Token*)Z_Param__Result=P_THIS->GetAuthToken();
	P_NATIVE_END;
}
// End Class UABCredentials Function GetAuthToken

// Begin Class UABCredentials Function GetLinkingToken
struct Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics
{
	struct ABCredentials_eventGetLinkingToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventGetLinkingToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetLinkingToken", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::ABCredentials_eventGetLinkingToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::ABCredentials_eventGetLinkingToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_GetLinkingToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_GetLinkingToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execGetLinkingToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetLinkingToken();
	P_NATIVE_END;
}
// End Class UABCredentials Function GetLinkingToken

// Begin Class UABCredentials Function GetNamespace
struct Z_Construct_UFunction_UABCredentials_GetNamespace_Statics
{
	struct ABCredentials_eventGetNamespace_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventGetNamespace_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetNamespace", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::ABCredentials_eventGetNamespace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::ABCredentials_eventGetNamespace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_GetNamespace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_GetNamespace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execGetNamespace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetNamespace();
	P_NATIVE_END;
}
// End Class UABCredentials Function GetNamespace

// Begin Class UABCredentials Function GetPlatformUserId
struct Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics
{
	struct ABCredentials_eventGetPlatformUserId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventGetPlatformUserId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetPlatformUserId", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::ABCredentials_eventGetPlatformUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::ABCredentials_eventGetPlatformUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_GetPlatformUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_GetPlatformUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execGetPlatformUserId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetPlatformUserId();
	P_NATIVE_END;
}
// End Class UABCredentials Function GetPlatformUserId

// Begin Class UABCredentials Function GetRefreshToken
struct Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics
{
	struct ABCredentials_eventGetRefreshToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventGetRefreshToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetRefreshToken", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::ABCredentials_eventGetRefreshToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::ABCredentials_eventGetRefreshToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_GetRefreshToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_GetRefreshToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execGetRefreshToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetRefreshToken();
	P_NATIVE_END;
}
// End Class UABCredentials Function GetRefreshToken

// Begin Class UABCredentials Function GetUserDisplayName
struct Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics
{
	struct ABCredentials_eventGetUserDisplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventGetUserDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetUserDisplayName", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::ABCredentials_eventGetUserDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::ABCredentials_eventGetUserDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_GetUserDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_GetUserDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execGetUserDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUserDisplayName();
	P_NATIVE_END;
}
// End Class UABCredentials Function GetUserDisplayName

// Begin Class UABCredentials Function GetUserEmailAddress
struct Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics
{
	struct ABCredentials_eventGetUserEmailAddress_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventGetUserEmailAddress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetUserEmailAddress", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::ABCredentials_eventGetUserEmailAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::ABCredentials_eventGetUserEmailAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_GetUserEmailAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_GetUserEmailAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execGetUserEmailAddress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUserEmailAddress();
	P_NATIVE_END;
}
// End Class UABCredentials Function GetUserEmailAddress

// Begin Class UABCredentials Function GetUserId
struct Z_Construct_UFunction_UABCredentials_GetUserId_Statics
{
	struct ABCredentials_eventGetUserId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_GetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventGetUserId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_GetUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_GetUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_GetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "GetUserId", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_GetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_GetUserId_Statics::ABCredentials_eventGetUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_GetUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_GetUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_GetUserId_Statics::ABCredentials_eventGetUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_GetUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_GetUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execGetUserId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUserId();
	P_NATIVE_END;
}
// End Class UABCredentials Function GetUserId

// Begin Class UABCredentials Function IsComply
struct Z_Construct_UFunction_UABCredentials_IsComply_Statics
{
	struct ABCredentials_eventIsComply_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UABCredentials_IsComply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ABCredentials_eventIsComply_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABCredentials_IsComply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABCredentials_eventIsComply_Parms), &Z_Construct_UFunction_UABCredentials_IsComply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_IsComply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_IsComply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_IsComply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_IsComply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "IsComply", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_IsComply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_IsComply_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_IsComply_Statics::ABCredentials_eventIsComply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_IsComply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_IsComply_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_IsComply_Statics::ABCredentials_eventIsComply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_IsComply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_IsComply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execIsComply)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsComply();
	P_NATIVE_END;
}
// End Class UABCredentials Function IsComply

// Begin Class UABCredentials Function IsSessionValid
struct Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics
{
	struct ABCredentials_eventIsSessionValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ABCredentials_eventIsSessionValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABCredentials_eventIsSessionValid_Parms), &Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "IsSessionValid", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::ABCredentials_eventIsSessionValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::ABCredentials_eventIsSessionValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_IsSessionValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_IsSessionValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execIsSessionValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSessionValid();
	P_NATIVE_END;
}
// End Class UABCredentials Function IsSessionValid

// Begin Class UABCredentials Function PollRefreshToken
struct Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics
{
	struct ABCredentials_eventPollRefreshToken_Parms
	{
		float CurrentTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventPollRefreshToken_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::NewProp_CurrentTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "PollRefreshToken", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::ABCredentials_eventPollRefreshToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::ABCredentials_eventPollRefreshToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_PollRefreshToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_PollRefreshToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execPollRefreshToken)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PollRefreshToken(Z_Param_CurrentTime);
	P_NATIVE_END;
}
// End Class UABCredentials Function PollRefreshToken

// Begin Class UABCredentials Function ScheduleRefreshToken
struct Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics
{
	struct ABCredentials_eventScheduleRefreshToken_Parms
	{
		float NextRefreshTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NextRefreshTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::NewProp_NextRefreshTime = { "NextRefreshTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventScheduleRefreshToken_Parms, NextRefreshTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::NewProp_NextRefreshTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "ScheduleRefreshToken", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::ABCredentials_eventScheduleRefreshToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::ABCredentials_eventScheduleRefreshToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execScheduleRefreshToken)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NextRefreshTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScheduleRefreshToken(Z_Param_NextRefreshTime);
	P_NATIVE_END;
}
// End Class UABCredentials Function ScheduleRefreshToken

// Begin Class UABCredentials Function SetAccountUserData
struct Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics
{
	struct ABCredentials_eventSetAccountUserData_Parms
	{
		FAccountUserData InAccountUserData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAccountUserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::NewProp_InAccountUserData = { "InAccountUserData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventSetAccountUserData_Parms, InAccountUserData), Z_Construct_UScriptStruct_FAccountUserData, METADATA_PARAMS(0, nullptr) }; // 2933282414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::NewProp_InAccountUserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "SetAccountUserData", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::ABCredentials_eventSetAccountUserData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::ABCredentials_eventSetAccountUserData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_SetAccountUserData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_SetAccountUserData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execSetAccountUserData)
{
	P_GET_STRUCT(FAccountUserData,Z_Param_InAccountUserData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAccountUserData(Z_Param_InAccountUserData);
	P_NATIVE_END;
}
// End Class UABCredentials Function SetAccountUserData

// Begin Class UABCredentials Function SetAuthToken
struct Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics
{
	struct ABCredentials_eventSetAuthToken_Parms
	{
		FOauth2Token NewAuthToken;
		float CurrentTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAuthToken;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::NewProp_NewAuthToken = { "NewAuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventSetAuthToken_Parms, NewAuthToken), Z_Construct_UScriptStruct_FOauth2Token, METADATA_PARAMS(0, nullptr) }; // 3676478223
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventSetAuthToken_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::NewProp_NewAuthToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::NewProp_CurrentTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "SetAuthToken", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::ABCredentials_eventSetAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::ABCredentials_eventSetAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_SetAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_SetAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execSetAuthToken)
{
	P_GET_STRUCT(FOauth2Token,Z_Param_NewAuthToken);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAuthToken(Z_Param_NewAuthToken,Z_Param_CurrentTime);
	P_NATIVE_END;
}
// End Class UABCredentials Function SetAuthToken

// Begin Class UABCredentials Function SetClientCredentials
struct Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics
{
	struct ABCredentials_eventSetClientCredentials_Parms
	{
		ESettingsEnvironment Environment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Environment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Environment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::NewProp_Environment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::NewProp_Environment = { "Environment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventSetClientCredentials_Parms, Environment), Z_Construct_UEnum_AccelByteUe4Sdk_ESettingsEnvironment, METADATA_PARAMS(0, nullptr) }; // 785891304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::NewProp_Environment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::NewProp_Environment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "SetClientCredentials", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::ABCredentials_eventSetClientCredentials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::ABCredentials_eventSetClientCredentials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_SetClientCredentials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_SetClientCredentials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execSetClientCredentials)
{
	P_GET_ENUM(ESettingsEnvironment,Z_Param_Environment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetClientCredentials(ESettingsEnvironment(Z_Param_Environment));
	P_NATIVE_END;
}
// End Class UABCredentials Function SetClientCredentials

// Begin Class UABCredentials Function SetErrorOAuth
struct Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics
{
	struct ABCredentials_eventSetErrorOAuth_Parms
	{
		FErrorOAuthInfo ErrorOAuthInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorOAuthInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::NewProp_ErrorOAuthInfo = { "ErrorOAuthInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventSetErrorOAuth_Parms, ErrorOAuthInfo), Z_Construct_UScriptStruct_FErrorOAuthInfo, METADATA_PARAMS(0, nullptr) }; // 1129967917
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::NewProp_ErrorOAuthInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "SetErrorOAuth", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::ABCredentials_eventSetErrorOAuth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::ABCredentials_eventSetErrorOAuth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_SetErrorOAuth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_SetErrorOAuth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execSetErrorOAuth)
{
	P_GET_STRUCT(FErrorOAuthInfo,Z_Param_ErrorOAuthInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetErrorOAuth(Z_Param_ErrorOAuthInfo);
	P_NATIVE_END;
}
// End Class UABCredentials Function SetErrorOAuth

// Begin Class UABCredentials Function SetUserEmailAddress
struct Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics
{
	struct ABCredentials_eventSetUserEmailAddress_Parms
	{
		FString EmailAddress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCredentials_eventSetUserEmailAddress_Parms, EmailAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmailAddress_MetaData), NewProp_EmailAddress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::NewProp_EmailAddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCredentials, nullptr, "SetUserEmailAddress", nullptr, nullptr, Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::ABCredentials_eventSetUserEmailAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::ABCredentials_eventSetUserEmailAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCredentials_SetUserEmailAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCredentials_SetUserEmailAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCredentials::execSetUserEmailAddress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserEmailAddress(Z_Param_EmailAddress);
	P_NATIVE_END;
}
// End Class UABCredentials Function SetUserEmailAddress

// Begin Class UABCredentials
void UABCredentials::StaticRegisterNativesUABCredentials()
{
	UClass* Class = UABCredentials::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForgetAll", &UABCredentials::execForgetAll },
		{ "GetAccessToken", &UABCredentials::execGetAccessToken },
		{ "GetAccountUserData", &UABCredentials::execGetAccountUserData },
		{ "GetAuthToken", &UABCredentials::execGetAuthToken },
		{ "GetLinkingToken", &UABCredentials::execGetLinkingToken },
		{ "GetNamespace", &UABCredentials::execGetNamespace },
		{ "GetPlatformUserId", &UABCredentials::execGetPlatformUserId },
		{ "GetRefreshToken", &UABCredentials::execGetRefreshToken },
		{ "GetUserDisplayName", &UABCredentials::execGetUserDisplayName },
		{ "GetUserEmailAddress", &UABCredentials::execGetUserEmailAddress },
		{ "GetUserId", &UABCredentials::execGetUserId },
		{ "IsComply", &UABCredentials::execIsComply },
		{ "IsSessionValid", &UABCredentials::execIsSessionValid },
		{ "PollRefreshToken", &UABCredentials::execPollRefreshToken },
		{ "ScheduleRefreshToken", &UABCredentials::execScheduleRefreshToken },
		{ "SetAccountUserData", &UABCredentials::execSetAccountUserData },
		{ "SetAuthToken", &UABCredentials::execSetAuthToken },
		{ "SetClientCredentials", &UABCredentials::execSetClientCredentials },
		{ "SetErrorOAuth", &UABCredentials::execSetErrorOAuth },
		{ "SetUserEmailAddress", &UABCredentials::execSetUserEmailAddress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCredentials);
UClass* Z_Construct_UClass_UABCredentials_NoRegister()
{
	return UABCredentials::StaticClass();
}
struct Z_Construct_UClass_UABCredentials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABCredentials.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABCredentials.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABCredentials_ForgetAll, "ForgetAll" }, // 3188908713
		{ &Z_Construct_UFunction_UABCredentials_GetAccessToken, "GetAccessToken" }, // 513319129
		{ &Z_Construct_UFunction_UABCredentials_GetAccountUserData, "GetAccountUserData" }, // 3908293097
		{ &Z_Construct_UFunction_UABCredentials_GetAuthToken, "GetAuthToken" }, // 2070418570
		{ &Z_Construct_UFunction_UABCredentials_GetLinkingToken, "GetLinkingToken" }, // 2164645528
		{ &Z_Construct_UFunction_UABCredentials_GetNamespace, "GetNamespace" }, // 1898942100
		{ &Z_Construct_UFunction_UABCredentials_GetPlatformUserId, "GetPlatformUserId" }, // 1982951658
		{ &Z_Construct_UFunction_UABCredentials_GetRefreshToken, "GetRefreshToken" }, // 2359564196
		{ &Z_Construct_UFunction_UABCredentials_GetUserDisplayName, "GetUserDisplayName" }, // 3419537129
		{ &Z_Construct_UFunction_UABCredentials_GetUserEmailAddress, "GetUserEmailAddress" }, // 335683042
		{ &Z_Construct_UFunction_UABCredentials_GetUserId, "GetUserId" }, // 2640399078
		{ &Z_Construct_UFunction_UABCredentials_IsComply, "IsComply" }, // 632542672
		{ &Z_Construct_UFunction_UABCredentials_IsSessionValid, "IsSessionValid" }, // 3433879619
		{ &Z_Construct_UFunction_UABCredentials_PollRefreshToken, "PollRefreshToken" }, // 4104702735
		{ &Z_Construct_UFunction_UABCredentials_ScheduleRefreshToken, "ScheduleRefreshToken" }, // 1764358490
		{ &Z_Construct_UFunction_UABCredentials_SetAccountUserData, "SetAccountUserData" }, // 983504844
		{ &Z_Construct_UFunction_UABCredentials_SetAuthToken, "SetAuthToken" }, // 872035572
		{ &Z_Construct_UFunction_UABCredentials_SetClientCredentials, "SetClientCredentials" }, // 2743655286
		{ &Z_Construct_UFunction_UABCredentials_SetErrorOAuth, "SetErrorOAuth" }, // 3612553767
		{ &Z_Construct_UFunction_UABCredentials_SetUserEmailAddress, "SetUserEmailAddress" }, // 1210733414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCredentials>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABCredentials_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCredentials_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCredentials_Statics::ClassParams = {
	&UABCredentials::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCredentials_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCredentials_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCredentials()
{
	if (!Z_Registration_Info_UClass_UABCredentials.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCredentials.OuterSingleton, Z_Construct_UClass_UABCredentials_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCredentials.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABCredentials>()
{
	return UABCredentials::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCredentials);
UABCredentials::~UABCredentials() {}
// End Class UABCredentials

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCredentials, UABCredentials::StaticClass, TEXT("UABCredentials"), &Z_Registration_Info_UClass_UABCredentials, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCredentials), 2125616739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_4186626055(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCredentials_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

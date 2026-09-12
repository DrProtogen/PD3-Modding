// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteInstance() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABApiClient_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteInstance();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteInstance_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UServerApiClient_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UAccelByteInstance Function CreateAccelByteInstance
struct Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics
{
	struct AccelByteInstance_eventCreateAccelByteInstance_Parms
	{
		UAccelByteInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AccelByteInstance_eventCreateAccelByteInstance_Parms, ReturnValue), Z_Construct_UClass_UAccelByteInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteInstance, nullptr, "CreateAccelByteInstance", nullptr, nullptr, Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::AccelByteInstance_eventCreateAccelByteInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::AccelByteInstance_eventCreateAccelByteInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAccelByteInstance::execCreateAccelByteInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAccelByteInstance**)Z_Param__Result=UAccelByteInstance::CreateAccelByteInstance();
	P_NATIVE_END;
}
// End Class UAccelByteInstance Function CreateAccelByteInstance

// Begin Class UAccelByteInstance Function GetApiClient
struct Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics
{
	struct AccelByteInstance_eventGetApiClient_Parms
	{
		FString Key;
		UABApiClient* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AccelByteInstance_eventGetApiClient_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AccelByteInstance_eventGetApiClient_Parms, ReturnValue), Z_Construct_UClass_UABApiClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteInstance, nullptr, "GetApiClient", nullptr, nullptr, Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::AccelByteInstance_eventGetApiClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::AccelByteInstance_eventGetApiClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAccelByteInstance_GetApiClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAccelByteInstance_GetApiClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAccelByteInstance::execGetApiClient)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UABApiClient**)Z_Param__Result=P_THIS->GetApiClient(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UAccelByteInstance Function GetApiClient

// Begin Class UAccelByteInstance Function GetServerApiClient
struct Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics
{
	struct AccelByteInstance_eventGetServerApiClient_Parms
	{
		FString Key;
		UServerApiClient* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AccelByteInstance_eventGetServerApiClient_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AccelByteInstance_eventGetServerApiClient_Parms, ReturnValue), Z_Construct_UClass_UServerApiClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteInstance, nullptr, "GetServerApiClient", nullptr, nullptr, Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::AccelByteInstance_eventGetServerApiClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::AccelByteInstance_eventGetServerApiClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAccelByteInstance::execGetServerApiClient)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UServerApiClient**)Z_Param__Result=P_THIS->GetServerApiClient(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UAccelByteInstance Function GetServerApiClient

// Begin Class UAccelByteInstance
void UAccelByteInstance::StaticRegisterNativesUAccelByteInstance()
{
	UClass* Class = UAccelByteInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAccelByteInstance", &UAccelByteInstance::execCreateAccelByteInstance },
		{ "GetApiClient", &UAccelByteInstance::execGetApiClient },
		{ "GetServerApiClient", &UAccelByteInstance::execGetServerApiClient },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAccelByteInstance);
UClass* Z_Construct_UClass_UAccelByteInstance_NoRegister()
{
	return UAccelByteInstance::StaticClass();
}
struct Z_Construct_UClass_UAccelByteInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAccelByteInstance_CreateAccelByteInstance, "CreateAccelByteInstance" }, // 803838283
		{ &Z_Construct_UFunction_UAccelByteInstance_GetApiClient, "GetApiClient" }, // 1793596769
		{ &Z_Construct_UFunction_UAccelByteInstance_GetServerApiClient, "GetServerApiClient" }, // 2256999692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAccelByteInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteInstance_Statics::ClassParams = {
	&UAccelByteInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAccelByteInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAccelByteInstance()
{
	if (!Z_Registration_Info_UClass_UAccelByteInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAccelByteInstance.OuterSingleton, Z_Construct_UClass_UAccelByteInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAccelByteInstance.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UAccelByteInstance>()
{
	return UAccelByteInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteInstance);
UAccelByteInstance::~UAccelByteInstance() {}
// End Class UAccelByteInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAccelByteInstance, UAccelByteInstance::StaticClass, TEXT("UAccelByteInstance"), &Z_Registration_Info_UClass_UAccelByteInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAccelByteInstance), 1345873718U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_3560451867(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

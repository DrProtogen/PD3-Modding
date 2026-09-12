// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABUtilities.h"
#include "Runtime/JsonUtilities/Public/JsonObjectWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABUtilities() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABUtilities();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABUtilities_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABUtilities Function AddOrReplaceJsonArrayValue
struct Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics
{
	struct ABUtilities_eventAddOrReplaceJsonArrayValue_Parms
	{
		FJsonObjectWrapper ObjectWrapper;
		FString Key;
		TArray<FString> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonArrayValue_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(0, nullptr) }; // 3936905286
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonArrayValue_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonArrayValue_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_ObjectWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "AddOrReplaceJsonArrayValue", nullptr, nullptr, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::ABUtilities_eventAddOrReplaceJsonArrayValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::ABUtilities_eventAddOrReplaceJsonArrayValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUtilities::execAddOrReplaceJsonArrayValue)
{
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UABUtilities::AddOrReplaceJsonArrayValue(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UABUtilities Function AddOrReplaceJsonArrayValue

// Begin Class UABUtilities Function AddOrReplaceJsonBoolValue
struct Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics
{
	struct ABUtilities_eventAddOrReplaceJsonBoolValue_Parms
	{
		FJsonObjectWrapper ObjectWrapper;
		FString Key;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonBoolValue_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(0, nullptr) }; // 3936905286
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonBoolValue_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Value_SetBit(void* Obj)
{
	((ABUtilities_eventAddOrReplaceJsonBoolValue_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABUtilities_eventAddOrReplaceJsonBoolValue_Parms), &Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_ObjectWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "AddOrReplaceJsonBoolValue", nullptr, nullptr, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::ABUtilities_eventAddOrReplaceJsonBoolValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::ABUtilities_eventAddOrReplaceJsonBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUtilities::execAddOrReplaceJsonBoolValue)
{
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UABUtilities::AddOrReplaceJsonBoolValue(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UABUtilities Function AddOrReplaceJsonBoolValue

// Begin Class UABUtilities Function AddOrReplaceJsonNumberValue
struct Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics
{
	struct ABUtilities_eventAddOrReplaceJsonNumberValue_Parms
	{
		FJsonObjectWrapper ObjectWrapper;
		FString Key;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonNumberValue_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(0, nullptr) }; // 3936905286
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonNumberValue_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonNumberValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_ObjectWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "AddOrReplaceJsonNumberValue", nullptr, nullptr, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::ABUtilities_eventAddOrReplaceJsonNumberValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::ABUtilities_eventAddOrReplaceJsonNumberValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUtilities::execAddOrReplaceJsonNumberValue)
{
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UABUtilities::AddOrReplaceJsonNumberValue(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UABUtilities Function AddOrReplaceJsonNumberValue

// Begin Class UABUtilities Function AddOrReplaceJsonStringValue
struct Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics
{
	struct ABUtilities_eventAddOrReplaceJsonStringValue_Parms
	{
		FJsonObjectWrapper ObjectWrapper;
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonStringValue_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(0, nullptr) }; // 3936905286
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonStringValue_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonStringValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_ObjectWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "AddOrReplaceJsonStringValue", nullptr, nullptr, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::ABUtilities_eventAddOrReplaceJsonStringValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::ABUtilities_eventAddOrReplaceJsonStringValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUtilities::execAddOrReplaceJsonStringValue)
{
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UABUtilities::AddOrReplaceJsonStringValue(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UABUtilities Function AddOrReplaceJsonStringValue

// Begin Class UABUtilities Function DateTimeToString
struct Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics
{
	struct ABUtilities_eventDateTimeToString_Parms
	{
		FDateTime DateTime;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventDateTimeToString_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DateTime_MetaData), NewProp_DateTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventDateTimeToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_DateTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "DateTimeToString", nullptr, nullptr, Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::ABUtilities_eventDateTimeToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::ABUtilities_eventDateTimeToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUtilities_DateTimeToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUtilities::execDateTimeToString)
{
	P_GET_STRUCT_REF(FDateTime,Z_Param_Out_DateTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UABUtilities::DateTimeToString(Z_Param_Out_DateTime);
	P_NATIVE_END;
}
// End Class UABUtilities Function DateTimeToString

// Begin Class UABUtilities Function GetJsonObjectAsJsonString
struct Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics
{
	struct ABUtilities_eventGetJsonObjectAsJsonString_Parms
	{
		FJsonObjectWrapper ObjectWrapper;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonObjectAsJsonString_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectWrapper_MetaData), NewProp_ObjectWrapper_MetaData) }; // 3936905286
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonObjectAsJsonString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ObjectWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "GetJsonObjectAsJsonString", nullptr, nullptr, Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::ABUtilities_eventGetJsonObjectAsJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::ABUtilities_eventGetJsonObjectAsJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUtilities::execGetJsonObjectAsJsonString)
{
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UABUtilities::GetJsonObjectAsJsonString(Z_Param_Out_ObjectWrapper);
	P_NATIVE_END;
}
// End Class UABUtilities Function GetJsonObjectAsJsonString

// Begin Class UABUtilities Function GetJsonValueAsArray
struct Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics
{
	struct ABUtilities_eventGetJsonValueAsArray_Parms
	{
		FJsonObjectWrapper ObjectWrapper;
		FString Key;
		TArray<FString> OutArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsArray_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectWrapper_MetaData), NewProp_ObjectWrapper_MetaData) }; // 3936905286
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ABUtilities_eventGetJsonValueAsArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABUtilities_eventGetJsonValueAsArray_Parms), &Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ObjectWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_OutArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "GetJsonValueAsArray", nullptr, nullptr, Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::ABUtilities_eventGetJsonValueAsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::ABUtilities_eventGetJsonValueAsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUtilities::execGetJsonValueAsArray)
{
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UABUtilities::GetJsonValueAsArray(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// End Class UABUtilities Function GetJsonValueAsArray

// Begin Class UABUtilities Function GetJsonValueAsBool
struct Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics
{
	struct ABUtilities_eventGetJsonValueAsBool_Parms
	{
		FJsonObjectWrapper ObjectWrapper;
		FString Key;
		bool OutBool;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_OutBool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutBool;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsBool_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectWrapper_MetaData), NewProp_ObjectWrapper_MetaData) }; // 3936905286
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsBool_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_OutBool_SetBit(void* Obj)
{
	((ABUtilities_eventGetJsonValueAsBool_Parms*)Obj)->OutBool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_OutBool = { "OutBool", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABUtilities_eventGetJsonValueAsBool_Parms), &Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_OutBool_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ABUtilities_eventGetJsonValueAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABUtilities_eventGetJsonValueAsBool_Parms), &Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ObjectWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_OutBool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "GetJsonValueAsBool", nullptr, nullptr, Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::ABUtilities_eventGetJsonValueAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::ABUtilities_eventGetJsonValueAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUtilities::execGetJsonValueAsBool)
{
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL_REF(Z_Param_Out_OutBool);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UABUtilities::GetJsonValueAsBool(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Out_OutBool);
	P_NATIVE_END;
}
// End Class UABUtilities Function GetJsonValueAsBool

// Begin Class UABUtilities Function GetJsonValueAsNumber
struct Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics
{
	struct ABUtilities_eventGetJsonValueAsNumber_Parms
	{
		FJsonObjectWrapper ObjectWrapper;
		FString Key;
		float OutNumber;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutNumber;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsNumber_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectWrapper_MetaData), NewProp_ObjectWrapper_MetaData) }; // 3936905286
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsNumber_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_OutNumber = { "OutNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsNumber_Parms, OutNumber), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ABUtilities_eventGetJsonValueAsNumber_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABUtilities_eventGetJsonValueAsNumber_Parms), &Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ObjectWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_OutNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "GetJsonValueAsNumber", nullptr, nullptr, Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::ABUtilities_eventGetJsonValueAsNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::ABUtilities_eventGetJsonValueAsNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUtilities::execGetJsonValueAsNumber)
{
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UABUtilities::GetJsonValueAsNumber(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Out_OutNumber);
	P_NATIVE_END;
}
// End Class UABUtilities Function GetJsonValueAsNumber

// Begin Class UABUtilities Function GetJsonValueAsString
struct Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics
{
	struct ABUtilities_eventGetJsonValueAsString_Parms
	{
		FJsonObjectWrapper ObjectWrapper;
		FString Key;
		FString OutString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsString_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectWrapper_MetaData), NewProp_ObjectWrapper_MetaData) }; // 3936905286
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsString_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsString_Parms, OutString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ABUtilities_eventGetJsonValueAsString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABUtilities_eventGetJsonValueAsString_Parms), &Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ObjectWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_OutString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "GetJsonValueAsString", nullptr, nullptr, Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::ABUtilities_eventGetJsonValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::ABUtilities_eventGetJsonValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUtilities_GetJsonValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUtilities::execGetJsonValueAsString)
{
	P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UABUtilities::GetJsonValueAsString(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Out_OutString);
	P_NATIVE_END;
}
// End Class UABUtilities Function GetJsonValueAsString

// Begin Class UABUtilities
void UABUtilities::StaticRegisterNativesUABUtilities()
{
	UClass* Class = UABUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOrReplaceJsonArrayValue", &UABUtilities::execAddOrReplaceJsonArrayValue },
		{ "AddOrReplaceJsonBoolValue", &UABUtilities::execAddOrReplaceJsonBoolValue },
		{ "AddOrReplaceJsonNumberValue", &UABUtilities::execAddOrReplaceJsonNumberValue },
		{ "AddOrReplaceJsonStringValue", &UABUtilities::execAddOrReplaceJsonStringValue },
		{ "DateTimeToString", &UABUtilities::execDateTimeToString },
		{ "GetJsonObjectAsJsonString", &UABUtilities::execGetJsonObjectAsJsonString },
		{ "GetJsonValueAsArray", &UABUtilities::execGetJsonValueAsArray },
		{ "GetJsonValueAsBool", &UABUtilities::execGetJsonValueAsBool },
		{ "GetJsonValueAsNumber", &UABUtilities::execGetJsonValueAsNumber },
		{ "GetJsonValueAsString", &UABUtilities::execGetJsonValueAsString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABUtilities);
UClass* Z_Construct_UClass_UABUtilities_NoRegister()
{
	return UABUtilities::StaticClass();
}
struct Z_Construct_UClass_UABUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABUtilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue, "AddOrReplaceJsonArrayValue" }, // 538827470
		{ &Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue, "AddOrReplaceJsonBoolValue" }, // 2480571170
		{ &Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue, "AddOrReplaceJsonNumberValue" }, // 887933828
		{ &Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue, "AddOrReplaceJsonStringValue" }, // 3940093405
		{ &Z_Construct_UFunction_UABUtilities_DateTimeToString, "DateTimeToString" }, // 3195702764
		{ &Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString, "GetJsonObjectAsJsonString" }, // 3322875398
		{ &Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray, "GetJsonValueAsArray" }, // 2257041360
		{ &Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool, "GetJsonValueAsBool" }, // 4226643644
		{ &Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber, "GetJsonValueAsNumber" }, // 4231550915
		{ &Z_Construct_UFunction_UABUtilities_GetJsonValueAsString, "GetJsonValueAsString" }, // 3921696079
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABUtilities_Statics::ClassParams = {
	&UABUtilities::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UABUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABUtilities()
{
	if (!Z_Registration_Info_UClass_UABUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABUtilities.OuterSingleton, Z_Construct_UClass_UABUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABUtilities.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABUtilities>()
{
	return UABUtilities::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABUtilities);
UABUtilities::~UABUtilities() {}
// End Class UABUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABUtilities, UABUtilities::StaticClass, TEXT("UABUtilities"), &Z_Registration_Info_UClass_UABUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABUtilities), 1296002804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_1034957643(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUtilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

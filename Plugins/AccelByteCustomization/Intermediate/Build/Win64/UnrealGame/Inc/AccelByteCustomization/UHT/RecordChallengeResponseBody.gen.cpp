// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/RecordChallengeResponseBody.h"
#include "AccelByteCustomization/Public/ChallengeObjectives.h"
#include "AccelByteCustomization/Public/ChallengePrerequisites.h"
#include "AccelByteCustomization/Public/ChallengeReward.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordChallengeResponseBody() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeObjectives();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengePrerequisites();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeReward();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FRecordChallengeResponseBody();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FRecordChallengeResponseBody
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecordChallengeResponseBody;
class UScriptStruct* FRecordChallengeResponseBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecordChallengeResponseBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecordChallengeResponseBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordChallengeResponseBody, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("RecordChallengeResponseBody"));
	}
	return Z_Registration_Info_UScriptStruct_RecordChallengeResponseBody.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FRecordChallengeResponseBody>()
{
	return FRecordChallengeResponseBody::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prerequisite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RecordChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/RecordChallengeResponseBody.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChallengeId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedAt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_IsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objective;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OrderNo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Prerequisite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reward;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UpdatedAt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordChallengeResponseBody>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_ChallengeId = { "ChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, ChallengeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeId_MetaData), NewProp_ChallengeId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, CreatedAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedAt_MetaData), NewProp_CreatedAt_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive_SetBit(void* Obj)
{
	((FRecordChallengeResponseBody*)Obj)->IsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRecordChallengeResponseBody), &Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActive_MetaData), NewProp_IsActive_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Objective), Z_Construct_UScriptStruct_FChallengeObjectives, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objective_MetaData), NewProp_Objective_MetaData) }; // 3593465277
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, OrderNo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderNo_MetaData), NewProp_OrderNo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Prerequisite = { "Prerequisite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Prerequisite), Z_Construct_UScriptStruct_FChallengePrerequisites, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prerequisite_MetaData), NewProp_Prerequisite_MetaData) }; // 1398259355
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Reward), Z_Construct_UScriptStruct_FChallengeReward, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reward_MetaData), NewProp_Reward_MetaData) }; // 1805742468
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordChallengeResponseBody, UpdatedAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedAt_MetaData), NewProp_UpdatedAt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_ChallengeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_CreatedAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_IsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Objective,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_OrderNo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Prerequisite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Reward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewProp_UpdatedAt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"RecordChallengeResponseBody",
	Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::PropPointers),
	sizeof(FRecordChallengeResponseBody),
	alignof(FRecordChallengeResponseBody),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordChallengeResponseBody()
{
	if (!Z_Registration_Info_UScriptStruct_RecordChallengeResponseBody.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecordChallengeResponseBody.InnerSingleton, Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecordChallengeResponseBody.InnerSingleton;
}
// End ScriptStruct FRecordChallengeResponseBody

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_RecordChallengeResponseBody_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRecordChallengeResponseBody::StaticStruct, Z_Construct_UScriptStruct_FRecordChallengeResponseBody_Statics::NewStructOps, TEXT("RecordChallengeResponseBody"), &Z_Registration_Info_UScriptStruct_RecordChallengeResponseBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordChallengeResponseBody), 638665031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_RecordChallengeResponseBody_h_2172964654(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_RecordChallengeResponseBody_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_RecordChallengeResponseBody_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/UserChallengeRecord.h"
#include "AccelByteCustomization/Public/ChallengeConfiguration.h"
#include "AccelByteCustomization/Public/ChallengeProgress.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserChallengeRecord() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UEnum* Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeConfiguration();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgress();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FUserChallengeRecord();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FUserChallengeRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserChallengeRecord;
class UScriptStruct* FUserChallengeRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserChallengeRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserChallengeRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserChallengeRecord, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("UserChallengeRecord"));
	}
	return Z_Registration_Info_UScriptStruct_UserChallengeRecord.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FUserChallengeRecord>()
{
	return FUserChallengeRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserChallengeRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserChallengeRecord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserChallengeRecord" },
		{ "ModuleRelativePath", "Public/UserChallengeRecord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserChallengeRecord" },
		{ "ModuleRelativePath", "Public/UserChallengeRecord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Challenge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserChallengeRecord" },
		{ "ModuleRelativePath", "Public/UserChallengeRecord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserChallengeRecord" },
		{ "ModuleRelativePath", "Public/UserChallengeRecord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserChallengeRecord" },
		{ "ModuleRelativePath", "Public/UserChallengeRecord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserChallengeRecord" },
		{ "ModuleRelativePath", "Public/UserChallengeRecord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserChallengeRecord" },
		{ "ModuleRelativePath", "Public/UserChallengeRecord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserChallengeRecord" },
		{ "ModuleRelativePath", "Public/UserChallengeRecord.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecordId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Challenge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UpdatedAt;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static void NewProp_IsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserChallengeRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_RecordId = { "RecordId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserChallengeRecord, RecordId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordId_MetaData), NewProp_RecordId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserChallengeRecord, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_Challenge = { "Challenge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserChallengeRecord, Challenge), Z_Construct_UScriptStruct_FChallengeConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Challenge_MetaData), NewProp_Challenge_MetaData) }; // 4062503679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserChallengeRecord, Progress), Z_Construct_UScriptStruct_FChallengeProgress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Progress_MetaData), NewProp_Progress_MetaData) }; // 561731545
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserChallengeRecord, UpdatedAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedAt_MetaData), NewProp_UpdatedAt_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserChallengeRecord, Status), Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 2490007878
void Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_IsActive_SetBit(void* Obj)
{
	((FUserChallengeRecord*)Obj)->IsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUserChallengeRecord), &Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActive_MetaData), NewProp_IsActive_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserChallengeRecord, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_RecordId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_Challenge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_Progress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_UpdatedAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_IsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewProp_Namespace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"UserChallengeRecord",
	Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::PropPointers),
	sizeof(FUserChallengeRecord),
	alignof(FUserChallengeRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserChallengeRecord()
{
	if (!Z_Registration_Info_UScriptStruct_UserChallengeRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserChallengeRecord.InnerSingleton, Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserChallengeRecord.InnerSingleton;
}
// End ScriptStruct FUserChallengeRecord

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_UserChallengeRecord_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUserChallengeRecord::StaticStruct, Z_Construct_UScriptStruct_FUserChallengeRecord_Statics::NewStructOps, TEXT("UserChallengeRecord"), &Z_Registration_Info_UScriptStruct_UserChallengeRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserChallengeRecord), 1504483263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_UserChallengeRecord_h_139844773(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_UserChallengeRecord_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_UserChallengeRecord_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

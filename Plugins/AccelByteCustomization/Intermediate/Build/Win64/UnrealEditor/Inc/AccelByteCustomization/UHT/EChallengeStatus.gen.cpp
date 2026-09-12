// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/EChallengeStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChallengeStatus() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UEnum* Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin Enum EChallengeStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChallengeStatus;
static UEnum* EChallengeStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChallengeStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChallengeStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("EChallengeStatus"));
	}
	return Z_Registration_Info_UEnum_EChallengeStatus.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UEnum* StaticEnum<EChallengeStatus>()
{
	return EChallengeStatus_StaticEnum();
}
struct Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COMPLETED.Name", "EChallengeStatus::COMPLETED" },
		{ "INIT.Name", "EChallengeStatus::INIT" },
		{ "INPROGRESS.Name", "EChallengeStatus::INPROGRESS" },
		{ "ModuleRelativePath", "Public/EChallengeStatus.h" },
		{ "UNAVAILABLE.Name", "EChallengeStatus::UNAVAILABLE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChallengeStatus::INIT", (int64)EChallengeStatus::INIT },
		{ "EChallengeStatus::INPROGRESS", (int64)EChallengeStatus::INPROGRESS },
		{ "EChallengeStatus::COMPLETED", (int64)EChallengeStatus::COMPLETED },
		{ "EChallengeStatus::UNAVAILABLE", (int64)EChallengeStatus::UNAVAILABLE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	"EChallengeStatus",
	"EChallengeStatus",
	Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus()
{
	if (!Z_Registration_Info_UEnum_EChallengeStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChallengeStatus.InnerSingleton, Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChallengeStatus.InnerSingleton;
}
// End Enum EChallengeStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EChallengeStatus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChallengeStatus_StaticEnum, TEXT("EChallengeStatus"), &Z_Registration_Info_UEnum_EChallengeStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2490007878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EChallengeStatus_h_48416622(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EChallengeStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EChallengeStatus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

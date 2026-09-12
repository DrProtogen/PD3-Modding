// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EChallengeStatus.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTECUSTOMIZATION_EChallengeStatus_generated_h
#error "EChallengeStatus.generated.h already included, missing '#pragma once' in EChallengeStatus.h"
#endif
#define ACCELBYTECUSTOMIZATION_EChallengeStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EChallengeStatus_h


#define FOREACH_ENUM_ECHALLENGESTATUS(op) \
	op(EChallengeStatus::INIT) \
	op(EChallengeStatus::INPROGRESS) \
	op(EChallengeStatus::COMPLETED) \
	op(EChallengeStatus::UNAVAILABLE) 

enum class EChallengeStatus : uint8;
template<> struct TIsUEnumClass<EChallengeStatus> { enum { Value = true }; };
template<> ACCELBYTECUSTOMIZATION_API UEnum* StaticEnum<EChallengeStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

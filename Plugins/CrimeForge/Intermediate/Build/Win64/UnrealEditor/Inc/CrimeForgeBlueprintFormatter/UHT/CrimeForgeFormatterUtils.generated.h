// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrimeForgeFormatterUtils.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIMEFORGEBLUEPRINTFORMATTER_CrimeForgeFormatterUtils_generated_h
#error "CrimeForgeFormatterUtils.generated.h already included, missing '#pragma once' in CrimeForgeFormatterUtils.h"
#endif
#define CRIMEFORGEBLUEPRINTFORMATTER_CrimeForgeFormatterUtils_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_CrimeForgeFormatterUtils_h


#define FOREACH_ENUM_ECRIMEFORGEROUNDINGMETHOD(op) \
	op(ECrimeForgeRoundingMethod::Round) \
	op(ECrimeForgeRoundingMethod::Ceil) \
	op(ECrimeForgeRoundingMethod::Floor) 

enum class ECrimeForgeRoundingMethod : uint8;
template<> struct TIsUEnumClass<ECrimeForgeRoundingMethod> { enum { Value = true }; };
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeRoundingMethod>();

#define FOREACH_ENUM_ECRIMEFORGEBREAKMETHOD(op) \
	op(ECrimeForgeBreakMethod::Default) \
	op(ECrimeForgeBreakMethod::Always) \
	op(ECrimeForgeBreakMethod::Never) 

enum class ECrimeForgeBreakMethod : uint8;
template<> struct TIsUEnumClass<ECrimeForgeBreakMethod> { enum { Value = true }; };
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UEnum* StaticEnum<ECrimeForgeBreakMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

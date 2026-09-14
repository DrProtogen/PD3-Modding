#pragma once

#include "CoreMinimal.h"
#include "Runtime/Launch/Resources/Version.h"

CRIMEFORGEBLUEPRINTFORMATTER_API DECLARE_LOG_CATEGORY_EXTERN(LogCrimeForgeBlueprintFormatter, Log, All);

#define CRIMEFORGE_FORMATTER_UE_MINOR_VERSION_OR_LATER(major, minor) (ENGINE_MAJOR_VERSION == (major) && ENGINE_MINOR_VERSION >= (minor))
#define CRIMEFORGE_FORMATTER_UE_VERSION_OR_LATER(major, minor) (((ENGINE_MAJOR_VERSION == (major)) && ENGINE_MINOR_VERSION >= (minor)) || ENGINE_MAJOR_VERSION > (major))

#if CRIMEFORGE_FORMATTER_UE_VERSION_OR_LATER(5, 6)
using FCrimeForgeMetaData = class FMetaData;
using FCrimeForgeVector2 = FVector2f;
#else
using FCrimeForgeMetaData = class UMetaData;
using FCrimeForgeVector2 = FVector2D;
#endif

// Debug UI/state was intentionally removed from the embedded formatter.
#define CRIMEFORGE_FORMATTER_DEBUG(...) false
#define CRIMEFORGE_FORMATTER_DEBUG_EARLY_EXIT(...) do { } while (0)

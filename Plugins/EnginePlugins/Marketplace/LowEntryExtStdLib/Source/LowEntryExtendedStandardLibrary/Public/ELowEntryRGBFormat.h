#pragma once
#include "CoreMinimal.h"
#include "ELowEntryRGBFormat.generated.h"

UENUM(BlueprintType)
enum class ELowEntryRGBFormat : uint8 {
    Invalid,
    RGBA,
    BGRA,
    Gray,
};


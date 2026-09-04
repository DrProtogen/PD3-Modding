#pragma once
#include "CoreMinimal.h"
#include "ESBZAvailability.generated.h"

UENUM(BlueprintType)
enum class ESBZAvailability : uint8 {
    Offline,
    Online,
    Busy,
    Invisible,
    Away,
};


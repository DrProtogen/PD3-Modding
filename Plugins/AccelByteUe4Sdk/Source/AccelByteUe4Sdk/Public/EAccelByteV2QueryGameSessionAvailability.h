#pragma once
#include "CoreMinimal.h"
#include "EAccelByteV2QueryGameSessionAvailability.generated.h"

UENUM(BlueprintType)
enum class EAccelByteV2QueryGameSessionAvailability : uint8 {
    AvailableSessionOnly,
    FullSessionOnly,
    AllSession,
};


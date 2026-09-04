#pragma once
#include "CoreMinimal.h"
#include "ESBZBundleMannequinState.generated.h"

UENUM(BlueprintType)
enum class ESBZBundleMannequinState : uint8 {
    Idle,
    Hovered,
    Selected,
};


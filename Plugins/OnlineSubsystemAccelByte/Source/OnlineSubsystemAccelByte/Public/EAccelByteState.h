#pragma once
#include "CoreMinimal.h"
#include "EAccelByteState.generated.h"

UENUM(BlueprintType)
enum class EAccelByteState : uint8 {
    Undefined,
    Client,
    Server,
};


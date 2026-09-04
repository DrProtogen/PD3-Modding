#pragma once
#include "CoreMinimal.h"
#include "ESBZExplosionEventType.generated.h"

UENUM(BlueprintType)
enum class ESBZExplosionEventType : uint8 {
    RejectionWindow,
    ExplosionSuccess,
};


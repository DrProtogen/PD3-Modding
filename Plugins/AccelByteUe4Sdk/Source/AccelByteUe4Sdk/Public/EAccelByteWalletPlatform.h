#pragma once
#include "CoreMinimal.h"
#include "EAccelByteWalletPlatform.generated.h"

UENUM(BlueprintType)
enum class EAccelByteWalletPlatform : uint8 {
    NONE,
    Playstation,
    Xbox,
    Steam,
    Epic,
    IOS,
    GooglePlay,
    Nintendo,
    Oculus,
    Other,
};


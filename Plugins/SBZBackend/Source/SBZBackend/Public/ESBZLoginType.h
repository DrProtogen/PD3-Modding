#pragma once
#include "CoreMinimal.h"
#include "ESBZLoginType.generated.h"

UENUM(BlueprintType)
enum class ESBZLoginType : uint8 {
    None,
    DeviceId,
    AccelByte,
    Xbox,
    PS4,
    PS5,
    Launcher,
    Steam,
    EOS,
    ExchangeCode,
    PublisherCode,
    RefreshToken,
    CachedToken,
};


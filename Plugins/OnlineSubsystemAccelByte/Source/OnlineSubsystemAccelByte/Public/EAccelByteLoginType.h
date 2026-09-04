#pragma once
#include "CoreMinimal.h"
#include "EAccelByteLoginType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteLoginType : uint8 {
    None,
    DeviceId,
    AccelByte,
    Xbox,
    PS4,
    PS4CrossGen,
    PS5,
    PSPC,
    Launcher,
    Steam,
    EOS,
    OIDC,
    Apple,
    Google,
    GooglePlayGames,
    ExchangeCode,
    PublisherCode,
    RefreshToken,
    CachedToken,
    Simultaneous,
    Oculus,
    Switch,
};


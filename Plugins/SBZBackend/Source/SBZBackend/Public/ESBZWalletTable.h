#pragma once
#include "CoreMinimal.h"
#include "ESBZWalletTable.generated.h"

UENUM(BlueprintType)
enum class ESBZWalletTable : uint8 {
    Playstation,
    Xbox,
    Steam,
    Epic,
    IOS,
    GooglePlay,
    Twitch,
    System,
    Nintendo,
    Other,
};


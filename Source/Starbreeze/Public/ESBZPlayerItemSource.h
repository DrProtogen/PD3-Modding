#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerItemSource.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerItemSource : uint8 {
    DLC,
    Vendor,
    Quest,
    DailyChallenge,
    TwitchDrop,
    AlienWare,
    CrimeBond,
    NebulaSignupReward,
    GoldEditionReward,
    PreorderReward,
    SilverEditionReward,
    CollectorsReward,
    CompensationReward,
    PD2Promo,
};


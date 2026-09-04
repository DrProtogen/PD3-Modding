#pragma once
#include "CoreMinimal.h"
#include "ESBZLootBoxRewardType.generated.h"

UENUM(BlueprintType)
enum class ESBZLootBoxRewardType : uint8 {
    PROBABILITY_GROUP,
    REWARD_GROUP,
    REWARD,
};


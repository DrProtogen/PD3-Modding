#pragma once
#include "CoreMinimal.h"
#include "EAccelByteGameStandardEventName.generated.h"

UENUM(BlueprintType)
enum class EAccelByteGameStandardEventName : uint8 {
    quest_Started,
    quest_Ended,
    player_Leveled,
    player_Dead,
    reward_Collected,
    resource_Sourced,
    resource_Sinked,
    resource_Upgraded,
    resource_Actioned,
    mission_Started,
    mission_Step_Ended,
    mission_Ended,
    matchinfo,
    matchinfo_Player,
    matchinfo_Ended,
    popup_Appear,
    entity_Leveled,
    entity_Dead,
    resource_Flow,
};


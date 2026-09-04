#pragma once
#include "CoreMinimal.h"
#include "EAccelByteV2SessionJoinability.generated.h"

UENUM(BlueprintType)
enum class EAccelByteV2SessionJoinability : uint8 {
    EMPTY,
    CLOSED,
    INVITE_ONLY,
    OPEN,
    FRIENDS_OF_LEADER,
    FRIENDS_OF_FRIENDS,
    FRIENDS_OF_MEMBERS,
};


#pragma once
#include "CoreMinimal.h"
#include "ESBZRelationshipStatusCode.generated.h"

UENUM(BlueprintType)
enum class ESBZRelationshipStatusCode : uint8 {
    NotFriend,
    Outgoing,
    Incoming,
    Friend,
};


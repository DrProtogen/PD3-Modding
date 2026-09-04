#pragma once
#include "CoreMinimal.h"
#include "EHandleLobbyMessageDataType.generated.h"

UENUM(BlueprintType)
enum class EHandleLobbyMessageDataType : uint8 {
    None,
    V2Matchmaking,
    Session,
    Other,
};


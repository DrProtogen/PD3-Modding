#pragma once
#include "CoreMinimal.h"
#include "ESBZPartyCreateResult.generated.h"

UENUM(BlueprintType)
enum class ESBZPartyCreateResult : uint8 {
    Success,
    Failure,
    SessionIsNotAvailable,
    IdentityInterfaceNotAvailable,
    SessionSettingsNotAvailable,
    InvalidPlayerId,
    AlreadyInParty,
    JoinInProgress,
};


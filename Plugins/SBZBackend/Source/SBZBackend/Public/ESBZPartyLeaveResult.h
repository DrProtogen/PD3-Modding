#pragma once
#include "CoreMinimal.h"
#include "ESBZPartyLeaveResult.generated.h"

UENUM(BlueprintType)
enum class ESBZPartyLeaveResult : uint8 {
    Success,
    Failure,
    SessionIsNotAvailable,
    NotInParty,
    LeaveInProgress,
};


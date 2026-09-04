#pragma once
#include "CoreMinimal.h"
#include "ESBZBackendPartyMemberStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZBackendPartyMemberStatus : uint8 {
    Empty,
    Invited,
    Joined,
    Connected,
    Left,
    Dropped,
    Rejected,
    Kicked,
    Timeout,
    Disconnected,
    Terminated,
};


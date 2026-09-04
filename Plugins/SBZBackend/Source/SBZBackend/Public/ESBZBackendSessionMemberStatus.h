#pragma once
#include "CoreMinimal.h"
#include "ESBZBackendSessionMemberStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZBackendSessionMemberStatus : uint8 {
    EMPTY,
    INVITED,
    JOINED,
    CONNECTED,
    LEFT,
    DROPPED,
    REJECTED,
    KICKED,
    TIMEOUT,
    DISCONNECTED,
    TERMINATED,
};


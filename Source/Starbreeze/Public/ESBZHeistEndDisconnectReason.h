#pragma once
#include "CoreMinimal.h"
#include "ESBZHeistEndDisconnectReason.generated.h"

UENUM(BlueprintType)
enum class ESBZHeistEndDisconnectReason : uint8 {
    Unknown,
    HostQuit,
    ClientQuit,
    ClientDisconnect,
    ReplicationFailure,
    TravelFailure,
    Timeout,
    None,
};


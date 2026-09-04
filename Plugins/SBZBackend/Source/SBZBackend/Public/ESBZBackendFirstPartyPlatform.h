#pragma once
#include "CoreMinimal.h"
#include "ESBZBackendFirstPartyPlatform.generated.h"

UENUM(BlueprintType)
enum class ESBZBackendFirstPartyPlatform : uint8 {
    Null,
    Steam,
    XBL,
    PSN,
    EOS,
    MAX,
};


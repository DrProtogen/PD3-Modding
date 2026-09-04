#pragma once
#include "CoreMinimal.h"
#include "ESBZBanReason.generated.h"

UENUM(BlueprintType)
enum class ESBZBanReason : uint8 {
    Empty,
    Violence,
    Harassment,
    HatefulConduct,
    OffensiveUsername,
    Impersonation,
    MaliciousContent,
    SexuallySuggestive,
    SexualViolence,
    ExtremeViolence,
    UnderageUser,
    Cheating,
    TOSViolation,
};


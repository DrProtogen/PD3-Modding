#pragma once
#include "CoreMinimal.h"
#include "ESBZUnfocusedMuteType.generated.h"

UENUM(BlueprintType)
enum class ESBZUnfocusedMuteType : uint8 {
    MuteNone,
    MuteNonEssential,
    MuteAll,
    Invalid,
};


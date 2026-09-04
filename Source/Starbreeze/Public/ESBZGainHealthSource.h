#pragma once
#include "CoreMinimal.h"
#include "ESBZGainHealthSource.generated.h"

UENUM(BlueprintType)
enum class ESBZGainHealthSource : uint8 {
    DoctorBag,
    FirstAidPack,
    Other,
};


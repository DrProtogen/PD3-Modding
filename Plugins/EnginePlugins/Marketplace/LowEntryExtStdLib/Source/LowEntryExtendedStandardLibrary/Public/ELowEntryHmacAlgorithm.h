#pragma once
#include "CoreMinimal.h"
#include "ELowEntryHmacAlgorithm.generated.h"

UENUM(BlueprintType)
enum class ELowEntryHmacAlgorithm : uint8 {
    MD5,
    SHA1,
    SHA256,
    SHA512,
};


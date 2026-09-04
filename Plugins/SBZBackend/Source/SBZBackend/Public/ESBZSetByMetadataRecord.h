#pragma once
#include "CoreMinimal.h"
#include "ESBZSetByMetadataRecord.generated.h"

UENUM(BlueprintType)
enum class ESBZSetByMetadataRecord : uint8 {
    NONE,
    SERVER,
    CLIENT,
};


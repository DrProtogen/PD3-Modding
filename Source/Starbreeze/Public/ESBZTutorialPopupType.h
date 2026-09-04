#pragma once
#include "CoreMinimal.h"
#include "ESBZTutorialPopupType.generated.h"

UENUM(BlueprintType)
enum class ESBZTutorialPopupType : uint8 {
    PlainText,
    Icon,
    Video,
};


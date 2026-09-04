#pragma once
#include "CoreMinimal.h"
#include "ESBZBanType.generated.h"

UENUM(BlueprintType)
enum class ESBZBanType : uint8 {
    Login,
    Chat,
    Play,
    Order,
    All,
};


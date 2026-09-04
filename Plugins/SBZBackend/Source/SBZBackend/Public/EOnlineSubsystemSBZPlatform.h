#pragma once
#include "CoreMinimal.h"
#include "EOnlineSubsystemSBZPlatform.generated.h"

UENUM(BlueprintType)
enum class EOnlineSubsystemSBZPlatform : uint8 {
    Null,
    Steam,
    XSX,
    PS5,
    EOS,
    MAX,
};


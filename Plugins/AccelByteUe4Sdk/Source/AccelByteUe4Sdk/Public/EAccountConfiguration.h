#pragma once
#include "CoreMinimal.h"
#include "EAccountConfiguration.generated.h"

UENUM(BlueprintType)
enum class EAccountConfiguration : uint8 {
    UNIQUE_DISPLAY_NAME_ENABLED,
    USERNAME_DISABLED,
    MANDATORY_EMAIL_VERIFICATION_ENABLED,
};


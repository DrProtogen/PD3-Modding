#pragma once
#include "CoreMinimal.h"
#include "EPD3AssaultSettingsSecurityCompanyModifierOperator.generated.h"

UENUM(BlueprintType)
enum class EPD3AssaultSettingsSecurityCompanyModifierOperator : uint8 {
    Add,
    Multiply,
    Override,
};


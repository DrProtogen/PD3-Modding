#pragma once
#include "CoreMinimal.h"
#include "ESBZSettingsEnvironment.generated.h"

UENUM(BlueprintType)
enum class ESBZSettingsEnvironment : uint8 {
    Development,
    Certification,
    Production,
    Sandbox,
    Integration,
    QA,
    Default,
};


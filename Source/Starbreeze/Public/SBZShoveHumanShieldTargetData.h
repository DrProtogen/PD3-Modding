#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "SBZShoveHumanShieldTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZShoveHumanShieldTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZShoveHumanShieldTargetData();
};


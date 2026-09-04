#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "SBZThrowItemTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZThrowItemTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZThrowItemTargetData();
};


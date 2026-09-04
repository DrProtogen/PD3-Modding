#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "SBZProjectileTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSBZProjectileTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZProjectileTargetData();
};


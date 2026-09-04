#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectContext.h"
#include "SBZGameplayEffectContext.generated.h"

USTRUCT(BlueprintType)
struct FSBZGameplayEffectContext : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZGameplayEffectContext();
};


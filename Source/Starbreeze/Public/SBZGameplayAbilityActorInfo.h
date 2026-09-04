#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityActorInfo.h"
#include "SBZGameplayAbilityActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZGameplayAbilityActorInfo : public FGameplayAbilityActorInfo {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZGameplayAbilityActorInfo();
};


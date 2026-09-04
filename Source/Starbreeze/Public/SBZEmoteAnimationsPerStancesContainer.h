#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableFamily.h"
#include "SBZEmoteAnimationsPerEquippablesContainer.h"
#include "SBZEmoteAnimationsPerStancesContainer.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZEmoteAnimationsPerStancesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> DefaultMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZEquippableFamily, FSBZEmoteAnimationsPerEquippablesContainer> AnimationsPerEquippables;
    
    STARBREEZE_API FSBZEmoteAnimationsPerStancesContainer();
};


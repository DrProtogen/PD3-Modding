#pragma once
#include "CoreMinimal.h"
#include "EPlayerCharacterSizeCategory.h"
#include "SBZEmoteAnimationsPerCharacterSizesContainer.h"
#include "SBZEmoteAnimationsPerEquippablesContainer.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZEmoteAnimationsPerEquippablesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> DefaultMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerCharacterSizeCategory, FSBZEmoteAnimationsPerCharacterSizesContainer> AnimationsPerCharacterSizes;
    
    STARBREEZE_API FSBZEmoteAnimationsPerEquippablesContainer();
};


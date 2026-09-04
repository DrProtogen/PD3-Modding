#pragma once
#include "CoreMinimal.h"
#include "SBZEmoteAnimationsPerCharacterSizesContainer.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZEmoteAnimationsPerCharacterSizesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimMontage>> SoftMontageArray;
    
    STARBREEZE_API FSBZEmoteAnimationsPerCharacterSizesContainer();
};


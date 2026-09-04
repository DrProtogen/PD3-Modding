#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIScorer_BagExistsInProximity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIScorer_BagExistsInProximity : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedDistanceFromPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedBagTypeTags;
    
public:
    USBZAIScorer_BagExistsInProximity();

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZCharacterStance.h"
#include "SBZEmoteAnimationsPerStancesContainer.h"
#include "Templates/SubclassOf.h"
#include "SBZEmoteAnimationCollection.generated.h"

class ASBZCharacter;
class UAnimMontage;

UCLASS(Blueprintable)
class USBZEmoteAnimationCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZCharacter> CharacterTemplateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> DefaultMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZCharacterStance, FSBZEmoteAnimationsPerStancesContainer> AnimationsPerStances;
    
    USBZEmoteAnimationCollection();

};


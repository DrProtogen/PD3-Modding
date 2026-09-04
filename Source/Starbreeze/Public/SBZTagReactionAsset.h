#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SBZTagReaction.h"
#include "SBZTagReactionAsset.generated.h"

UCLASS(Blueprintable, Const)
class USBZTagReactionAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZTagReaction> Map;
    
    USBZTagReactionAsset();

};


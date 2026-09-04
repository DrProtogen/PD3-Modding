#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SBZUnblockAbilityNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZUnblockAbilityNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
public:
    USBZUnblockAbilityNotify();

};


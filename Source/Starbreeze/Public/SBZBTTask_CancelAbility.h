#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZAbilityInput.h"
#include "SBZBTTask_CancelAbility.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_CancelAbility : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAbilityInput AbilityInput;
    
public:
    USBZBTTask_CancelAbility();

};


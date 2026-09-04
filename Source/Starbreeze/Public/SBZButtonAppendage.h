#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZButtonAppendage.generated.h"

class USBZInventoryItemDecorator;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZButtonAppendage : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZButtonAppendage();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDecoSet(const USBZInventoryItemDecorator* ItemDecorator, bool bWithSync);
    
};


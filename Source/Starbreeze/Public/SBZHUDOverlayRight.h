#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZHUDOverlayRight.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZHUDOverlayRight : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
    TObjectPtr<UTextBlock> Text_PrePlanningAssets;
    
    USBZHUDOverlayRight();

    UFUNCTION(BlueprintCallable)
    void MakePrePlanningText(); 
    
};


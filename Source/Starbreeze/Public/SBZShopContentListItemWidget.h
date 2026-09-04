#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZShopContentListItemWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZShopContentListItemWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemNameTextBlock;
    
public:
    USBZShopContentListItemWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOwnershipStatus(bool bIsOwned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetHighlighted(bool bHighlight, bool bIsInstant);
    
};


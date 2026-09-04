#pragma once
#include "CoreMinimal.h"
#include "ESBZShopPriceWidgetState.h"
#include "SBZWidgetBase.h"
#include "SBZShopPriceWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZShopPriceWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InitialPriceTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FinalPriceTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DiscountPercentTextBlock;
    
public:
    USBZShopPriceWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowPriceForItem(ESBZShopPriceWidgetState State);
    
};


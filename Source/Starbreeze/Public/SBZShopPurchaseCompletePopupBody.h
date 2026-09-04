#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZShopPurchaseCompletePopupBody.generated.h"

class USBZShopCarouselWidget;
class USBZShopContentListWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZShopPurchaseCompletePopupBody : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ContinueActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseSuccessfulText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PackAlreadyOwnedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemsReceivedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopCarouselWidget* Carousel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopContentListWidget* ContentList;
    
public:
    USBZShopPurchaseCompletePopupBody();

};


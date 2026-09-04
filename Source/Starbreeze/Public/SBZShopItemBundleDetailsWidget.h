#pragma once
#include "CoreMinimal.h"
#include "SBZBundleItem.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZShopItemBundleDetailsWidget.generated.h"

class URichTextBlock;
class USBZShopCarouselWidget;
class USBZShopContentListWidget;
class USBZShopItemPreviewButton;
class UScrollBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZShopItemBundleDetailsWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZShopItemPreviewButton> ItemPreviewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* OwnedNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopContentListWidget* ContentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* DescriptionScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopCarouselWidget* Carousel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZBundleItem> BundleItems;
    
public:
    USBZShopItemBundleDetailsWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOwnershipStatus(bool bOwned);
    
};


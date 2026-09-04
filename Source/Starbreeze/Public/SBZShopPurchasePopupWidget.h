#pragma once
#include "CoreMinimal.h"
#include "SBZItemBundleStoreItem.h"
#include "SBZPopupWidgetInterface.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZShopPurchasePopupWidget.generated.h"

class USBZControlsReferenceWidget;
class USBZMainMenuWeaponProgressionDisplayWidget;
class USBZMenuButton;
class USBZShopContentListWidget;
class USBZShopCyclerWidget;
class USBZShopImage;
class USBZShopItemPreviewButton;
class USBZShopPriceWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class USBZShopPurchasePopupWidget : public USBZWidgetBase, public ISBZPopupWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZShopItemPreviewButton> ItemButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ViewInStoreActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BackActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHeistImageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ItemButtonScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopCyclerWidget* Cycler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopContentListWidget* ContentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZControlsReferenceWidget* ControlsReferenceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuWeaponProgressionDisplayWidget* ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopPriceWidget* PriceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopImage* LogoImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopImage* KeyArtImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZShopItemPreviewButton*> ItemButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZShopItemPreviewButton* SelectedItemButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZItemBundleStoreItem ItemBundle;
    
public:
    USBZShopPurchasePopupWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOwnershipStatus(bool bIsOwned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedItemChanged(bool bIsOwned, bool bIsVendorPermission);
    
    UFUNCTION(BlueprintCallable)
    void OnPurchaseActionPressed(FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpen(bool bShouldPlayAnimation, bool bIsHeistDLC, const FSBZItemBundleStoreItem& InItemBundle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnItemFocusChanged(USBZMenuButton* InButton, bool bIsFocused);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBackPressed(FName ActionName);
    

    // Fix for true pure virtual functions not being implemented
};


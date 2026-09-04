#pragma once
#include "CoreMinimal.h"
#include "SBZItemBundleStoreItem.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZShopScreenWidget.generated.h"

class UCurveFloat;
class UPanelWidget;
class UPaperSprite;
class USBZLocalNavBar;
class USBZMenuButton;
class USBZShopCategoryData;
class USBZShopImage;
class USBZShopItemBundleButton;
class USBZShopItemBundleDetailsWidget;
class USBZShopPurchaseCompletePopupBody;
class USBZShopPurchasePopupWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class USBZShopScreenWidget : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLocalNavBar* CategoriesNavBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ItemsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ItemsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopPurchasePopupWidget* PurchasePopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopImage* BackgroundToFadeInImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopItemBundleDetailsWidget* ItemBundleDetails;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZShopCategoryData*> ShopCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZShopItemBundleButton> ItemBundleButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZShopPurchaseCompletePopupBody> PurchaseCompletePopupBodyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BackActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InspectScreenStackValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BackgroundFadeInCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZShopItemBundleButton*> ItemBundleButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZShopItemBundleButton* FocusedItemBundleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZItemBundleStoreItem> ActiveCategoryItemBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZItemBundleStoreItem> ItemBundleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> QueuedBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZShopItemBundleButton*> BundleIdToButtonMap;
    
public:
    USBZShopScreenWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShopScreenOpened(int32 CategoryIndex, bool bPlayAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNavBarIndexChanged(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnItemSelected(USBZMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnItemFocusChanged(USBZMenuButton* InButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void OnControlsReferencePressed(const FName ActionName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveCategoryUpdated(const USBZShopCategoryData* NewCategory, int32 NewCategoryIndex, bool bWasChanged);
    
private:
    UFUNCTION(BlueprintCallable)
    void InvalidateItemBundleMap();
    
};


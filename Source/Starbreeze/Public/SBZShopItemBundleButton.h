#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZShopItemBundleButton.generated.h"

class UMaterialInterface;
class USBZShopImage;
class USBZShopPriceWidget;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class USBZShopItemBundleButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultLogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* RootSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopImage* LogoImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopPriceWidget* PriceWidget;
    
public:
    USBZShopItemBundleButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOwnershipStatus(bool bIsOwned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowItemBundle(bool bIsNew);
    
};


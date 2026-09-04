#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZUIStackChangedEvent.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuShopButton.generated.h"

class USBZShopPurchaseCompletePopupBody;
class USBZShopScreenWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuShopButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZShopScreenWidget> ShopScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZShopPurchaseCompletePopupBody> ItemsReceivedPopupBodyClass;
    
public:
    USBZMainMenuShopButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowNewDLCNotification();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPreUIStackChanged(FSBZUIStackChangedEvent StackEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnGameInstallStateChanged(bool bIsInstallPending);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideNotification();
    
};


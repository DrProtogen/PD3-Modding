#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackWidget.h"
#include "SBZMainMenuCrimeNetStackWidget.generated.h"

class USBZMainMenuShopButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCrimeNetStackWidget : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuShopButton* ShopButton;
    
public:
    USBZMainMenuCrimeNetStackWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateLeft(FName StateName);
    
};


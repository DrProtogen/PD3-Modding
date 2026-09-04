#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZIndexedButtonClickedDelegateDelegate.h"
#include "SBZIndexedButtonHoverDelegateDelegate.h"
#include "SBZIndexedButton.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZIndexedButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZIndexedButtonClickedDelegate OnIndexedClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZIndexedButtonHoverDelegate OnIndexedHoverChanged;
    
    USBZIndexedButton();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleHovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleClicked();
    
};


#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZBackendErrorWidget.generated.h"

class USBZMenuButton;
class UStringTable;

UCLASS(Blueprintable, EditInlineNew)
class USBZBackendErrorWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* ErrorMessageStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_ReturnToLogin;
    
public:
    USBZBackendErrorWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetErrorText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetErrorHeader() const;
    
};


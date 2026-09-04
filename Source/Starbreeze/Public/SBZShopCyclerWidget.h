#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "SBZShopCyclerWidget.generated.h"

class UPanelWidget;
class USBZMenuMouseButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZShopCyclerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxVisibleCellCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMenuMouseButton> CellButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultCellColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor VisibleCellColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedCellColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuMouseButton* LeftArrowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuMouseButton* RightArrowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CellPanel;
    
public:
    USBZShopCyclerWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnRightArrowSelected(USBZMenuMouseButton* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftArrowSelected(USBZMenuMouseButton* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnCellSelected(USBZMenuMouseButton* Button);
    
};


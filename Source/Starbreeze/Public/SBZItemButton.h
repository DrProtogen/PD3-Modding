#pragma once
#include "CoreMinimal.h"
#include "SBZItemListEntry.h"
#include "SBZMenuButton.h"
#include "Templates/SubclassOf.h"
#include "SBZItemButton.generated.h"

class UOverlay;
class USBZButtonAppendage;
class USBZInventoryBaseData;
class USBZInventoryItemDecorator;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZItemButton : public USBZMenuButton, public ISBZItemListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Ovl_Appendages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USBZButtonAppendage>> ButtonAppendageClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZButtonAppendage*> ButtonAppendages;
    
    USBZItemButton();

    UFUNCTION(BlueprintCallable)
    void SetItemDecorator(USBZInventoryItemDecorator* InventoryItemDecorator);
    
    UFUNCTION(BlueprintCallable)
    void ResetVisualState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemInitialized(const USBZInventoryBaseData* ItemData);
    
    UFUNCTION(BlueprintCallable)
    USBZButtonAppendage* GetAppendageByClass(TSubclassOf<USBZButtonAppendage> AppendageClass);
    
    UFUNCTION(BlueprintCallable)
    USBZButtonAppendage* AddAppendage(TSubclassOf<USBZButtonAppendage> AppendageClass);
    

    // Fix for true pure virtual functions not being implemented
};


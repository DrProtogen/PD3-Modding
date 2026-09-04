#pragma once
#include "CoreMinimal.h"
#include "ESBZBundlePackType.h"
#include "SBZBundlePackWidgetBase.h"
#include "SBZItemBundleStoreItem.h"
#include "Templates/SubclassOf.h"
#include "SBZBundleEntrySelectionWidget.generated.h"

class UCanvasPanel;
class USBZBundleDisplayBase;
class USBZIndexedButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZBundleEntrySelectionWidget : public USBZBundlePackWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZBundlePackType, TSubclassOf<USBZBundleDisplayBase>> DisplayMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialSelectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBundleDisplayBase* Display;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* HitCanvas;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZIndexedButton*> HitButtons;
    
public:
    USBZBundleEntrySelectionWidget();

    UFUNCTION(BlueprintCallable)
    void SelectPrevious();
    
    UFUNCTION(BlueprintCallable)
    void SelectNext();
    
    UFUNCTION(BlueprintCallable)
    void SelectIndex(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleHoverChanged(int32 Index, bool bIsHovered);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZIndexedButton* GetSelectedHitButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZItemBundleStoreItem GetSelectedBundle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZIndexedButton* GetHitButton(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSelectionConfirmed(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSelectionChanged(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPreloadStateChanged(bool bIsLoading);
    
};


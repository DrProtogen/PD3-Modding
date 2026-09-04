#pragma once
#include "CoreMinimal.h"
#include "ESBZBundlePackType.h"
#include "SBZBundlePackWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZBundlePackSelectionWidget.generated.h"

class USBZBundleDisplayBase;
class USBZBundlePackData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZBundlePackSelectionWidget : public USBZBundlePackWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZBundlePackType, TSubclassOf<USBZBundleDisplayBase>> DisplayMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBundleDisplayBase* Display;
    
    USBZBundlePackSelectionWidget();

    UFUNCTION(BlueprintCallable)
    void ShowPackByData(USBZBundlePackData* PackData);
    
    UFUNCTION(BlueprintCallable)
    void PreviousPack();
    
    UFUNCTION(BlueprintCallable)
    void NextPack();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPreloadStateChanged(bool bIsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLostStackFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGainedStackFocus();
    
};


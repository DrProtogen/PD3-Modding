#pragma once
#include "CoreMinimal.h"
#include "ESBZUIPurchaseCompletionReason.h"
#include "ESBZUIPurchaseFlowState.h"
#include "SBZPopupContentInterface.h"
#include "SBZStoreItemUIData.h"
#include "SBZUIPurchaseFlowPopupActionDelegate.h"
#include "SBZWidgetBase.h"
#include "SBZUIPurchaseFlowPopupBody.generated.h"

class USBZInventoryBaseData;
class USBZUIPurchaseFlow;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZUIPurchaseFlowPopupBody : public USBZWidgetBase, public ISBZPopupContentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIPurchaseFlow* Flow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZUIPurchaseFlowPopupAction OnPopupAction;
    
    USBZUIPurchaseFlowPopupBody();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopupShownBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopupHiddenBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlowStateChanged(ESBZUIPurchaseFlowState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlowConfigured(const FSBZStoreItemUIData& StoreItemUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlowCompleted(ESBZUIPurchaseCompletionReason Reason, const USBZInventoryBaseData* ItemData);
    
public:
    UFUNCTION(BlueprintCallable)
    void ObserveFlow(USBZUIPurchaseFlow* InFlow);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleFlowStateChanged(ESBZUIPurchaseFlowState NewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleFlowCompleted(ESBZUIPurchaseCompletionReason Reason, const USBZInventoryBaseData* ItemData);
    

    // Fix for true pure virtual functions not being implemented
};


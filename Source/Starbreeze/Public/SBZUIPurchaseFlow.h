#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZMetaRequestResult.h"
#include "ESBZUIPurchaseDisallowReason.h"
#include "ESBZUIPurchaseFlowState.h"
#include "SBZStoreItemUIData.h"
#include "SBZUIPurchaseFlowCompletedDelegate.h"
#include "SBZUIPurchaseFlowConfig.h"
#include "SBZUIPurchaseFlowPostCompletionActionDelegate.h"
#include "SBZUIPurchaseFlowStateChangedDelegate.h"
#include "SBZUIPurchaseRequest.h"
#include "SBZUIPurchaseFlow.generated.h"

class USBZInventoryBaseData;
class USBZUIPurchaseFlowPopupBody;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUIPurchaseFlow : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZStoreItemUIData StoreItemUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZUIPurchaseDisallowReason DisallowReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZMetaRequestResult LastResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZUIPurchaseFlowStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZUIPurchaseFlowCompleted OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZUIPurchaseFlowPostCompletionAction OnPostCompletionAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZUIPurchaseFlowPopupBody* PopupBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZUIPurchaseFlowConfig Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZUIPurchaseFlowState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* PendingResultItemData;
    
public:
    USBZUIPurchaseFlow();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void RequestPurchase(const UObject* WorldContextObject, const FSBZUIPurchaseRequest& InRequest);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPurchaseResult(const FString& ItemSku, bool bSuccess, const USBZInventoryBaseData* ItemData, ESBZMetaRequestResult MetaResult);
    
    UFUNCTION(BlueprintCallable)
    void HandlePopupAction(FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZUIPurchaseFlowState GetState() const;
    
};


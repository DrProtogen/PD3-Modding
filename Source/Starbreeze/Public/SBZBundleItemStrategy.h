#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaRequestResult.h"
#include "ESBZItemCategory.h"
#include "ESBZUIPurchaseCompletionReason.h"
#include "SBZBaseItemStrategy.h"
#include "SBZBundlePostPurchaseActionDelegateDelegate.h"
#include "SBZBundlePurchaseFlowClosedDelegateDelegate.h"
#include "SBZBundlePurchaseResultDelegateDelegate.h"
#include "SBZItemBundleStoreItem.h"
#include "SBZSpanGridEntry.h"
#include "SBZUIPurchaseFlowConfig.h"
#include "Templates/SubclassOf.h"
#include "SBZBundleItemStrategy.generated.h"

class UObject;
class USBZInventoryBaseData;
class USBZItemBundleData;
class USBZUIPurchaseFlow;

UCLASS(Blueprintable)
class STARBREEZE_API USBZBundleItemStrategy : public USBZBaseItemStrategy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBundlePurchaseResultDelegate OnPurchaseResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBundlePostPurchaseActionDelegate OnPostPurchaseAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBundlePurchaseFlowClosedDelegate OnPurchaseFlowClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZItemCategory, TSubclassOf<USBZBaseItemStrategy>> CategoryStrategyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZUIPurchaseFlowConfig PurchaseFlowConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIPurchaseFlow* CurrentPurchaseFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PendingPurchaseSku;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZMetaRequestResult LastPurchaseResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZItemBundleStoreItem BundleStoreItem;
    
public:
    USBZBundleItemStrategy();

    UFUNCTION(BlueprintCallable)
    void SetBundleStoreItem(const FSBZItemBundleStoreItem& InStoreItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleFlowPostCompletionAction(FName ActionName, const USBZInventoryBaseData* ItemData);
    
    UFUNCTION(BlueprintCallable)
    void HandleFlowCompleted(ESBZUIPurchaseCompletionReason Reason, const USBZInventoryBaseData* ItemData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZItemBundleData* GetBundleData() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ExecutePurchase(const UObject* WorldContextObject, const FString& ItemSku);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    TArray<FSBZSpanGridEntry> BuildBundleGridEntries(const UObject* WorldContextObject) const;
    
};


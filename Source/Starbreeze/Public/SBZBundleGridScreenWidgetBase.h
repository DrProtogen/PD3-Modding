#pragma once
#include "CoreMinimal.h"
#include "SBZBundleDecoActivatedDelegateDelegate.h"
#include "SBZBundleDecoSelectedDelegateDelegate.h"
#include "SBZBundleScreenPurchaseResultDelegateDelegate.h"
#include "SBZItemBundleStoreItem.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZBundleGridScreenWidgetBase.generated.h"

class UObject;
class USBZBundleItemStrategy;
class USBZInventoryBaseData;
class USBZInventoryItemDecorator;
class USBZItemBundleData;
class USBZSpanGrid;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZBundleGridScreenWidgetBase : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBundleDecoSelectedDelegate OnDecoSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBundleDecoActivatedDelegate OnDecoActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBundleScreenPurchaseResultDelegate OnPurchaseResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpanGrid* SpanGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MannequinSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZBundleItemStrategy> StrategyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBundleItemStrategy* Strategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZInventoryItemDecorator*> SpawnedDecos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryItemDecorator* LastSelectedDeco;
    
public:
    USBZBundleGridScreenWidgetBase();

    UFUNCTION(BlueprintCallable)
    void TriggerPrimaryAction(USBZInventoryItemDecorator* Deco);
    
    UFUNCTION(BlueprintCallable)
    void SetBundleStoreItem(const FSBZItemBundleStoreItem& InStoreItem);
    
    UFUNCTION(BlueprintCallable)
    void SetBundle(const FSBZItemBundleStoreItem& InStoreItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSpanGridItemSelected(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void HandleSpanGridItemClicked(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void HandlePurchaseResult(const FString& ItemSku, bool bSuccess, const USBZInventoryBaseData* ItemData);
    
    UFUNCTION(BlueprintCallable)
    void HandlePostPurchaseAction(FName ActionName, const USBZInventoryBaseData* ItemData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBundleItemStrategy* GetStrategy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZInventoryItemDecorator* GetSelectedDeco() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZItemBundleData* GetBundleData() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPurchaseResult(const FString& ItemSku, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPreloadStateChanged(bool bIsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPostPurchaseAction(FName ActionName, USBZInventoryItemDecorator* Deco);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLostStackFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGridRebuilt(int32 NumDecos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGainedStackFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDecoSelected(USBZInventoryItemDecorator* Deco);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDecoActivated(USBZInventoryItemDecorator* Deco);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBundleApplied(const USBZItemBundleData* InBundleData);
    
};


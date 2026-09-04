#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ESBZItemAction.h"
#include "ESBZItemCategory.h"
#include "SBZActionDelegateDelegate.h"
#include "SBZRefreshRequestDelegateDelegate.h"
#include "SBZBaseItemStrategy.generated.h"

class USBZInventoryBaseData;
class USBZInventoryItemDecorator;

UCLASS(Abstract, Blueprintable)
class USBZBaseItemStrategy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZRefreshRequestDelegate OnRefreshRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZActionDelegate OnActionExecuted;
    
    USBZBaseItemStrategy();

    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    TArray<USBZInventoryItemDecorator*> SpawnItemDecos(const UObject* WorldContextObject, ESBZItemCategory ItemCategory, const FGameplayTag& CategoryTag, USBZInventoryItemDecorator*& OutEquippedDeco) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZInventoryItemDecorator* GetEquippedItemAsDecorator(const UObject* WorldContextObject, ESBZItemCategory ItemCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void ExecuteItemAction(const UObject* WorldContextObject, const USBZInventoryItemDecorator* ItemDeco, ESBZItemAction Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    TArray<USBZInventoryItemDecorator*> CreateSlotDecos(const UObject* WorldContextObject, ESBZItemCategory ItemCategory, const USBZInventoryBaseData* ItemData, USBZInventoryItemDecorator*& OutEquippedDeco) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool CanPerformAction(const UObject* WorldContextObject, const USBZInventoryItemDecorator* ItemDeco, ESBZItemAction Action) const;
    
};


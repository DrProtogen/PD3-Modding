#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZItemBundleStoreItem.h"
#include "SBZCrimeBondManager.generated.h"

class USBZCrimeBondManager;
class USBZInventoryBaseData;

UCLASS(Blueprintable)
class USBZCrimeBondManager : public UObject {
    GENERATED_BODY()
public:
    USBZCrimeBondManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZItemBundleStoreItem GetItemBundleStoreItemContainingItemData(const USBZInventoryBaseData* ItemData, bool& bOutFoundItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZCrimeBondManager* Get(const UObject* WorldContextObject);
    
};


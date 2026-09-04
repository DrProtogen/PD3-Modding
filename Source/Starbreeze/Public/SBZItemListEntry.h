#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZItemListEntry.generated.h"

UINTERFACE()
class USBZItemListEntry : public UUserObjectListEntry {
    GENERATED_BODY()
};

class ISBZItemListEntry : public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListItemEquippedChanged(bool bIsEquipped);
    
};


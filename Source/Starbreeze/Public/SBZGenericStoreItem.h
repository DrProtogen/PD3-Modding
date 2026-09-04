#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZGenericStoreItem.generated.h"

class USBZInventoryBaseData;

USTRUCT(BlueprintType)
struct FSBZGenericStoreItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZStoreBaseItem StoreBaseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* InventoryBaseData;
    
    STARBREEZE_API FSBZGenericStoreItem();
};


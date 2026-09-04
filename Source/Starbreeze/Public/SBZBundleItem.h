#pragma once
#include "CoreMinimal.h"
#include "ESBZItemCategory.h"
#include "SBZStoreBaseItem.h"
#include "SBZBundleItem.generated.h"

class USBZInventoryBaseData;

USTRUCT(BlueprintType)
struct FSBZBundleItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZStoreBaseItem StoreBaseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZItemCategory BundleItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* BundleItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    STARBREEZE_API FSBZBundleItem();
};


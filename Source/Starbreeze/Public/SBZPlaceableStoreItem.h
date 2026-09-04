#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZPlaceableStoreItem.generated.h"

class USBZPlaceableData;

USTRUCT(BlueprintType)
struct FSBZPlaceableStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlaceableData* PlaceableData;
    
    STARBREEZE_API FSBZPlaceableStoreItem();
};


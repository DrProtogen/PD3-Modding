#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZPlayerEmoteInventoryItem.generated.h"

class USBZEmoteCallAsset;

USTRUCT(BlueprintType)
struct FSBZPlayerEmoteInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEmoteCallAsset* EmoteData;
    
    STARBREEZE_API FSBZPlayerEmoteInventoryItem();
};


#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZPlayerEmoteStoreItem.generated.h"

class USBZEmoteCallAsset;

USTRUCT(BlueprintType)
struct FSBZPlayerEmoteStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEmoteCallAsset* EmoteData;
    
    STARBREEZE_API FSBZPlayerEmoteStoreItem();
};


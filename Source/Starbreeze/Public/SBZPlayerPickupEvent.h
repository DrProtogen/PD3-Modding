#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZPlayerPickupEvent.generated.h"

class UObject;
class USBZPlayerPickupEventConfig;

USTRUCT(BlueprintType)
struct FSBZPlayerPickupEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PickedUpObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlayerPickupEventConfig* ConfigData;
    
    STARBREEZE_API FSBZPlayerPickupEvent();
};


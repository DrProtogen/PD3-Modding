#pragma once
#include "CoreMinimal.h"
#include "SBZFrontierData.generated.h"

class ISBZRoomConnectorInterface;
class USBZRoomConnectorInterface;

USTRUCT(BlueprintType)
struct FSBZFrontierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZRoomConnectorInterface> Connector;
    
    STARBREEZE_API FSBZFrontierData();
};


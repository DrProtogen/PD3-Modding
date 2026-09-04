#pragma once
#include "CoreMinimal.h"
#include "SBZPathNodeData.generated.h"

class ASBZRoomVolume;
class ISBZRoomConnectorInterface;
class USBZRoomConnectorInterface;

USTRUCT(BlueprintType)
struct FSBZPathNodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* Room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZRoomConnectorInterface> Parent;
    
    STARBREEZE_API FSBZPathNodeData();
};


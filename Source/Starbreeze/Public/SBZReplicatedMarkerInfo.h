#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZReplicatedMarkerInfo.generated.h"

class USBZEquippableData;

USTRUCT(BlueprintType)
struct FSBZReplicatedMarkerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippableData* EquippableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl OwnerUniqueId;
    
    STARBREEZE_API FSBZReplicatedMarkerInfo();
};


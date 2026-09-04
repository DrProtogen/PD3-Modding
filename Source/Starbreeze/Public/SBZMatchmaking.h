#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZRegionFilteringLevel.h"
#include "SBZQueuedJoinLobby.h"
#include "SBZMatchmaking.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZMatchmaking : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSessionsExpected;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRegionFilteringLevel DefaultFilteringLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZQueuedJoinLobby QueuedJoinLobby;
    
public:
    USBZMatchmaking();

};


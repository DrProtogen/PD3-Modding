#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "GameFramework/OnlineReplStructs.h"
#include "PlayerWaitingForReady.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FPlayerWaitingForReady {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AutoReadyTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerId;
    
    FPlayerWaitingForReady();
};


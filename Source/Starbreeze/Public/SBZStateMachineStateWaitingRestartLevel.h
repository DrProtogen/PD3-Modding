#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateWaitingRestartLevel.generated.h"

class USBZStateMachineDataRestartLevel;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingRestartLevel : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataRestartLevel* RestartLevelData;
    
public:
    USBZStateMachineStateWaitingRestartLevel();

private:
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerStateReady();
    
    UFUNCTION(BlueprintCallable)
    void OnHandleGameStateReady();
    
};


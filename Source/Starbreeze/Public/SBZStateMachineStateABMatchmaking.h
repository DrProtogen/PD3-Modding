#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateABMatchmaking.generated.h"

class USBZStateMachineDataMatchmaking;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateABMatchmaking : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataMatchmaking* MatchmakingData;
    
public:
    USBZStateMachineStateABMatchmaking();

private:
    UFUNCTION(BlueprintCallable)
    void OnPopupSessionDoesNotExistClosed(FName CloseActionName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBeaconDisconnect();
    
};


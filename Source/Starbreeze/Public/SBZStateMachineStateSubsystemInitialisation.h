#pragma once
#include "CoreMinimal.h"
#include "ESBZServiceStatus.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateSubsystemInitialisation.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateSubsystemInitialisation : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
    USBZStateMachineStateSubsystemInitialisation();

private:
    UFUNCTION(BlueprintCallable)
    void OnUIStackLockChangedAfterPrivilegesCheck(bool bIsUIStackLocked);
    
    UFUNCTION(BlueprintCallable)
    void InternetConnectionStatus(ESBZServiceStatus ServiceStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlatformUserLoginComplete(bool bSuccess);
    
};


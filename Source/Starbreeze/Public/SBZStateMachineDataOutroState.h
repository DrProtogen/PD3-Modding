#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachineData.h"
#include "ESBZEndMissionResult.h"
#include "SBZStateMachineDataOutroState.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataOutroState : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEndMissionResult MissionResult;
    
    USBZStateMachineDataOutroState();

};


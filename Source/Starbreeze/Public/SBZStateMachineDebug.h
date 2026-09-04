#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZStateMachineDebug.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASBZStateMachineDebug : public AHUD {
    GENERATED_BODY()
public:
    ASBZStateMachineDebug(const FObjectInitializer& ObjectInitializer);

};


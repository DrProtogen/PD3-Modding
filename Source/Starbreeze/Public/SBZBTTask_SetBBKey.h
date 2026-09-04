#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_SetBBKey.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_SetBBKey : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetToSet;
    
public:
    USBZBTTask_SetBBKey();

};


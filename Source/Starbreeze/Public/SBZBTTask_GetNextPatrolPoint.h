#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "SBZBTTask_GetNextPatrolPoint.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_GetNextPatrolPoint : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
public:
    USBZBTTask_GetNextPatrolPoint();

};


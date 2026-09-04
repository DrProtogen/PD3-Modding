#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTTask_RequestInvestigation.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_RequestInvestigation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
public:
    USBZBTTask_RequestInvestigation();

};


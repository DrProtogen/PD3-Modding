#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTTask_RequestArrest.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_RequestArrest : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
public:
    USBZBTTask_RequestArrest();

};


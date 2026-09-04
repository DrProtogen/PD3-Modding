#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTTask_InformPolice.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_InformPolice : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseMaxRange;
    
public:
    USBZBTTask_InformPolice();

};


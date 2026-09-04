#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTTask_ThrowBag.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_ThrowBag : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldForceDrop;
    
public:
    USBZBTTask_ThrowBag();

};


#pragma once
#include "CoreMinimal.h"
#include "SBZIndividualSecuredBag.generated.h"

class USBZBagType;

USTRUCT(BlueprintType)
struct FSBZIndividualSecuredBag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBagType* BagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BagCount;
    
    STARBREEZE_API FSBZIndividualSecuredBag();
};


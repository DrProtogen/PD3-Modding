#pragma once
#include "CoreMinimal.h"
#include "SBZGoToSourceTarget.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSBZGoToSourceTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* DesiredObject;
    
    STARBREEZE_API FSBZGoToSourceTarget();
};


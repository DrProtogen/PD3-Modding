#pragma once
#include "CoreMinimal.h"
#include "SBZCrimeBondProgression.generated.h"

USTRUCT(BlueprintType)
struct FSBZCrimeBondProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    STARBREEZE_API FSBZCrimeBondProgression();
};


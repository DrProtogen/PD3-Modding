#pragma once
#include "CoreMinimal.h"
#include "SBZPredictedExplosion.h"
#include "SBZPredictedExplosions.generated.h"

USTRUCT(BlueprintType)
struct FSBZPredictedExplosions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPredictedExplosion> Array;
    
    STARBREEZE_API FSBZPredictedExplosions();
};


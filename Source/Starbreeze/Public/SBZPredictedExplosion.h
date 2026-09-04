#pragma once
#include "CoreMinimal.h"
#include "PredictionKey.h"
#include "SBZExplosionResult.h"
#include "SBZPredictedExplosion.generated.h"

class USBZExplosiveData;

USTRUCT(BlueprintType)
struct FSBZPredictedExplosion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZExplosionResult ExplosionResult;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ExplosionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZExplosiveData* ExplosiveData;
    
    STARBREEZE_API FSBZPredictedExplosion();
};


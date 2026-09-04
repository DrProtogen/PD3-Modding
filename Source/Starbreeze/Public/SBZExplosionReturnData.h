#pragma once
#include "CoreMinimal.h"
#include "SBZExplosionResult.h"
#include "SBZExplosionReturnData.generated.h"

USTRUCT(BlueprintType)
struct FSBZExplosionReturnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZExplosionResult ExplosionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExplosionHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExplosionKillCount;
    
    STARBREEZE_API FSBZExplosionReturnData();
};


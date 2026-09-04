#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerM606GrenadeProjectile.h"
#include "SBZPlayerM606HeatShapedChargeGrenadeProjectile.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZPlayerM606HeatShapedChargeGrenadeProjectile : public ASBZPlayerM606GrenadeProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegularExplosionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConeDegrees;
    
public:
    ASBZPlayerM606HeatShapedChargeGrenadeProjectile(const FObjectInitializer& ObjectInitializer);

};


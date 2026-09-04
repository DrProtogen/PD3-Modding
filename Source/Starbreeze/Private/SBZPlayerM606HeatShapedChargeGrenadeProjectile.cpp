#include "SBZPlayerM606HeatShapedChargeGrenadeProjectile.h"

ASBZPlayerM606HeatShapedChargeGrenadeProjectile::ASBZPlayerM606HeatShapedChargeGrenadeProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->RegularExplosionRange = 100.00f;
    this->ConeDegrees = 30.00f;
}



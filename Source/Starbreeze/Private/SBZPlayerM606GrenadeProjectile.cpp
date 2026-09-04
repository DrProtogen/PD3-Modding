#include "SBZPlayerM606GrenadeProjectile.h"
#include "SBZM606SkillDamageEffect.h"

ASBZPlayerM606GrenadeProjectile::ASBZPlayerM606GrenadeProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->M606SkillDamageGameplayEffectClass = USBZM606SkillDamageEffect::StaticClass();
}



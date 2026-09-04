#include "SBZExplosiveData.h"

USBZExplosiveData::USBZExplosiveData() {
    this->DamageType = NULL;
    this->GameplayEffectClass = NULL;
    this->bIsAffectingAlivePawnsOnly = false;
    this->InstigatorSourceType = ESBZInstigatorSourceType::MeleeExplosion;
    this->OverHealDamageMultiplier = 1.00f;
    this->ArmorPenetration = -1.00f;
    this->ExplosionRange = 500.00f;
    this->PlayerDamageDistanceArray.AddDefaulted(1);
    this->AIDamageData = NULL;
    this->bIsFriendlyFireAllowed = false;
    this->PlayerFriendlyFireDamageScale = 1.00f;
    this->PlayerFriendlyFireDamageScaleToInstigator = 1.00f;
    this->ExplosionShapeType = ESBZExplosionShapeType::Sphere;
    this->ConeAngle = 45.00f;
    this->ConeAngleDot = 0.92f;
    this->bIsCone2D = false;
    this->LocalTargetPlayerFeedback = NULL;
    this->LocalInstigatorPlayerFeedback = NULL;
    this->bIsHurtReactionAllowed = true;
}



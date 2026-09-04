#include "SBZExplosionParams.h"

FSBZExplosionParams::FSBZExplosionParams() {
    this->ExplosiveData = NULL;
    this->bIsIgnoringInstigator = false;
    this->bIsIgnoringAvatarActor = false;
    this->PostExplosionEffectClass = NULL;
    this->Location = FVector::ZeroVector;
    this->Normal = FVector::ZeroVector;
}


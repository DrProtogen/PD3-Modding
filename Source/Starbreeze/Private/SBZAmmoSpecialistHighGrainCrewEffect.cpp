#include "SBZAmmoSpecialistHighGrainCrewEffect.h"
#include "EGameplayEffectDurationType.h"

USBZAmmoSpecialistHighGrainCrewEffect::USBZAmmoSpecialistHighGrainCrewEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::Infinite;
    this->bExecutePeriodicEffectOnApplication = false;
}



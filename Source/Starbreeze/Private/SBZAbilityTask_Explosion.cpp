#include "SBZAbilityTask_Explosion.h"

USBZAbilityTask_Explosion::USBZAbilityTask_Explosion() {
    this->ExplosionComponent = NULL;
}

void USBZAbilityTask_Explosion::RejectExplosion() {
}

USBZAbilityTask_Explosion* USBZAbilityTask_Explosion::CreateExplosionTask(UGameplayAbility* OwningAbility, const FSBZExplosionParams& NewExplosionParams, uint8 ExplosionKey, bool bIsServerOnly) {
    return NULL;
}



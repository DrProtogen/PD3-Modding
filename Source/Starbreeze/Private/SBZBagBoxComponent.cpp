#include "SBZBagBoxComponent.h"

USBZBagBoxComponent::USBZBagBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ImpulseCooldown = 1.00f;
    this->ImpulseBuildUp = 6;
    this->ImpulseMultiplier = 0.20f;
}



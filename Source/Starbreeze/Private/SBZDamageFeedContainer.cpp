#include "SBZDamageFeedContainer.h"

USBZDamageFeedContainer::USBZDamageFeedContainer() {
    this->Bridge = NULL;
}

void USBZDamageFeedContainer::OnDamageDealt(float DamageAmount, ESBZDamageType DamageType, AActor* Target, const TArray<FVector>& HitLocations) {
}

void USBZDamageFeedContainer::AddDamageFeedEntry(float DamageAmount, ESBZDamageType DamageType, AActor* Target) {
}



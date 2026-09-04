#include "SBZDamageNumberContainer.h"

USBZDamageNumberContainer::USBZDamageNumberContainer() : UUserWidget(FObjectInitializer::Get()) {
    this->EntryWidgetClass = NULL;
    this->MaxWidgetsPerDamageEvent = 5;
    this->Container = NULL;
    this->Bridge = NULL;
}

void USBZDamageNumberContainer::SpawnDamageNumberAtLocation(float DamageAmount, ESBZDamageType DamageType, FVector WorldLocation) {
}

void USBZDamageNumberContainer::OnDamageDealt(float DamageAmount, ESBZDamageType DamageType, AActor* Victim, const TArray<FVector>& HitLocations) {
}



#include "SBZDamageFeedEntry.h"

USBZDamageFeedEntry::USBZDamageFeedEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->DamageAmount = 0.00f;
    this->DamageType = ESBZDamageType::Normal;
}





AActor* USBZDamageFeedEntry::GetTargetActor() const {
    return NULL;
}

ESBZDamageType USBZDamageFeedEntry::GetDamageType() const {
    return ESBZDamageType::Normal;
}

float USBZDamageFeedEntry::GetDamageAmount() const {
    return 0.0f;
}



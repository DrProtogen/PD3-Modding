#include "SBZCharacterEffectContainer.h"

USBZCharacterEffectContainer::USBZCharacterEffectContainer() {
    this->Panel_CharacterEffectsContainer = NULL;
    this->CharacterEffectWidgetClass = NULL;
    this->CharacterEffectComponent = NULL;
}

void USBZCharacterEffectContainer::OnCharacterEffectRemoved(FSBZCharacterEffectRuntime& CharacterRuntime) {
}

void USBZCharacterEffectContainer::OnCharacterEffectAdded(FSBZCharacterEffectRuntime& CharacterRuntime) {
}

void USBZCharacterEffectContainer::OnCharactedEffectValueUpdated(FSBZCharacterEffectRuntime& CharacterRuntime) {
}

void USBZCharacterEffectContainer::OnCharactedEffectCooldownProgressUpdated(FSBZCharacterEffectRuntime& CharacterRuntime) {
}



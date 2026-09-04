#include "SBZPlayerEmoteManager.h"

USBZPlayerEmoteManager::USBZPlayerEmoteManager() {
}

bool USBZPlayerEmoteManager::IsSlotLocked(const int32 Index) const {
    return false;
}

USBZEmoteCallAsset* USBZPlayerEmoteManager::GetSlotDefaultData(const int32 Index) const {
    return NULL;
}

int32 USBZPlayerEmoteManager::GetMaxEquippedCount() const {
    return 0;
}

USBZEmoteCallAsset* USBZPlayerEmoteManager::GetEquippedData(const int32 Index) const {
    return NULL;
}

int32 USBZPlayerEmoteManager::GetEquippedCount() const {
    return 0;
}



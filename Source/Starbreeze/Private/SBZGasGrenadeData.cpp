#include "SBZGasGrenadeData.h"

USBZGasGrenadeData::USBZGasGrenadeData() {
    this->AttachmentBone = TEXT("LeftHandWeapon");
    this->DropDamageModifierCurve = NULL;
    this->bIsDroppedConvertedToFragGrenade = false;
    this->ExplosionDestroyDelay = 3.00f;
}



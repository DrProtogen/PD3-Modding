#include "SBZExplosionBox.h"

FSBZExplosionBox::FSBZExplosionBox() {
    this->Delay = 0.00f;
    this->Location = FVector::ZeroVector;
    this->Quat = FQuat::Identity;
    this->HalfExtent = FVector::ZeroVector;
    this->DelayHalfExtentPadding = FVector::ZeroVector;
    this->DelayOffset = FVector::ZeroVector;
}


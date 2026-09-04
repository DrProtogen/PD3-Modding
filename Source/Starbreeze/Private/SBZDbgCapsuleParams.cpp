#include "SBZDbgCapsuleParams.h"

FSBZDbgCapsuleParams::FSBZDbgCapsuleParams() {
    this->HalfHeight = 0.00f;
    this->Radius = 0.00f;
    this->Thickness = 0.00f;
    this->bPersistent = false;
    this->Life = 0.00f;
    this->Priority = 0;
    this->Location = FVector::ZeroVector;
    this->Rotation = FQuat::Identity;
    this->Color = FColor::White;
}


#include "SBZWeaponSwayDataStruct.h"

FSBZWeaponSwayDataStruct::FSBZWeaponSwayDataStruct() {
    this->TranslationRecoverySpeed = 0.00f;
    this->XAxisTranslationRecoverySpeed = 0.00f;
    this->YawRecoverySpeed = 0.00f;
    this->PitchRecoverySpeed = 0.00f;
    this->RollRecoverySpeed = 0.00f;
    this->YTranslationToRollInfluence = 0.00f;
    this->CameraOffset = FVector::ZeroVector;
    this->MinTranslation = FVector::ZeroVector;
    this->MaxTranslation = FVector::ZeroVector;
    this->TranslationInfluence = FVector::ZeroVector;
    this->FinalTranslationMultiplier = FVector::ZeroVector;
    this->OvershootTranslationDeltaMultiplier = FVector::ZeroVector;
    this->MinRotation = FRotator::ZeroRotator;
    this->MaxRotation = FRotator::ZeroRotator;
    this->RotationInfluence = FVector::ZeroVector;
    this->FinalRotationMultiplier = FVector::ZeroVector;
    this->OvershootRotationDeltaMultiplier = FVector::ZeroVector;
}


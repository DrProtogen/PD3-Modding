#include "SBZGlobalMaterialParameters.h"

FSBZGlobalMaterialParameters::FSBZGlobalMaterialParameters() {
    this->WindSpeed = 0.00f;
    this->ActionOriginActor = NULL;
    this->WindDirection = FVector::ZeroVector;
    this->FXGlobalEmissive = FLinearColor::White;
    this->FXGlobalBaseColor = FLinearColor::White;
    this->EnemyBacklightInfluence = FLinearColor::White;
    this->EnemyBacklightFade = FLinearColor::White;
    this->EnemyBacklightRangeFuzz = FLinearColor::White;
}


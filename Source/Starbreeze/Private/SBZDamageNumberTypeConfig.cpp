#include "SBZDamageNumberTypeConfig.h"

FSBZDamageNumberTypeConfig::FSBZDamageNumberTypeConfig() {
    this->DamageType = ESBZDamageType::Normal;
    this->ScaleMultiplier = 0.00f;
    this->PopScale = 0.00f;
    this->PopDuration = 0.00f;
    this->FloatDelay = 0.00f;
    this->Color = FLinearColor::White;
}


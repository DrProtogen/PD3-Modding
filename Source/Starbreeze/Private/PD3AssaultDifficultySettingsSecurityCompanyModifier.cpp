#include "PD3AssaultDifficultySettingsSecurityCompanyModifier.h"

FPD3AssaultDifficultySettingsSecurityCompanyModifier::FPD3AssaultDifficultySettingsSecurityCompanyModifier() {
    this->LevelProgressionOperator = EPD3AssaultSettingsSecurityCompanyModifierOperator::Add;
    this->LevelProgression = 0.00f;
    this->MaxAliveAISpawnCountOperator = EPD3AssaultSettingsSecurityCompanyModifierOperator::Add;
    this->MaxAliveAISpawnCount = 0.00f;
}


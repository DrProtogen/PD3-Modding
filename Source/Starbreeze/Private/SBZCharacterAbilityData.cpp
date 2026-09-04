#include "SBZCharacterAbilityData.h"

USBZCharacterAbilityData::USBZCharacterAbilityData() {
    this->InitialHealthV2 = 100.00f;
    this->InitialArmorV2 = 10.00f;
    this->InitialIncomingArmorDamageCriticalMultiplier = 0.20f;
    this->InitialArmorHurtReactionWeightReduction = 0;
    this->InitialOutgoingDamageMultiplier = 1.00f;
    this->InitialHurtReactionWeightBuildupDifficultyScaleArray[0] = 1.00f;
    this->InitialHurtReactionWeightBuildupDifficultyScaleArray[1] = 1.00f;
    this->InitialHurtReactionWeightBuildupDifficultyScaleArray[2] = 1.00f;
    this->InitialHurtReactionWeightBuildupDifficultyScaleArray[3] = 1.00f;
}



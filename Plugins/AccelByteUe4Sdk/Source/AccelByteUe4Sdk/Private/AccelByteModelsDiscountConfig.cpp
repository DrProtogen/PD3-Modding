#include "AccelByteModelsDiscountConfig.h"

FAccelByteModelsDiscountConfig::FAccelByteModelsDiscountConfig() {
    this->DiscountType = EDiscountType::NONE;
    this->DiscountPercentage = 0;
    this->DiscountAmount = 0;
    this->Stackable = false;
    this->RestrictType = ERestrictType::NONE;
}


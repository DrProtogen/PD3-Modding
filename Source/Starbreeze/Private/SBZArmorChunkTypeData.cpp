#include "SBZArmorChunkTypeData.h"

FSBZArmorChunkTypeData::FSBZArmorChunkTypeData() {
    this->ReplenishDelay = 0.00f;
    this->MaxDownCount = 0.00f;
    this->DamageScaleRelative = 0.00f;
    this->TraumaScale = 0.00f;
    this->Type = ESBZArmorChunkType::Normal;
    this->BackgroundColor = FLinearColor::White;
    this->MainColor = FLinearColor::White;
    this->LaggingColor = FLinearColor::White;
    this->TraumaColor = FLinearColor::White;
}


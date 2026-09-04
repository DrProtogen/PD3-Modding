#include "SBZStageMiscDebugData.h"

FSBZStageMiscDebugData::FSBZStageMiscDebugData() {
    this->ElementId = 0;
    this->Type = ESBZStageMiscDebugDataType::Name;
    this->Color = FColor::White;
    this->V0 = FVector::ZeroVector;
    this->V1 = FVector::ZeroVector;
    this->Q = FQuat::Identity;
}


#include "SBZAgilityTrajectoryPoint.h"

FSBZAgilityTrajectoryPoint::FSBZAgilityTrajectoryPoint() {
    this->AgilityPointType = ESBZAgilityPointType::FloorStart;
    this->Location = FVector::ZeroVector;
    this->Rotation = FRotator::ZeroRotator;
}


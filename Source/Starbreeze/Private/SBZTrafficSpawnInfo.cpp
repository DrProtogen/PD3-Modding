#include "SBZTrafficSpawnInfo.h"

FSBZTrafficSpawnInfo::FSBZTrafficSpawnInfo() {
    this->VehicleActorClass = NULL;
    this->VehicleType = ESBZTrafficVehicleType::FirstResponder;
    this->SpawnTransform = FTransform::Identity;
}


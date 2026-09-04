#include "SBZSkillData.h"

USBZSkillData::USBZSkillData() {
    this->ProgressLevel = 1000.00f;
    this->bIsEquippedTagGranted = false;
    this->bIsMissionFailTimeoutDelay = false;
    this->MissionFailTimeoutDelay = 20.00f;
    this->bIsGlobalDodgeVariablesAdded = false;
    this->bIsGlobalArmorReductionVariableAdded = false;
    this->bIsGlobalRuntimeCountVariableAdded = false;
    this->PlayerEffect = NULL;
    this->CrewEffect = NULL;
    this->bIsAnyRequiredBuffTypeEnough = false;
    this->EquipCost = -1;
    this->bIsPersistent = false;
}



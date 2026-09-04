#include "AccelByteModelsBaseUserEntitlementHistory.h"

FAccelByteModelsBaseUserEntitlementHistory::FAccelByteModelsBaseUserEntitlementHistory() {
    this->Action = EAccelByteUserEntitlementAction::NONE;
    this->UseCount = 0;
    this->UseCountChange = 0;
    this->Origin = EAccelByteUserEntitlementOrigin::NONE;
    this->Clazz = EAccelByteEntitlementClass::NONE;
}


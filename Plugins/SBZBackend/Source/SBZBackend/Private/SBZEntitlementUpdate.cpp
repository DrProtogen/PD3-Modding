#include "SBZEntitlementUpdate.h"

FSBZEntitlementUpdate::FSBZEntitlementUpdate() {
    this->Clazz = ESBZEntitlementClass::NONE;
    this->Type = ESBZEntitlementType::NONE;
    this->Status = ESBZEntitlementStatus::NONE;
    this->AppType = ESBZAppType::NONE;
    this->UseCount = 0;
    this->Source = ESBZEntitlementSource::NONE;
    this->Origin = ESBZUserEntitlementOrigin::NONE;
    this->Stackable = false;
    this->StackedUseCount = 0;
}


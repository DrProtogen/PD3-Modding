#include "SBZEntitlementInfo.h"

FSBZEntitlementInfo::FSBZEntitlementInfo() {
    this->Clazz = ESBZEntitlementClass::NONE;
    this->Type = ESBZEntitlementType::NONE;
    this->Status = ESBZEntitlementStatus::NONE;
    this->AppType = ESBZAppType::NONE;
    this->UseCount = 0;
    this->Source = ESBZEntitlementSource::NONE;
    this->Stackable = false;
    this->Replayed = false;
}


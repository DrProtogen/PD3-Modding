#include "SBZEntitlementItemSnapshot.h"

FSBZEntitlementItemSnapshot::FSBZEntitlementItemSnapshot() {
    this->AppType = ESBZAppType::NONE;
    this->Listable = false;
    this->EntitlementType = ESBZEntitlementType::NONE;
    this->UseCount = 0;
    this->Stackable = false;
    this->Purchasable = false;
    this->ItemType = ESBZCommerceItemType::NONE;
    this->MaxCountPerUser = 0;
    this->MaxCount = 0;
}


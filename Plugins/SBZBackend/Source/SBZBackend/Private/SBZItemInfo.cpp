#include "SBZItemInfo.h"

FSBZItemInfo::FSBZItemInfo() {
    this->EntitlementType = ESBZEntitlementType::NONE;
    this->UseCount = 0;
    this->Stackable = false;
    this->Status = ESBZItemStatus::NONE;
    this->ItemType = ESBZCommerceItemType::NONE;
    this->MaxCountPerUser = 0;
}


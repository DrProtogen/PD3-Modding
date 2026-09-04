#include "SBZItemRegionDataItem.h"

FSBZItemRegionDataItem::FSBZItemRegionDataItem() {
    this->Price = 0;
    this->DiscountPercentage = 0;
    this->DiscountAmount = 0;
    this->DiscountedPrice = 0;
    this->CurrencyType = ESBZItemCurrencyType::NONE;
    this->TrialPrice = 0;
}


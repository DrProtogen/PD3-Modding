#include "SBZFulfillmentRequest.h"

FSBZFulfillmentRequest::FSBZFulfillmentRequest() {
    this->Quantity = 0;
    this->Source = ESBZItemSource::NONE;
    this->Duration = 0;
    this->Origin = ESBZPlatformRewardOrigin::NONE;
}


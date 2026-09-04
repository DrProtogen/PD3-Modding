#include "SBZBanUserRequest.h"

FSBZBanUserRequest::FSBZBanUserRequest() {
    this->BanType = ESBZBanType::Login;
    this->Reason = ESBZBanReason::Empty;
    this->SkipNotif = false;
}


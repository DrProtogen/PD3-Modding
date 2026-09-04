#include "SBZForbidHurtNotifyState.h"

USBZForbidHurtNotifyState::USBZForbidHurtNotifyState() {
    this->bIsFlinchForbidden = false;
    this->MaxForbidWeight = ESBZDamageWeight::Incapacitate;
}



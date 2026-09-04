#include "SBZTraversalSettings.h"

USBZTraversalSettings::USBZTraversalSettings() {
    this->MinBreakTraversalDestructibleHeistState = EPD3HeistState::Alarm;
}

bool USBZTraversalSettings::IsTraversalDestructionAllowed(const UObject* WorldContextObject) {
    return false;
}

USBZTraversalSettings* USBZTraversalSettings::Get() {
    return NULL;
}



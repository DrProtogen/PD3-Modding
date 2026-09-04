#include "ImGuiSettings.h"

UImGuiSettings::UImGuiSettings() {
    this->bShareKeyboardInput = true;
    this->bShareGamepadInput = false;
    this->bShareMouseInput = false;
    this->bUseSoftwareCursor = false;
    this->InputProcessorPriority = 2;
}



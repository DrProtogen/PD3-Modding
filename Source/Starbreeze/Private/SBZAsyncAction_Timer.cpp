#include "SBZAsyncAction_Timer.h"

USBZAsyncAction_Timer::USBZAsyncAction_Timer() {
}

bool USBZAsyncAction_Timer::IsActive() const {
    return false;
}

float USBZAsyncAction_Timer::GetProgress() const {
    return 0.0f;
}

float USBZAsyncAction_Timer::GetElapsedTime() const {
    return 0.0f;
}

void USBZAsyncAction_Timer::Cancel() {
}

void USBZAsyncAction_Timer::AsyncTimerUpdate() {
}

USBZAsyncAction_Timer* USBZAsyncAction_Timer::AsyncTimer(UObject* WorldContextObject, float Duration, float UpdateRate) {
    return NULL;
}



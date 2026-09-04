#include "SBZWorldRuntimeBase.h"

// WorldRuntimeClass is a GlobalConfig property (see SBZWorldRuntimeBase.h): its default comes from
// DefaultEngine.ini, not a hardcoded C++ default. USBZWorldRuntime (the concrete subclass) lives in
// the Starbreeze module, which already depends on SBZWorldRuntime, so this base class cannot also
// depend on Starbreeze without a circular module reference.
USBZWorldRuntimeBase::USBZWorldRuntimeBase() {
}

USBZWorldRuntimeBase* USBZWorldRuntimeBase::GetWorldRuntime(const UObject* WorldContextObject) {
    return NULL;
}



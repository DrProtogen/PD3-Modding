#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZJSonSerializeVariablesInterface.generated.h"

// The UHT-dump reconstruction mis-tagged this as a JsonUtilities (engine module) type and left only
// a "CROSS-MODULE INCLUDE" placeholder comment where the real declaration should be; no such type
// exists in the engine's JsonUtilities module. This interface is used by exactly one class in the
// whole project (USBZWeaponPatternDataConfig) with no overrides and no other call sites anywhere,
// so there is no evidence of what methods the original interface declared. Declared here as an
// empty marker interface so dependents compile; fill in real methods if/when their signatures
// become known (e.g. from further asset/blueprint recovery).
UINTERFACE(Blueprintable)
class STARBREEZE_API USBZJSonSerializeVariablesInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZJSonSerializeVariablesInterface {
    GENERATED_BODY()
};

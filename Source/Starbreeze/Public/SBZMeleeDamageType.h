#pragma once
#include "CoreMinimal.h"
#include "SBZDamageType.h"
#include "SBZMeleeDamageType.generated.h"

UCLASS(Blueprintable)
class USBZMeleeDamageType : public USBZDamageType {
    GENERATED_BODY()
public:
    // Plain (non-UPROPERTY) member dropped by the UHT-dump reconstruction; restored from its
    // constructor usage.
    bool bApplyDamageImpulseAtImpactLocation = false;

    USBZMeleeDamageType();

};


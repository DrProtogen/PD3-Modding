#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGasGrenadeData.h"
#include "SBZSmokeSkillInterface.h"
#include "SBZPlayerSmokeGrenadeData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerSmokeGrenadeData : public USBZPlayerGasGrenadeData, public ISBZSmokeSkillInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMultiplierIncrease;
    
    USBZPlayerSmokeGrenadeData();


    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SBZDeveloperSettings.h"
#include "SBZKeyPropertyModeData.h"
#include "SBZLookInputSettings.h"
#include "SBZPlayerAbilityBuffTypeData.h"
#include "SBZPlayerSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class USBZPlayerSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLookInputSettings LookInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FSBZKeyPropertyModeData> KeyPropertyModeMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDodgeChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxArmorDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveArmorChunkDodgeChancePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRuntimeCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerAbilityBuffTypeData AbilityBuffTypeDataArray[3];
    
    USBZPlayerSettings();

};


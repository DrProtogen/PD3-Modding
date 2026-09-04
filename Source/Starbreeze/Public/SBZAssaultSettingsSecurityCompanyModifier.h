#pragma once
#include "CoreMinimal.h"
#include "PD3AssaultDifficultySettingsSecurityCompanyModifier.h"
#include "SBZAssaultSettingsSecurityCompanyModifier.generated.h"

class UPD3AssaultSettings;

USTRUCT(BlueprintType)
struct FSBZAssaultSettingsSecurityCompanyModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPD3AssaultSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRetriggerWhileActiveAllowed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SecurityCompanyMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipLevelProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3AssaultDifficultySettingsSecurityCompanyModifier DifficultySettingsArray[4];
    
    STARBREEZE_API FSBZAssaultSettingsSecurityCompanyModifier();
};


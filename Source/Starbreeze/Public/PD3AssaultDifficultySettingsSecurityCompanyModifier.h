#pragma once
#include "CoreMinimal.h"
#include "EPD3AssaultSettingsSecurityCompanyModifierOperator.h"
#include "PD3AssaultDifficultySettingsSecurityCompanyModifier.generated.h"

USTRUCT(BlueprintType)
struct FPD3AssaultDifficultySettingsSecurityCompanyModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3AssaultSettingsSecurityCompanyModifierOperator LevelProgressionOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3AssaultSettingsSecurityCompanyModifierOperator MaxAliveAISpawnCountOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAliveAISpawnCount;
    
    STARBREEZE_API FPD3AssaultDifficultySettingsSecurityCompanyModifier();
};


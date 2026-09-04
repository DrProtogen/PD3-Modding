#pragma once
#include "CoreMinimal.h"
#include "SBZHeistModifierEventConfigurationEntry.h"
#include "SBZHeistModifierEventConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZHeistModifierEventConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelShortName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHeistModifierEventConfigurationEntry> HeistModifierEventConfigurationArray;
    
    STARBREEZE_API FSBZHeistModifierEventConfiguration();
};


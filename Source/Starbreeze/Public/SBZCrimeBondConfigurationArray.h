#pragma once
#include "CoreMinimal.h"
#include "SBZCrimeBondConfiguration.h"
#include "SBZCrimeBondConfigurationArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZCrimeBondConfigurationArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCrimeBondConfiguration> CrimeBondConfigurationArray;
    
    STARBREEZE_API FSBZCrimeBondConfigurationArray();
};


#pragma once
#include "CoreMinimal.h"
#include "SBZCrimeBondConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZCrimeBondConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrimeBondSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> CrimeBondBundles;
    
    STARBREEZE_API FSBZCrimeBondConfiguration();
};


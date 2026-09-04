#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerAbilityBuffTypeData.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlayerAbilityBuffTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizedDurationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizedValueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    STARBREEZE_API FSBZPlayerAbilityBuffTypeData();
};


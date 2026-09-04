#pragma once
#include "CoreMinimal.h"
#include "SBZCookedAnimationOverrideData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FSBZCookedAnimationOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimationAsset*> Array;
    
    STARBREEZE_API FSBZCookedAnimationOverrideData();
};


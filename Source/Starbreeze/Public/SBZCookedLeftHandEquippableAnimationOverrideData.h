#pragma once
#include "CoreMinimal.h"
#include "SBZCookedLeftHandEquippableAnimationOverrideData.generated.h"

class ASBZEquippable;
class UAnimationAsset;

USTRUCT(BlueprintType)
struct FSBZCookedLeftHandEquippableAnimationOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZEquippable> Equippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimationAsset*> Array;
    
    STARBREEZE_API FSBZCookedLeftHandEquippableAnimationOverrideData();
};


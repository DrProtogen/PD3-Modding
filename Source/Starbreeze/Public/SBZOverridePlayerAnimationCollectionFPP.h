#pragma once
#include "CoreMinimal.h"
#include "SBZCookedAnimationOverrideData.h"
#include "SBZCookedLeftHandEquippableAnimationOverrideData.h"
#include "SBZPlayerAnimationCollectionFPP.h"
#include "SBZOverridePlayerAnimationCollectionFPP.generated.h"

UCLASS(Blueprintable)
class USBZOverridePlayerAnimationCollectionFPP : public USBZPlayerAnimationCollectionFPP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCookedAnimationOverrideData> CookedOverrideDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCookedLeftHandEquippableAnimationOverrideData> CookedLeftHandEquippableOverrideDataArray;
    
    USBZOverridePlayerAnimationCollectionFPP();

};


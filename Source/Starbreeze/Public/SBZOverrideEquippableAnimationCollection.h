#pragma once
#include "CoreMinimal.h"
#include "SBZCookedAnimationOverrideData.h"
#include "SBZEquippableAnimationCollection.h"
#include "SBZOverrideEquippableAnimationCollection.generated.h"

UCLASS(Blueprintable)
class USBZOverrideEquippableAnimationCollection : public USBZEquippableAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCookedAnimationOverrideData> CookedOverrideDataFPArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCookedAnimationOverrideData> CookedOverrideDataTPArray;
    
    USBZOverrideEquippableAnimationCollection();

};


#pragma once
#include "CoreMinimal.h"
#include "EWwiseGroupType.h"
#include "WwiseGroupValueCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseGroupValueCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseGroupType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    FWwiseGroupValueCookedData();

    // Used as a TSet element (WwiseEventCookedData.h / WwiseSwitchContainerLeafCookedData.h); the
    // plain (non-reflected) hash/equality operators were dropped by the UHT-dump reconstruction.
    // Identity is Type+GroupId+Id; DebugName is cosmetic only.
    bool operator==(const FWwiseGroupValueCookedData& Rhs) const {
        return Type == Rhs.Type && GroupId == Rhs.GroupId && Id == Rhs.Id;
    }

    friend uint32 GetTypeHash(const FWwiseGroupValueCookedData& InGroupValue) {
        return HashCombine(HashCombine(GetTypeHash(InGroupValue.Type), GetTypeHash(InGroupValue.GroupId)), GetTypeHash(InGroupValue.Id));
    }
};


#pragma once
#include "CoreMinimal.h"
#include "SBZPlayStationDLCSync.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZPlayStationDLCSync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServiceLabel;
    
    FSBZPlayStationDLCSync();
};


#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMatchInfoEndedOptPayload.h"
#include "AccelByteModelsMatchInfoEndedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMatchInfoEndedPayload : public FAccelByteModelsMatchInfoEndedOptPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchinfoID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndReason;
    
    FAccelByteModelsMatchInfoEndedPayload();
};


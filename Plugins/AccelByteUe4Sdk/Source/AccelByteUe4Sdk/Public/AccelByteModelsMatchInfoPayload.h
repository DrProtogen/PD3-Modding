#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMatchInfoOptPayload.h"
#include "AccelByteModelsMatchInfoPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMatchInfoPayload : public FAccelByteModelsMatchInfoOptPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchinfoID;
    
    FAccelByteModelsMatchInfoPayload();
};


#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMatchInfoPlayerOptPayload.h"
#include "AccelByteModelsMatchInfoPlayerPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMatchInfoPlayerPayload : public FAccelByteModelsMatchInfoPlayerOptPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchinfoID;
    
    FAccelByteModelsMatchInfoPlayerPayload();
};


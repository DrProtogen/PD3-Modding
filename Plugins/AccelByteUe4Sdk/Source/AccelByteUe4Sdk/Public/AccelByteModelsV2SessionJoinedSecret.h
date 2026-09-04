#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2SessionJoinedSecret.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2SessionJoinedSecret {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Secret;
    
    FAccelByteModelsV2SessionJoinedSecret();
};


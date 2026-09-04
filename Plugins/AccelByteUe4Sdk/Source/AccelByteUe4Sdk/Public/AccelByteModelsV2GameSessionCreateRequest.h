#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2GameSessionBaseRequest.h"
#include "AccelByteModelsV2GameSessionCreateStorage.h"
#include "AccelByteModelsV2GameSessionCreateRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionCreateRequest : public FAccelByteModelsV2GameSessionBaseRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsV2GameSessionCreateStorage Storage;
    
    FAccelByteModelsV2GameSessionCreateRequest();
};


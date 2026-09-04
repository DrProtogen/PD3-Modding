#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAcceptAgreementRequest.h"
#include "AccelByteModelsChangeAgreementRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChangeAgreementRequest : public FAccelByteModelsAcceptAgreementRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNeedToSendEventMarketing;
    
    FAccelByteModelsChangeAgreementRequest();
};


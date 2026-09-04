#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMissionStartedOptPayload.h"
#include "AccelByteModelsMissionStartedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMissionStartedPayload : public FAccelByteModelsMissionStartedOptPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MissionInstanceID;
    
    FAccelByteModelsMissionStartedPayload();
};


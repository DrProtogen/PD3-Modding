#pragma once
#include "CoreMinimal.h"
#include "Oauth2Token.h"
#include "Oauth2TokenV4.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FOauth2TokenV4 : public FOauth2Token {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Ticket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EstimatedWaitingTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReconnectExpiredAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerPollingTimeInSeconds;
    
    FOauth2TokenV4();
};


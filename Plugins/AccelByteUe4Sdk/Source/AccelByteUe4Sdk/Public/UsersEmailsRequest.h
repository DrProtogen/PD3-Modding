#pragma once
#include "CoreMinimal.h"
#include "UsersEmailsRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FUsersEmailsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ListEmailAddressRequest;
    
    FUsersEmailsRequest();
};


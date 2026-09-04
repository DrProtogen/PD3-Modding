#pragma once
#include "CoreMinimal.h"
#include "UserInputValidationResponse.generated.h"

USTRUCT(BlueprintType)
struct FUserInputValidationResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Valid;
    
    ACCELBYTEUE4SDK_API FUserInputValidationResponse();
};


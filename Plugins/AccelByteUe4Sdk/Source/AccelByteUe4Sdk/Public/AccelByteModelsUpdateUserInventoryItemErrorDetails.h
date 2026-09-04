#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUpdateUserInventoryItemErrorDetails.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUpdateUserInventoryItemErrorDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    FAccelByteModelsUpdateUserInventoryItemErrorDetails();
};


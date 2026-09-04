#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMoveUserItemDataRequest.h"
#include "AccelByteModelsMoveUserItemsBetweenInventoriesRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMoveUserItemsBetweenInventoriesRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsMoveUserItemDataRequest> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SrcInventoryId;
    
    FAccelByteModelsMoveUserItemsBetweenInventoriesRequest();
};


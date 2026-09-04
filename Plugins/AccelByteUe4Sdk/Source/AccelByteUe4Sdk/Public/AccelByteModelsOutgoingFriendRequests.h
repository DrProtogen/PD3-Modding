#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsFriendRequest.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsOutgoingFriendRequests.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsOutgoingFriendRequests {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsFriendRequest> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsOutgoingFriendRequests();
};


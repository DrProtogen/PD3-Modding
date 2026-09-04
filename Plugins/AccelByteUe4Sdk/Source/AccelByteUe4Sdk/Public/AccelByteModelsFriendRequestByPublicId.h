#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsFriendRequestByPublicId.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsFriendRequestByPublicId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendPublicId;
    
    FAccelByteModelsFriendRequestByPublicId();
};


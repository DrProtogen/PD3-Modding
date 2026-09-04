#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChallengeGoalProgress.h"
#include "AccelByteModelsChallengeProgressMeta.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsChallengeProgressResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChallengeProgressResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsChallengeGoalProgress> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsChallengeProgressMeta Meta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsChallengeProgressResponse();
};


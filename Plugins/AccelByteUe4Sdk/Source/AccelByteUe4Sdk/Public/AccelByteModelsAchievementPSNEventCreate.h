#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAchievementPSNEvent.h"
#include "AccelByteModelsAchievementPSNEventCreate.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAchievementPSNEventCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ThirdPartyUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsAchievementPSNEvent> Events;
    
    FAccelByteModelsAchievementPSNEventCreate();
};


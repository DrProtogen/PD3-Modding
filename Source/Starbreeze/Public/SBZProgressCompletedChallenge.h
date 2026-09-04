#pragma once
#include "CoreMinimal.h"
#include "SBZProgressCompletedChallenge.generated.h"

USTRUCT(BlueprintType)
struct FSBZProgressCompletedChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChallengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleted;
    
    STARBREEZE_API FSBZProgressCompletedChallenge();
};


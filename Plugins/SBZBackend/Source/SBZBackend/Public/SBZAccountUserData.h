#pragma once
#include "CoreMinimal.h"
#include "SBZAccountUserData.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZAccountUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    FSBZAccountUserData();
};


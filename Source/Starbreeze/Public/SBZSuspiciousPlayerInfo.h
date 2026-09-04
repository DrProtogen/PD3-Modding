#pragma once
#include "CoreMinimal.h"
#include "SBZSuspiciousPlayerInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZSuspiciousPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    STARBREEZE_API FSBZSuspiciousPlayerInfo();
};


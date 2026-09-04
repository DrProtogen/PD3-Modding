#pragma once
#include "CoreMinimal.h"
#include "UserPublicInfoResponseV4.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FUserPublicInfoResponseV4 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueDisplayName;
    
    FUserPublicInfoResponseV4();
};


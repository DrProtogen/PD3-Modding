#pragma once
#include "CoreMinimal.h"
#include "AccelByteArrayByteObsolete.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteArrayByteObsolete {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Content;
    
    FAccelByteArrayByteObsolete();
};


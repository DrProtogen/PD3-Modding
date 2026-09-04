#pragma once
#include "CoreMinimal.h"
#include "AccelByteArrayByteObsolete.h"
#include "AccelByteBinaryFileStructureObsolete.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteBinaryFileStructureObsolete {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FAccelByteArrayByteObsolete> Segments;
    
    FAccelByteBinaryFileStructureObsolete();
};


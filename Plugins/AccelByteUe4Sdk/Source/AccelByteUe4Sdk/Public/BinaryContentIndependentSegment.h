#pragma once
#include "CoreMinimal.h"
#include "BinaryContentIndependentSegment.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FBinaryContentIndependentSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ArrayByte;
    
    FBinaryContentIndependentSegment();
};


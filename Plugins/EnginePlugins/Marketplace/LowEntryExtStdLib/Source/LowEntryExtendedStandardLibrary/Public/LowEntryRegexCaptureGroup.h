#pragma once
#include "CoreMinimal.h"
#include "LowEntryRegexCaptureGroup.generated.h"

USTRUCT(BlueprintType)
struct LOWENTRYEXTENDEDSTANDARDLIBRARY_API FLowEntryRegexCaptureGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CaptureGroupNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeginIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Match;
    
    FLowEntryRegexCaptureGroup();
};


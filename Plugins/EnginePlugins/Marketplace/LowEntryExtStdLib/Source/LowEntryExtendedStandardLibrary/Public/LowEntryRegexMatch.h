#pragma once
#include "CoreMinimal.h"
#include "LowEntryRegexCaptureGroup.h"
#include "LowEntryRegexMatch.generated.h"

USTRUCT(BlueprintType)
struct LOWENTRYEXTENDEDSTANDARDLIBRARY_API FLowEntryRegexMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeginIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Match;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLowEntryRegexCaptureGroup> CaptureGroups;
    
    FLowEntryRegexMatch();
};


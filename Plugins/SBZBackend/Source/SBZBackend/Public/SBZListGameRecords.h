#pragma once
#include "CoreMinimal.h"
#include "SBZGameRecord.h"
#include "SBZListGameRecords.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZListGameRecords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameRecord> Data;
    
    FSBZListGameRecords();
};


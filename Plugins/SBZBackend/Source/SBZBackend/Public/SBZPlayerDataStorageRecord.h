#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerDataStorageRecord.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZPlayerDataStorageRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValueJson;
    
    FSBZPlayerDataStorageRecord();
};


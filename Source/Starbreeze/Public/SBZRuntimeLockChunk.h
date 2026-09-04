#pragma once
#include "CoreMinimal.h"
#include "ESBZLockChunkState.h"
#include "SBZLockChunkConfig.h"
#include "SBZRuntimeLockChunk.generated.h"

class UImage;

USTRUCT(BlueprintType)
struct FSBZRuntimeLockChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZLockChunkState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZLockChunkConfig Config;
    
    STARBREEZE_API FSBZRuntimeLockChunk();
};


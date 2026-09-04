#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZLockChunkType.h"
#include "SBZLockChunkConfig.h"
#include "SBZLockChunkDefinitionData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZLockChunkDefinitionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZLockChunkType, FSBZLockChunkConfig> ChunkDefinitionMap;
    
    USBZLockChunkDefinitionData();

};


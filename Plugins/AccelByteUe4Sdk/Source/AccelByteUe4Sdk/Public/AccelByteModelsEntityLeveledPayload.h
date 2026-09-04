#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsEntityLeveledOptPayload.h"
#include "AccelByteModelsEntityLeveledPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsEntityLeveledPayload : public FAccelByteModelsEntityLeveledOptPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntityID;
    
    FAccelByteModelsEntityLeveledPayload();
};


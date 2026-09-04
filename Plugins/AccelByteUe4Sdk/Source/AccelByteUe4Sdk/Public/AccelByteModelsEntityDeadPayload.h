#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsEntityDeadOptPayload.h"
#include "AccelByteModelsEntityDeadPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsEntityDeadPayload : public FAccelByteModelsEntityDeadOptPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntityID;
    
    FAccelByteModelsEntityDeadPayload();
};


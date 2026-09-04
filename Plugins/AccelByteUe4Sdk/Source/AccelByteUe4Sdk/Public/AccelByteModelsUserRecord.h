#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCloudsaveBase.h"
#include "ESetByMetadataRecord.h"
#include "AccelByteModelsUserRecord.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserRecord : public FAccelByteModelsCloudsaveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPublic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESetByMetadataRecord SetBy;
    
    FAccelByteModelsUserRecord();
};


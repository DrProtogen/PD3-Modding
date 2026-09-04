#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCloudsaveBase.h"
#include "AccelByteModelsAdminGetUserRecords.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAdminGetUserRecords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsCloudsaveBase> Data;
    
    FAccelByteModelsAdminGetUserRecords();
};


#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2PartySessionStorageReservedData.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2PartySessionStorageReservedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PastSessionIDs;
    
    FAccelByteModelsV2PartySessionStorageReservedData();
};


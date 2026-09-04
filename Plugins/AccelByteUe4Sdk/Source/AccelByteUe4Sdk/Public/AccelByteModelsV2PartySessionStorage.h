#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsV2PartySessionStorageReservedData.h"
#include "AccelByteModelsV2PartySessionStorage.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2PartySessionStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FAccelByteModelsV2PartySessionStorageReservedData> Reserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FJsonObjectWrapper> Member;
    
    FAccelByteModelsV2PartySessionStorage();
};


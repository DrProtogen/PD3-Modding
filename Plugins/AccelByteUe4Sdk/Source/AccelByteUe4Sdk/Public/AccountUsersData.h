#pragma once
#include "CoreMinimal.h"
#include "AccountUserData.h"
#include "AccountUsersData.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccountUsersData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccountUserData> Data;
    
    FAccountUsersData();
};


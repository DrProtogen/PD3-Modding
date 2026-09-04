#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "SBZGameSessionQuery.generated.h"

USTRUCT(BlueprintType)
struct FSBZGameSessionQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper JsonWrapper;
    
    STARBREEZE_API FSBZGameSessionQuery();
};


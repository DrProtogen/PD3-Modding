#pragma once
#include "CoreMinimal.h"
#include "SBZQosServer.h"
#include "SBZQosServerList.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZQosServerList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZQosServer> Servers;
    
    FSBZQosServerList();
};


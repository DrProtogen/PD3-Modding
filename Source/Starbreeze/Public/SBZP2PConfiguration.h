#pragma once
#include "CoreMinimal.h"
#include "SBZP2PConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZP2PConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultRegionFilteringLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSessionsExpected;
    
    STARBREEZE_API FSBZP2PConfiguration();
};


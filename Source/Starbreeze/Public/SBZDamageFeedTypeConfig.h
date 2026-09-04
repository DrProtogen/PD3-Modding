#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZDamageType.h"
#include "SBZDamageFeedTypeConfig.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDamageFeedTypeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDamageType DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    FSBZDamageFeedTypeConfig();
};


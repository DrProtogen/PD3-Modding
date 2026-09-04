#pragma once
#include "CoreMinimal.h"
#include "SBZIndividualInstantLoot.generated.h"

USTRUCT(BlueprintType)
struct FSBZIndividualInstantLoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LootCount;
    
    STARBREEZE_API FSBZIndividualInstantLoot();
};


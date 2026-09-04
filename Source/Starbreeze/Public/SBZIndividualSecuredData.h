#pragma once
#include "CoreMinimal.h"
#include "SBZIndividualInstantLoot.h"
#include "SBZIndividualSecuredBag.h"
#include "SBZIndividualSecuredData.generated.h"

USTRUCT(BlueprintType)
struct FSBZIndividualSecuredData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZIndividualInstantLoot> IndividualInstantLootArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZIndividualSecuredBag> IndividualSecuredBagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerStateId;
    
    STARBREEZE_API FSBZIndividualSecuredData();
};


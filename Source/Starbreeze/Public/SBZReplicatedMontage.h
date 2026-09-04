#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZReplicatedMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZReplicatedMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Position;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 NextSectionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MontageTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 MontageIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LeadingCharacterNetID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> FollowerNetIDs;
    
    STARBREEZE_API FSBZReplicatedMontage();
};


#pragma once
#include "CoreMinimal.h"
#include "SBZSuitBaseVariant.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSBZSuitBaseVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh3P;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> UpperPartMaterialSlotIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> LowerPartMaterialSlotIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> AccessoriesPartMaterialSlotIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> OverrideMaterialOrderArray;
    
    STARBREEZE_API FSBZSuitBaseVariant();
};


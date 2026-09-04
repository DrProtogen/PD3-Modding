#pragma once
#include "CoreMinimal.h"
#include "SBZSkelMeshMergeSectionMapping_BP.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSkelMeshMergeSectionMapping_BP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SectionIDs;
    
    FSBZSkelMeshMergeSectionMapping_BP();
};


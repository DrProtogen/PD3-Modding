#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSkelMeshMergeUVTransform.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSkelMeshMergeUVTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> UVTransforms;
    
    FSBZSkelMeshMergeUVTransform();
};


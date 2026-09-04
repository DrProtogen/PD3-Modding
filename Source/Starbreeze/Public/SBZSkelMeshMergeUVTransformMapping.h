#pragma once
#include "CoreMinimal.h"
#include "SBZSkelMeshMergeUVTransform.h"
#include "SBZSkelMeshMergeUVTransformMapping.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSkelMeshMergeUVTransformMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSkelMeshMergeUVTransform> UVTransformsPerMesh;
    
    FSBZSkelMeshMergeUVTransformMapping();
};


#pragma once
#include "CoreMinimal.h"
#include "SBZSkelMeshMergeSectionMapping_BP.h"
#include "SBZSkelMeshMergeUVTransformMapping.h"
#include "SBZSrcMesh_BP.h"
#include "SBZSkeletalMeshMergeParams.generated.h"

class USkeleton;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSkeletalMeshMergeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSkelMeshMergeSectionMapping_BP> MeshSectionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSkelMeshMergeUVTransformMapping UVTransformsPerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSrcMesh_BP> MeshesToMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StripTopLODS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsCpuAccess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkeletonBefore: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    FSBZSkeletalMeshMergeParams();
};


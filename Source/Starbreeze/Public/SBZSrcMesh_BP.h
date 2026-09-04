#pragma once
#include "CoreMinimal.h"
#include "SBZSrcMesh_BP.generated.h"

class USkeletalMesh;
class USkinnedMeshComponent;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSrcMesh_BP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SrcSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SrcSkinnedSkeletalMesh;
    
    FSBZSrcMesh_BP();
};


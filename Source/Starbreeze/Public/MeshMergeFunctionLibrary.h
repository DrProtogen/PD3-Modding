#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSkeletalMeshMergeParams.h"
#include "MeshMergeFunctionLibrary.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class STARBREEZE_API UMeshMergeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMeshMergeFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeMeshes(const FSBZSkeletalMeshMergeParams& Params);
    
};


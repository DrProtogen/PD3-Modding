#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZToolSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZToolSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    USBZToolSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};


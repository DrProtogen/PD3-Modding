#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWheeledVehicleSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZWheeledVehicleSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    USBZWheeledVehicleSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};


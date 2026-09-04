#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZPawnSpawnEditorMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPawnSpawnEditorMeshComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    USBZPawnSpawnEditorMeshComponent(const FObjectInitializer& ObjectInitializer);

};


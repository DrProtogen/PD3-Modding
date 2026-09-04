#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkAcousticTextureSetComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkAcousticTextureSetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAkAcousticTextureSetComponent(const FObjectInitializer& ObjectInitializer);

};


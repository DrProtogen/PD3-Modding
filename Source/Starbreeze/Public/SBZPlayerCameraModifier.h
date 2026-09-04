#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZPlayerCameraModifier.generated.h"

UCLASS(Abstract, Blueprintable)
class USBZPlayerCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    USBZPlayerCameraModifier();

};


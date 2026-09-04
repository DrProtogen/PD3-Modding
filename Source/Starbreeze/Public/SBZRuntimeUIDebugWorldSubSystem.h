#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZRuntimeUIDebugWorldSubSystem.generated.h"

UCLASS(Blueprintable)
class USBZRuntimeUIDebugWorldSubSystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    USBZRuntimeUIDebugWorldSubSystem();

};


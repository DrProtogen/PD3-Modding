#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSpawnActorNotifyState.generated.h"

class USBZAnimationSpawnedActorSettings;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZSpawnActorNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAnimationSpawnedActorSettings* SpawnSettings;
    
public:
    USBZSpawnActorNotifyState();

};


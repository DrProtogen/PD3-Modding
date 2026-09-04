#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZTimedNiagaraEffectNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZTimedNiagaraEffectNotifyState : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
    USBZTimedNiagaraEffectNotifyState();

};


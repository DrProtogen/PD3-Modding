#pragma once
#include "CoreMinimal.h"
#include "SBZAIScorer_CanThrowDamageGrenade.h"
#include "SBZAIScorer_CanThrowGasGrenade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIScorer_CanThrowGasGrenade : public USBZAIScorer_CanThrowDamageGrenade {
    GENERATED_BODY()
public:
    USBZAIScorer_CanThrowGasGrenade();

};


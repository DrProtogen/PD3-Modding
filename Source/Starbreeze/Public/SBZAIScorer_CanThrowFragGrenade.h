#pragma once
#include "CoreMinimal.h"
#include "SBZAIScorer_CanThrowDamageGrenade.h"
#include "SBZAIScorer_CanThrowFragGrenade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIScorer_CanThrowFragGrenade : public USBZAIScorer_CanThrowDamageGrenade {
    GENERATED_BODY()
public:
    USBZAIScorer_CanThrowFragGrenade();

};


#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableGate.h"
#include "SBZTraversalDestructibleInterface.h"
#include "SBZInteractableWindow.generated.h"

UCLASS(Blueprintable)
class ASBZInteractableWindow : public ASBZInteractableGate, public ISBZTraversalDestructibleInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBreakableByPlayerVaulting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnlyBreakableOnLanding;
    
public:
    ASBZInteractableWindow(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


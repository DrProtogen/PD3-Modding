#pragma once
#include "CoreMinimal.h"
#include "SBZGate.h"
#include "SBZTraversalDestructibleInterface.h"
#include "SBZWindow.generated.h"

UCLASS(Blueprintable)
class ASBZWindow : public ASBZGate, public ISBZTraversalDestructibleInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBreakableByPlayerVaulting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnlyBreakableOnLanding;
    
public:
    ASBZWindow(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


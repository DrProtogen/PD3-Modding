#pragma once
#include "CoreMinimal.h"
#include "SBZDynamicInteractionActor.h"
#include "SBZCarriedStaticInteractionActor.generated.h"

class ASBZAICharacter;
class USBZOutlineAsset;
class USBZOutlineComponent;

UCLASS(Blueprintable)
class ASBZCarriedStaticInteractionActor : public ASBZDynamicInteractionActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* DetachOutlineAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* AttachedAIParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSingleUse;
    
public:
    ASBZCarriedStaticInteractionActor(const FObjectInitializer& ObjectInitializer);

};


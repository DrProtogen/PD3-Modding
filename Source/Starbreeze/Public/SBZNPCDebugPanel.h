#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZNPCDebugPanel.generated.h"

class ASBZAICharacter;
class USBZCheatManager;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZNPCDebugPanel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCheatManager* CheatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* CurrentAICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* PreviousAICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZAICharacter*> AICharacterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ASBZAICharacter*> TrackedNPCArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* CachedWorld;
    
public:
    USBZNPCDebugPanel();

};


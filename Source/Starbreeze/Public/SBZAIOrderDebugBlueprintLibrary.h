#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "SBZAIOrderDebugBlueprintLibrary.generated.h"

class UObject;
class USBZAISquadOrder;

UCLASS(Blueprintable)
class USBZAIOrderDebugBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAIOrderDebugBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetOrderToAllSquads(UObject* ContextObject, TSubclassOf<USBZAISquadOrder> AIOrder);
    
};


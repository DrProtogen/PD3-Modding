#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZTraversalDestructibleInterface.generated.h"

class UStaticMeshComponent;

UINTERFACE(Blueprintable)
class USBZTraversalDestructibleInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZTraversalDestructibleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UStaticMeshComponent* GetTraversalDestructibleMeshComponent();
    
};


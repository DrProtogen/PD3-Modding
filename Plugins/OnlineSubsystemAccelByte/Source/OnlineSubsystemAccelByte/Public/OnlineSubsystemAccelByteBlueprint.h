#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineSubsystemAccelByteBlueprint.generated.h"

class UAccelByteInstance;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMACCELBYTE_API UOnlineSubsystemAccelByteBlueprint : public UObject {
    GENERATED_BODY()
public:
    UOnlineSubsystemAccelByteBlueprint();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAccelByteInstance* GetAccelByteInstance(UObject* WorldContextObject);
    
};


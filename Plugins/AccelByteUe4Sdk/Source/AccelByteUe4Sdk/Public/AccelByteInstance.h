#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteInstance.generated.h"

class UABApiClient;
class UAccelByteInstance;
class UServerApiClient;

UCLASS(Blueprintable)
class ACCELBYTEUE4SDK_API UAccelByteInstance : public UObject {
    GENERATED_BODY()
public:
    UAccelByteInstance();

    UFUNCTION(BlueprintCallable)
    UServerApiClient* GetServerApiClient(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    UABApiClient* GetApiClient(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static UAccelByteInstance* CreateAccelByteInstance();
    
};


#pragma once
#include "CoreMinimal.h"
#include "SBZBackendUser.h"
#include "SBZBackendUserImplentation.generated.h"

UCLASS(Blueprintable)
class USBZBackendUserImplentation : public USBZBackendUser {
    GENERATED_BODY()
public:
    USBZBackendUserImplentation();

private:
    UFUNCTION(BlueprintCallable)
    void HandlePlatformUserChanged(int32 OldUserIndex);
    
};


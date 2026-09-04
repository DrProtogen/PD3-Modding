#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZUserActivity.h"
#include "SBZBackendUser.generated.h"

UCLASS(Blueprintable)
class USBZBackendUser : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Country;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString City;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZUserActivity UserActivity;
    
public:
    USBZBackendUser();

};


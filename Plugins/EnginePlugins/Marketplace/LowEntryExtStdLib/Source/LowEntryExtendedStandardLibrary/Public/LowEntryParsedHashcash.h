#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "LowEntryParsedHashcash.generated.h"

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryParsedHashcash : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Valid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Bits;
    
    ULowEntryParsedHashcash();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetResource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetDate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBits();
    
};


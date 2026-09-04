#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZStoreItemCustomUICategory.generated.h"

UCLASS(Blueprintable)
class USBZStoreItemCustomUICategory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccelByteVendorTag;
    
    USBZStoreItemCustomUICategory();

};


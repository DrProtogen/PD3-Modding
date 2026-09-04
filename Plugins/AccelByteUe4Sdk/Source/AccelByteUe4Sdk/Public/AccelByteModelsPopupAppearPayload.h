#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPopupAppearOptPayload.h"
#include "AccelByteModelsPopupAppearPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPopupAppearPayload : public FAccelByteModelsPopupAppearOptPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PopupID;
    
    FAccelByteModelsPopupAppearPayload();
};


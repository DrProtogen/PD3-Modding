#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChatUpdateTopicNotif.h"
#include "ETopicType.h"
#include "AccelByteModelsChatUpdateUserTopicNotif.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChatUpdateUserTopicNotif : public FAccelByteModelsChatUpdateTopicNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETopicType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FAccelByteModelsChatUpdateUserTopicNotif();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryExecutionQueue.generated.h"

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryExecutionQueue : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Next;
    
    ULowEntryExecutionQueue();

};


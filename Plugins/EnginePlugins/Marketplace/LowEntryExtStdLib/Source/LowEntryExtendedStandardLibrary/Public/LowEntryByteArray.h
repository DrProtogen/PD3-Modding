#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryByteArray.generated.h"

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryByteArray : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteArray;
    
    ULowEntryByteArray();

};


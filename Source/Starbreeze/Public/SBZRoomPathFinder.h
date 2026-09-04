#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZFrontierData.h"
#include "SBZRoomPathFinder.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZRoomPathFinder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZFrontierData> Frontier;
    
public:
    USBZRoomPathFinder();

};


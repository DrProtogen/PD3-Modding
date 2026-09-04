#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZPlayerEmoteDatabase.generated.h"

class USBZEmoteCallAsset;

UCLASS(Blueprintable)
class USBZPlayerEmoteDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZEmoteCallAsset*> PlayerEmoteArray;
    
    USBZPlayerEmoteDatabase();

};


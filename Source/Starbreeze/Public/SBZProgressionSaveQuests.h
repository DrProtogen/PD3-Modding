#pragma once
#include "CoreMinimal.h"
#include "SBZProgressionSaveQuestsData.h"
#include "SBZSaveGame.h"
#include "SBZProgressionSaveQuests.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZProgressionSaveQuests : public USBZSaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZProgressionSaveQuestsData ProgressionSaveQuestsData;
    
public:
    USBZProgressionSaveQuests();

};


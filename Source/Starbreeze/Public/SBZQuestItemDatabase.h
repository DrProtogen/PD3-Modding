#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZQuestItemDatabase.generated.h"

class USBZQuestDataAsset;

UCLASS(Blueprintable)
class USBZQuestItemDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZQuestDataAsset*> QuestItemArray;
    
    USBZQuestItemDatabase();

};


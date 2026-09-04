#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidgetWithTutorial.h"
#include "SBZQuestlineMenu.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class USBZQuestlineMenu : public USBZMenuStackScreenWidgetWithTutorial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ActiveQuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* DesiredGoToObject;
    
public:
    USBZQuestlineMenu();

    UFUNCTION(BlueprintCallable)
    bool SetQuestActive(const FName& QuestId);
    
};


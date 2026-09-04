#pragma once
#include "CoreMinimal.h"
#include "SBZActiveHeistModifierEventEntry.h"
#include "SBZActiveHeistModifierEvent.generated.h"

USTRUCT(BlueprintType)
struct FSBZActiveHeistModifierEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZActiveHeistModifierEventEntry> Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZActiveHeistModifierEventEntry> Hard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZActiveHeistModifierEventEntry> VeryHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZActiveHeistModifierEventEntry> Overkill;
    
    STARBREEZE_API FSBZActiveHeistModifierEvent();
};


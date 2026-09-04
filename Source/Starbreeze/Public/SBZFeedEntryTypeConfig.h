#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZFeedEntryTypeConfig.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZFeedEntryTypeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MergeWindow;
    
    FSBZFeedEntryTypeConfig();
};


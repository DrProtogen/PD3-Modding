#pragma once
#include "CoreMinimal.h"
#include "SBZShopCarouselItem.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FSBZShopCarouselItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> Sprite;
    
    STARBREEZE_API FSBZShopCarouselItem();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBZSpriteFunctionLibrary.generated.h"

class UPaperSprite;
class UTexture2D;

UCLASS(Blueprintable)
class USBZSpriteFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZSpriteFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetSpriteSourceUV(const UPaperSprite* Sprite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetSpriteSourceTexture(const UPaperSprite* Sprite);
    
};


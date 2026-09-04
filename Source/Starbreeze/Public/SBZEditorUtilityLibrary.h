#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZEditorUtilityLibrary.generated.h"

class AActor;
class ULevel;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZEditorUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZEditorUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ResetToBlueprintDefault(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void PassActorReferencesToSubLevel(ULevel* Level, const TArray<AActor*>& ActorsReferenceArray, int32 Identifier);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSbzLevelScriptActor(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetEditorInstanceID(const UObject* WorldContextObject);
    
};


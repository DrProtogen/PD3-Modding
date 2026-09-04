#include "SBZEditorUtilityLibrary.h"

USBZEditorUtilityLibrary::USBZEditorUtilityLibrary() {
}

bool USBZEditorUtilityLibrary::ResetToBlueprintDefault(AActor* Actor) {
    return false;
}

void USBZEditorUtilityLibrary::PassActorReferencesToSubLevel(ULevel* Level, const TArray<AActor*>& ActorsReferenceArray, int32 Identifier) {
}

bool USBZEditorUtilityLibrary::IsSbzLevelScriptActor(UWorld* World) {
    return false;
}

int32 USBZEditorUtilityLibrary::GetEditorInstanceID(const UObject* WorldContextObject) {
    return 0;
}



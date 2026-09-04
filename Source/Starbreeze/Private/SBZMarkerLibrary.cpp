#include "SBZMarkerLibrary.h"

USBZMarkerLibrary::USBZMarkerLibrary() {
}

void USBZMarkerLibrary::RemoveReplicatedMarker(UObject* WorldContextObject, int32 ID) {
}

void USBZMarkerLibrary::RemoveLocalMarker(UObject* WorldContextObject, int32 ID) {
}

int32 USBZMarkerLibrary::AddReplicatedMarker(UObject* WorldContextObject, const USBZMarkerDataAsset* MarkerDataAsset, const FVector Location, const ASBZWaypointVolume* WaypointVolume, UObject* DataObject) {
    return 0;
}

int32 USBZMarkerLibrary::AddLocalMarker(UObject* WorldContextObject, const USBZMarkerDataAsset* MarkerDataAsset, const FVector Translation, USceneComponent* Component, FName SocketName, UObject* DataObject) {
    return 0;
}



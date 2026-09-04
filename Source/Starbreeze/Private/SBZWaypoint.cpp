#include "SBZWaypoint.h"
#include "UObject/NoExportTypes.h"

ASBZWaypoint::ASBZWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MarkerAsset = NULL;
    this->WaypointVolume = NULL;
    this->bShowMarkerOnSpawn = false;
}

void ASBZWaypoint::RemoveMarker() {
}

void ASBZWaypoint::AddMarker() {
}



#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZMarkerInfoInterface.h"
#include "SBZWaypoint.generated.h"

class ASBZWaypointVolume;
class USBZMarkerDataAsset;

UCLASS(Blueprintable)
class ASBZWaypoint : public AActor, public ISBZMarkerInfoInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* MarkerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZWaypointVolume* WaypointVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WaypointInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMarkerOnSpawn;
    
public:
    ASBZWaypoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMarker();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddMarker();
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZMusicTrack.h"
#include "SBZCustomTrackDataAsset.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZCustomTrackDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZMusicTrack> MusicConfigList;
    
    USBZCustomTrackDataAsset();

};


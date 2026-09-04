#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZMusicTrack.h"
#include "SBZCustomMenuTrackDataAsset.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZCustomMenuTrackDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZMusicTrack> MenuMusicConfigList;
    
    USBZCustomMenuTrackDataAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZHeistMusicTrack.h"
#include "SBZCustomHeistTrackDataAsset.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZCustomHeistTrackDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHeistMusicTrack> HeistMusicConfigList;
    
    USBZCustomHeistTrackDataAsset();

};


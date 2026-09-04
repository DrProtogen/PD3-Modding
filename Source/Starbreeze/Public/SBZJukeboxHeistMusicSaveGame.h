#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZJukeboxHeistMusicSaveGame.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZJukeboxHeistMusicSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bUseCustomHeistTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> ChosenHeistTrackIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> ChosenHeistIDs;
    
    USBZJukeboxHeistMusicSaveGame();

};


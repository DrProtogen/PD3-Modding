#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZJukeboxSaveGame.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZJukeboxSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bUseCustomTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> ChosenCustomTrackIDs;
    
    USBZJukeboxSaveGame();

};


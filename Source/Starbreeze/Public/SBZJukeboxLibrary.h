#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZJukeboxLibrary.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZJukeboxLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZJukeboxLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetUsingHeistTrack(bool bUseHeistTrack);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUsingCustomTrack(bool bUseCustomTracks);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUsingCustomMenuTrack(bool bUseCustomMenuTracks);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSelectedHeistTrack(const TArray<FName>& SelectedTracks, const TArray<FName>& SelectedHeists);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSelectedCustomTracks(const TArray<FName>& SelectedCustomTracks);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSelectedCustomMenuTracks(const TArray<FName>& SelectedCustomMenuTracks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingCustomTrack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingCustomMenuTrack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingCustomHeistTrack();
    
    UFUNCTION(BlueprintCallable)
    static void GetSelectedHeistTrack(TArray<FName>& OutTracksArray, TArray<FName>& OutHeistsArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetSelectedCustomTracks(TArray<FName>& OutTrackArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetSelectedCustomMenuTracks(TArray<FName>& OutTrackArray);
    
};


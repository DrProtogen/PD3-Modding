#include "SBZJukeboxLibrary.h"

USBZJukeboxLibrary::USBZJukeboxLibrary() {
}

bool USBZJukeboxLibrary::SetUsingHeistTrack(bool bUseHeistTrack) {
    return false;
}

bool USBZJukeboxLibrary::SetUsingCustomTrack(bool bUseCustomTracks) {
    return false;
}

bool USBZJukeboxLibrary::SetUsingCustomMenuTrack(bool bUseCustomMenuTracks) {
    return false;
}

bool USBZJukeboxLibrary::SetSelectedHeistTrack(const TArray<FName>& SelectedTracks, const TArray<FName>& SelectedHeists) {
    return false;
}

bool USBZJukeboxLibrary::SetSelectedCustomTracks(const TArray<FName>& SelectedCustomTracks) {
    return false;
}

bool USBZJukeboxLibrary::SetSelectedCustomMenuTracks(const TArray<FName>& SelectedCustomMenuTracks) {
    return false;
}

bool USBZJukeboxLibrary::IsUsingCustomTrack() {
    return false;
}

bool USBZJukeboxLibrary::IsUsingCustomMenuTrack() {
    return false;
}

bool USBZJukeboxLibrary::IsUsingCustomHeistTrack() {
    return false;
}

void USBZJukeboxLibrary::GetSelectedHeistTrack(TArray<FName>& OutTracksArray, TArray<FName>& OutHeistsArray) {
}

void USBZJukeboxLibrary::GetSelectedCustomTracks(TArray<FName>& OutTrackArray) {
}

void USBZJukeboxLibrary::GetSelectedCustomMenuTracks(TArray<FName>& OutTrackArray) {
}



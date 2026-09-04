#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneAkTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAkAudioEventTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioEventTrack();


    // Fix for true pure virtual functions not being implemented
    // Returning a null template is documented as valid ("A template, or null").
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override { return FMovieSceneEvalTemplatePtr(); }
};


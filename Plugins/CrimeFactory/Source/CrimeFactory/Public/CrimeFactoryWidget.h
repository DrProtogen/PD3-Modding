#pragma once

#include "CrimeFactoryModEntryList.h"
#include "Slate.h"

class SCrimeFactoryWidget : public SCompoundWidget {
public:
    SLATE_BEGIN_ARGS(SCrimeFactoryWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

private:
    TSharedPtr<SCrimeFactoryModEntryList> ModList;
};

#include "SBZEnvQueryTest_Trace.h"
#include "UObject/NoExportTypes.h"

USBZEnvQueryTest_Trace::USBZEnvQueryTest_Trace() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TraceChannel = TraceTypeQuery1;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}



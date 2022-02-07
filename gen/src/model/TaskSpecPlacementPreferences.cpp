/*
 * TaskSpecPlacementPreferences.cpp
 *
 * 
 */

#include "TaskSpecPlacementPreferences.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecPlacementPreferences, Spread)

void TaskSpecPlacementPreferences::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->spread)>(openapi::StringT(OPENAPI_LITERAL(Spread)), this->spread);
}

void TaskSpecPlacementPreferences::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Spread))))
    {
        using V = remove_optional<decltype(this->spread)>::type;
        this->spread = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Spread)));
    }
}


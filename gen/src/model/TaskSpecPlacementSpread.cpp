/*
 * TaskSpecPlacementSpread.cpp
 *
 * 
 */

#include "TaskSpecPlacementSpread.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecPlacementSpread, SpreadDescriptor)

void TaskSpecPlacementSpread::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->spread_descriptor)>(openapi::StringT(OPENAPI_LITERAL(SpreadDescriptor)), this->spread_descriptor);
}

void TaskSpecPlacementSpread::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SpreadDescriptor))))
    {
        using V = remove_optional<decltype(this->spread_descriptor)>::type;
        this->spread_descriptor = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SpreadDescriptor)));
    }
}


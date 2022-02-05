/*
 * Commit.cpp
 *
 * Commit holds the Git-commit (SHA1) that a binary was built from, as reported in the version-string of external tools, such as &#x60;containerd&#x60;, or &#x60;runC&#x60;. 
 */

#include "Commit.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(Commit, ID, Expected)

void Commit::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(ID)), this->id);
    j.AddMember<decltype(this->expected)>(openapi::StringT(OPENAPI_LITERAL(Expected)), this->expected);
}

void Commit::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ID))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Expected))))
    {
        using V = remove_optional<decltype(this->expected)>::type;
        this->expected = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Expected)));
    }
}


/*
 * ObjectVersion.cpp
 *
 * The version number of the object such as node, service, etc. This is needed to avoid conflicting writes. The client must send the version number along with the modified specification when updating these objects.  This approach ensures safe concurrency and determinism in that the change on the object may not be applied if the version number has changed from the last read. In other words, if two update requests specify the same base version, only one of the requests can succeed. As a result, two separate update requests that happen at the same time will not unintentionally overwrite each other. 
 */

#include "ObjectVersion.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ObjectVersion, Index)

void ObjectVersion::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->index)>(openapi::StringT(OPENAPI_LITERAL(Index)), this->index);
}

void ObjectVersion::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Index))))
    {
        using V = remove_optional<decltype(this->index)>::type;
        this->index = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Index)));
    }
}


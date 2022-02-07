/*
 * PluginConfigInterface.cpp
 *
 * The interface between Docker and the plugin
 */

#include "PluginConfigInterface.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(PluginConfigInterface, Types, Socket, ProtocolScheme)

void PluginConfigInterface::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->types)>(openapi::StringT(OPENAPI_LITERAL(Types)), this->types);
    j.AddMember<decltype(this->socket)>(openapi::StringT(OPENAPI_LITERAL(Socket)), this->socket);
    j.AddMember<decltype(this->protocol_scheme)>(openapi::StringT(OPENAPI_LITERAL(ProtocolScheme)), this->protocol_scheme);
}

void PluginConfigInterface::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Types))))
    {
        using V = remove_optional<decltype(this->types)>::type;
        this->types = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Types)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Socket))))
    {
        using V = remove_optional<decltype(this->socket)>::type;
        this->socket = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Socket)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ProtocolScheme))))
    {
        using V = remove_optional<decltype(this->protocol_scheme)>::type;
        this->protocol_scheme = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ProtocolScheme)));
    }
}


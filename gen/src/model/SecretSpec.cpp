/*
 * SecretSpec.cpp
 *
 * 
 */

#include "SecretSpec.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(SecretSpec, Name, Labels, Data, Driver, Templating)

void SecretSpec::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->data)>(openapi::StringT(OPENAPI_LITERAL(Data)), this->data);
    j.AddMember<decltype(this->driver)>(openapi::StringT(OPENAPI_LITERAL(Driver)), this->driver);
    j.AddMember<decltype(this->templating)>(openapi::StringT(OPENAPI_LITERAL(Templating)), this->templating);
}

void SecretSpec::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Data))))
    {
        using V = remove_optional<decltype(this->data)>::type;
        this->data = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Data)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Driver))))
    {
        using V = remove_optional<decltype(this->driver)>::type;
        this->driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Driver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Templating))))
    {
        using V = remove_optional<decltype(this->templating)>::type;
        this->templating = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Templating)));
    }
}


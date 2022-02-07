/*
 * ImageRootFS.cpp
 *
 * 
 */

#include "ImageRootFS.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ImageRootFS, Type, Layers, BaseLayer)

void ImageRootFS::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->type)>(openapi::StringT(OPENAPI_LITERAL(Type)), this->type);
    j.AddMember<decltype(this->layers)>(openapi::StringT(OPENAPI_LITERAL(Layers)), this->layers);
    j.AddMember<decltype(this->base_layer)>(openapi::StringT(OPENAPI_LITERAL(BaseLayer)), this->base_layer);
}

void ImageRootFS::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Type))))
    {
        using V = remove_optional<decltype(this->type)>::type;
        this->type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Type)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Layers))))
    {
        using V = remove_optional<decltype(this->layers)>::type;
        this->layers = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Layers)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BaseLayer))))
    {
        using V = remove_optional<decltype(this->base_layer)>::type;
        this->base_layer = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BaseLayer)));
    }
}


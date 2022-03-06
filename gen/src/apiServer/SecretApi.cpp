#include "SecretApi.h"

using namespace openapi;
// todo include str/json header


// class name SecretApi


void secretCreateParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->body)>::type;
        std::string bodyBody = req.GetBody();
        if (bodyBody.size() != 0){
            this->body = Json::Deserialize<V>(openapi::StringT(bodyBody.c_str()));
        }
    }
}

void secretCreateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void secretDeleteParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
}

void secretDeleteResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void secretInspectParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
}

void secretInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void secretListParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->filters)>::type;
        V filtersRet;
        bool filtersOk = req.GetQueryParam<V>("filters", filtersRet);
        if(filtersOk){
            this->filters = filtersRet;
        }
    }
}

void secretListResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void secretUpdateParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->id)>::type;
        V idRet;
        bool idOk = req.GetPathParam<V>("id", idRet);
        if(idOk){
            this->id = idRet;
        }
    }
    {
        using V = remove_optional<decltype(this->version)>::type;
        V versionRet;
        bool versionOk = req.GetQueryParam<V>("version", versionRet);
        if(versionOk){
            this->version = versionRet;
        }
    }
    {
        using V = remove_optional<decltype(this->body)>::type;
        std::string bodyBody = req.GetBody();
        if (bodyBody.size() != 0){
            this->body = Json::Deserialize<V>(openapi::StringT(bodyBody.c_str()));
        }
    }
}

void secretUpdateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}



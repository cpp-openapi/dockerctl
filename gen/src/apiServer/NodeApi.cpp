#include "NodeApi.h"

using namespace openapi;
// todo include str/json header


// class name NodeApi


void nodeDeleteParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->force)>::type;
        V forceRet;
        bool forceOk = req.GetQueryParam<V>("force", forceRet);
        if(forceOk){
            this->force = forceRet;
        }
    }
}

void nodeDeleteResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void nodeInspectParams::ReadParams(IOASClientRequest & req)
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

void nodeInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void nodeListParams::ReadParams(IOASClientRequest & req)
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

void nodeListResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void nodeUpdateParams::ReadParams(IOASClientRequest & req)
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

void nodeUpdateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}



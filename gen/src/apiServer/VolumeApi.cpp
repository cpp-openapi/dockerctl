#include "VolumeApi.h"

using namespace openapi;
// todo include str/json header


// class name VolumeApi


void volumeCreateParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->volumeConfig)>::type;
        std::string volumeConfigBody = req.GetBody();
        if (volumeConfigBody.size() != 0){
            this->volumeConfig = Json::Deserialize<V>(openapi::StringT(volumeConfigBody.c_str()));
        }
    }
}

void volumeCreateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void volumeDeleteParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetPathParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
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

void volumeDeleteResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void volumeInspectParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetPathParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
}

void volumeInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void volumeListParams::ReadParams(IOASClientRequest & req)
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

void volumeListResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void volumePruneParams::ReadParams(IOASClientRequest & req)
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

void volumePruneResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}



#include "NetworkApi.h"

using namespace openapi;
// todo include str/json header


// class name NetworkApi


void networkConnectParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->container)>::type;
        std::string containerBody = req.GetBody();
        if (containerBody.size() != 0){
            this->container = Json::Deserialize<V>(openapi::StringT(containerBody.c_str()));
        }
    }
}

void networkConnectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void networkCreateParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->networkConfig)>::type;
        std::string networkConfigBody = req.GetBody();
        if (networkConfigBody.size() != 0){
            this->networkConfig = Json::Deserialize<V>(openapi::StringT(networkConfigBody.c_str()));
        }
    }
}

void networkCreateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void networkDeleteParams::ReadParams(IOASClientRequest & req)
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

void networkDeleteResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void networkDisconnectParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->container)>::type;
        std::string containerBody = req.GetBody();
        if (containerBody.size() != 0){
            this->container = Json::Deserialize<V>(openapi::StringT(containerBody.c_str()));
        }
    }
}

void networkDisconnectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void networkInspectParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->verbose)>::type;
        V verboseRet;
        bool verboseOk = req.GetQueryParam<V>("verbose", verboseRet);
        if(verboseOk){
            this->verbose = verboseRet;
        }
    }
    {
        using V = remove_optional<decltype(this->scope)>::type;
        V scopeRet;
        bool scopeOk = req.GetQueryParam<V>("scope", scopeRet);
        if(scopeOk){
            this->scope = scopeRet;
        }
    }
}

void networkInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void networkListParams::ReadParams(IOASClientRequest & req)
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

void networkListResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void networkPruneParams::ReadParams(IOASClientRequest & req)
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

void networkPruneResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}



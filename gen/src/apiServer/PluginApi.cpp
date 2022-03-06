#include "PluginApi.h"

using namespace openapi;
// todo include str/json header


// class name PluginApi


void getPluginPrivilegesParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->remote)>::type;
        V remoteRet;
        bool remoteOk = req.GetQueryParam<V>("remote", remoteRet);
        if(remoteOk){
            this->remote = remoteRet;
        }
    }
}

void getPluginPrivilegesResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void pluginCreateParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetQueryParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
    {
        using V = remove_optional<decltype(this->tarContext)>::type;
        std::string tarContextBody = req.GetBody();
        if (tarContextBody.size() != 0){
            this->tarContext = Json::Deserialize<V>(openapi::StringT(tarContextBody.c_str()));
        }
    }
}

void pluginCreateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void pluginDeleteParams::ReadParams(IOASClientRequest & req)
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

void pluginDeleteResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void pluginDisableParams::ReadParams(IOASClientRequest & req)
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

void pluginDisableResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void pluginEnableParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->timeout)>::type;
        V timeoutRet;
        bool timeoutOk = req.GetQueryParam<V>("timeout", timeoutRet);
        if(timeoutOk){
            this->timeout = timeoutRet;
        }
    }
}

void pluginEnableResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void pluginInspectParams::ReadParams(IOASClientRequest & req)
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

void pluginInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void pluginListParams::ReadParams(IOASClientRequest & req)
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

void pluginListResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void pluginPullParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->remote)>::type;
        V remoteRet;
        bool remoteOk = req.GetQueryParam<V>("remote", remoteRet);
        if(remoteOk){
            this->remote = remoteRet;
        }
    }
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetQueryParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
    {
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
    {
        using V = remove_optional<decltype(this->body)>::type;
        std::string bodyBody = req.GetBody();
        if (bodyBody.size() != 0){
            this->body = Json::Deserialize<V>(openapi::StringT(bodyBody.c_str()));
        }
    }
}

void pluginPullResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void pluginPushParams::ReadParams(IOASClientRequest & req)
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

void pluginPushResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void pluginSetParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->body)>::type;
        std::string bodyBody = req.GetBody();
        if (bodyBody.size() != 0){
            this->body = Json::Deserialize<V>(openapi::StringT(bodyBody.c_str()));
        }
    }
}

void pluginSetResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void pluginUpgradeParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->remote)>::type;
        V remoteRet;
        bool remoteOk = req.GetQueryParam<V>("remote", remoteRet);
        if(remoteOk){
            this->remote = remoteRet;
        }
    }
    {
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
    {
        using V = remove_optional<decltype(this->body)>::type;
        std::string bodyBody = req.GetBody();
        if (bodyBody.size() != 0){
            this->body = Json::Deserialize<V>(openapi::StringT(bodyBody.c_str()));
        }
    }
}

void pluginUpgradeResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}



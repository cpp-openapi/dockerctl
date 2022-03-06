#include "ServiceApi.h"

using namespace openapi;
// todo include str/json header


// class name ServiceApi


void serviceCreateParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->body)>::type;
        std::string bodyBody = req.GetBody();
        if (bodyBody.size() != 0){
            this->body = Json::Deserialize<V>(openapi::StringT(bodyBody.c_str()));
        }
    }
    {
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
}

void serviceCreateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void serviceDeleteParams::ReadParams(IOASClientRequest & req)
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

void serviceDeleteResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void serviceInspectParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->insertDefaults)>::type;
        V insertDefaultsRet;
        bool insertDefaultsOk = req.GetQueryParam<V>("insertDefaults", insertDefaultsRet);
        if(insertDefaultsOk){
            this->insertDefaults = insertDefaultsRet;
        }
    }
}

void serviceInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void serviceListParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->filters)>::type;
        V filtersRet;
        bool filtersOk = req.GetQueryParam<V>("filters", filtersRet);
        if(filtersOk){
            this->filters = filtersRet;
        }
    }
    {
        using V = remove_optional<decltype(this->status)>::type;
        V statusRet;
        bool statusOk = req.GetQueryParam<V>("status", statusRet);
        if(statusOk){
            this->status = statusRet;
        }
    }
}

void serviceListResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void serviceLogsParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->details)>::type;
        V detailsRet;
        bool detailsOk = req.GetQueryParam<V>("details", detailsRet);
        if(detailsOk){
            this->details = detailsRet;
        }
    }
    {
        using V = remove_optional<decltype(this->follow)>::type;
        V followRet;
        bool followOk = req.GetQueryParam<V>("follow", followRet);
        if(followOk){
            this->follow = followRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stdout)>::type;
        V stdoutRet;
        bool stdoutOk = req.GetQueryParam<V>("stdout", stdoutRet);
        if(stdoutOk){
            this->stdout = stdoutRet;
        }
    }
    {
        using V = remove_optional<decltype(this->stderr)>::type;
        V stderrRet;
        bool stderrOk = req.GetQueryParam<V>("stderr", stderrRet);
        if(stderrOk){
            this->stderr = stderrRet;
        }
    }
    {
        using V = remove_optional<decltype(this->since)>::type;
        V sinceRet;
        bool sinceOk = req.GetQueryParam<V>("since", sinceRet);
        if(sinceOk){
            this->since = sinceRet;
        }
    }
    {
        using V = remove_optional<decltype(this->timestamps)>::type;
        V timestampsRet;
        bool timestampsOk = req.GetQueryParam<V>("timestamps", timestampsRet);
        if(timestampsOk){
            this->timestamps = timestampsRet;
        }
    }
    {
        using V = remove_optional<decltype(this->tail)>::type;
        V tailRet;
        bool tailOk = req.GetQueryParam<V>("tail", tailRet);
        if(tailOk){
            this->tail = tailRet;
        }
    }
}

void serviceLogsResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void serviceUpdateParams::ReadParams(IOASClientRequest & req)
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
    {
        using V = remove_optional<decltype(this->registryAuthFrom)>::type;
        V registryAuthFromRet;
        bool registryAuthFromOk = req.GetQueryParam<V>("registryAuthFrom", registryAuthFromRet);
        if(registryAuthFromOk){
            this->registryAuthFrom = registryAuthFromRet;
        }
    }
    {
        using V = remove_optional<decltype(this->rollback)>::type;
        V rollbackRet;
        bool rollbackOk = req.GetQueryParam<V>("rollback", rollbackRet);
        if(rollbackOk){
            this->rollback = rollbackRet;
        }
    }
    {
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
}

void serviceUpdateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}



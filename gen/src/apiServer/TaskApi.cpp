#include "TaskApi.h"

using namespace openapi;
// todo include str/json header


// class name TaskApi


void taskInspectParams::ReadParams(IOASClientRequest & req)
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

void taskInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void taskListParams::ReadParams(IOASClientRequest & req)
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

void taskListResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void taskLogsParams::ReadParams(IOASClientRequest & req)
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

void taskLogsResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}



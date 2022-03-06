#include "SystemApi.h"

using namespace openapi;
// todo include str/json header


// class name SystemApi


void systemAuthParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->authConfig)>::type;
        std::string authConfigBody = req.GetBody();
        if (authConfigBody.size() != 0){
            this->authConfig = Json::Deserialize<V>(openapi::StringT(authConfigBody.c_str()));
        }
    }
}

void systemAuthResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void systemDataUsageParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->type)>::type;
        V typeRet;
        bool typeOk = req.GetQueryParam<V>("type", typeRet);
        if(typeOk){
            this->type = typeRet;
        }
    }
}

void systemDataUsageResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void systemEventsParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->since)>::type;
        V sinceRet;
        bool sinceOk = req.GetQueryParam<V>("since", sinceRet);
        if(sinceOk){
            this->since = sinceRet;
        }
    }
    {
        using V = remove_optional<decltype(this->until)>::type;
        V untilRet;
        bool untilOk = req.GetQueryParam<V>("until", untilRet);
        if(untilOk){
            this->until = untilRet;
        }
    }
    {
        using V = remove_optional<decltype(this->filters)>::type;
        V filtersRet;
        bool filtersOk = req.GetQueryParam<V>("filters", filtersRet);
        if(filtersOk){
            this->filters = filtersRet;
        }
    }
}

void systemEventsResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void systemInfoParams::ReadParams(IOASClientRequest & req)
{
}

void systemInfoResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void systemPingParams::ReadParams(IOASClientRequest & req)
{
}

void systemPingResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void systemPingHeadParams::ReadParams(IOASClientRequest & req)
{
}

void systemPingHeadResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void systemVersionParams::ReadParams(IOASClientRequest & req)
{
}

void systemVersionResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}



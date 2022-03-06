#include "ExecApi.h"

using namespace openapi;
// todo include str/json header


// class name ExecApi


void containerExecParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->execConfig)>::type;
        std::string execConfigBody = req.GetBody();
        if (execConfigBody.size() != 0){
            this->execConfig = Json::Deserialize<V>(openapi::StringT(execConfigBody.c_str()));
        }
    }
}

void containerExecResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void execInspectParams::ReadParams(IOASClientRequest & req)
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

void execInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void execResizeParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->h)>::type;
        V hRet;
        bool hOk = req.GetQueryParam<V>("h", hRet);
        if(hOk){
            this->h = hRet;
        }
    }
    {
        using V = remove_optional<decltype(this->w)>::type;
        V wRet;
        bool wOk = req.GetQueryParam<V>("w", wRet);
        if(wOk){
            this->w = wRet;
        }
    }
}

void execResizeResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void execStartParams::ReadParams(IOASClientRequest & req)
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
        using V = remove_optional<decltype(this->execStartConfig)>::type;
        std::string execStartConfigBody = req.GetBody();
        if (execStartConfigBody.size() != 0){
            this->execStartConfig = Json::Deserialize<V>(openapi::StringT(execStartConfigBody.c_str()));
        }
    }
}

void execStartResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}



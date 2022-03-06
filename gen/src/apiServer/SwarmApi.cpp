#include "SwarmApi.h"

using namespace openapi;
// todo include str/json header


// class name SwarmApi


void swarmInitParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->body)>::type;
        std::string bodyBody = req.GetBody();
        if (bodyBody.size() != 0){
            this->body = Json::Deserialize<V>(openapi::StringT(bodyBody.c_str()));
        }
    }
}

void swarmInitResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void swarmInspectParams::ReadParams(IOASClientRequest & req)
{
}

void swarmInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void swarmJoinParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->body)>::type;
        std::string bodyBody = req.GetBody();
        if (bodyBody.size() != 0){
            this->body = Json::Deserialize<V>(openapi::StringT(bodyBody.c_str()));
        }
    }
}

void swarmJoinResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void swarmLeaveParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->force)>::type;
        V forceRet;
        bool forceOk = req.GetQueryParam<V>("force", forceRet);
        if(forceOk){
            this->force = forceRet;
        }
    }
}

void swarmLeaveResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void swarmUnlockParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->body)>::type;
        std::string bodyBody = req.GetBody();
        if (bodyBody.size() != 0){
            this->body = Json::Deserialize<V>(openapi::StringT(bodyBody.c_str()));
        }
    }
}

void swarmUnlockResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


void swarmUnlockkeyParams::ReadParams(IOASClientRequest & req)
{
}

void swarmUnlockkeyResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


void swarmUpdateParams::ReadParams(IOASClientRequest & req)
{
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
        using V = remove_optional<decltype(this->rotateWorkerToken)>::type;
        V rotateWorkerTokenRet;
        bool rotateWorkerTokenOk = req.GetQueryParam<V>("rotateWorkerToken", rotateWorkerTokenRet);
        if(rotateWorkerTokenOk){
            this->rotateWorkerToken = rotateWorkerTokenRet;
        }
    }
    {
        using V = remove_optional<decltype(this->rotateManagerToken)>::type;
        V rotateManagerTokenRet;
        bool rotateManagerTokenOk = req.GetQueryParam<V>("rotateManagerToken", rotateManagerTokenRet);
        if(rotateManagerTokenOk){
            this->rotateManagerToken = rotateManagerTokenRet;
        }
    }
    {
        using V = remove_optional<decltype(this->rotateManagerUnlockKey)>::type;
        V rotateManagerUnlockKeyRet;
        bool rotateManagerUnlockKeyOk = req.GetQueryParam<V>("rotateManagerUnlockKey", rotateManagerUnlockKeyRet);
        if(rotateManagerUnlockKeyOk){
            this->rotateManagerUnlockKey = rotateManagerUnlockKeyRet;
        }
    }
}

void swarmUpdateResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}



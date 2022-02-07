#include "SwarmApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name SwarmApi


std::string const swarmInitParams::ContentType = "application/jsontext/plain";
std::string const swarmInitParams::PathPattern = "/swarm/init";
std::string const swarmInitParams::Method = "POST";
void swarmInitParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", swarmInitParams::ContentType);
    req->SetMethod(swarmInitParams::Method);
    req->SetPathPattern(swarmInitParams::PathPattern);
    if (this->body.has_value()){
        using V = remove_optional<decltype(this->body)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->body)));
    }
}

void swarmInitResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const swarmInitResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const swarmInspectParams::ContentType = "";
std::string const swarmInspectParams::PathPattern = "/swarm";
std::string const swarmInspectParams::Method = "GET";
void swarmInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", swarmInspectParams::ContentType);
    req->SetMethod(swarmInspectParams::Method);
    req->SetPathPattern(swarmInspectParams::PathPattern);
}

void swarmInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const swarmInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const swarmJoinParams::ContentType = "application/jsontext/plain";
std::string const swarmJoinParams::PathPattern = "/swarm/join";
std::string const swarmJoinParams::Method = "POST";
void swarmJoinParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", swarmJoinParams::ContentType);
    req->SetMethod(swarmJoinParams::Method);
    req->SetPathPattern(swarmJoinParams::PathPattern);
    if (this->body.has_value()){
        using V = remove_optional<decltype(this->body)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->body)));
    }
}

void swarmJoinResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const swarmJoinResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const swarmLeaveParams::ContentType = "";
std::string const swarmLeaveParams::PathPattern = "/swarm/leave";
std::string const swarmLeaveParams::Method = "POST";
void swarmLeaveParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", swarmLeaveParams::ContentType);
    req->SetMethod(swarmLeaveParams::Method);
    req->SetPathPattern(swarmLeaveParams::PathPattern);
    if (this->force.has_value()){
        using V = remove_optional<decltype(this->force)>::type;
        req->SetQueryParam<V>("force", this->force.value());
    }
}

void swarmLeaveResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const swarmLeaveResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const swarmUnlockParams::ContentType = "application/json";
std::string const swarmUnlockParams::PathPattern = "/swarm/unlock";
std::string const swarmUnlockParams::Method = "POST";
void swarmUnlockParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", swarmUnlockParams::ContentType);
    req->SetMethod(swarmUnlockParams::Method);
    req->SetPathPattern(swarmUnlockParams::PathPattern);
    if (this->body.has_value()){
        using V = remove_optional<decltype(this->body)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->body)));
    }
}

void swarmUnlockResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const swarmUnlockResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const swarmUnlockkeyParams::ContentType = "";
std::string const swarmUnlockkeyParams::PathPattern = "/swarm/unlockkey";
std::string const swarmUnlockkeyParams::Method = "GET";
void swarmUnlockkeyParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", swarmUnlockkeyParams::ContentType);
    req->SetMethod(swarmUnlockkeyParams::Method);
    req->SetPathPattern(swarmUnlockkeyParams::PathPattern);
}

void swarmUnlockkeyResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const swarmUnlockkeyResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const swarmUpdateParams::ContentType = "application/jsontext/plain";
std::string const swarmUpdateParams::PathPattern = "/swarm/update";
std::string const swarmUpdateParams::Method = "POST";
void swarmUpdateParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", swarmUpdateParams::ContentType);
    req->SetMethod(swarmUpdateParams::Method);
    req->SetPathPattern(swarmUpdateParams::PathPattern);
    if (this->version.has_value()){
        using V = remove_optional<decltype(this->version)>::type;
        req->SetQueryParam<V>("version", this->version.value());
    }
    if (this->body.has_value()){
        using V = remove_optional<decltype(this->body)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->body)));
    }
    if (this->rotateWorkerToken.has_value()){
        using V = remove_optional<decltype(this->rotateWorkerToken)>::type;
        req->SetQueryParam<V>("rotateWorkerToken", this->rotateWorkerToken.value());
    }
    if (this->rotateManagerToken.has_value()){
        using V = remove_optional<decltype(this->rotateManagerToken)>::type;
        req->SetQueryParam<V>("rotateManagerToken", this->rotateManagerToken.value());
    }
    if (this->rotateManagerUnlockKey.has_value()){
        using V = remove_optional<decltype(this->rotateManagerUnlockKey)>::type;
        req->SetQueryParam<V>("rotateManagerUnlockKey", this->rotateManagerUnlockKey.value());
    }
}

void swarmUpdateResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const swarmUpdateResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void SwarmApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

swarmInitResponse SwarmApiService::swarmInit(swarmInitParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<swarmInitResponse>> p = std::make_shared<std::promise<swarmInitResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            swarmInitResponse result;
            result.ReadResponse(resp);
            p->set_value(result);
        }
        catch([[maybe_unused]] const std::exception &e)
        {
            try
            {
                p->set_exception(std::current_exception());
            } catch(...) {}
        }
    });
    return p->get_future().get();
}

swarmInspectResponse SwarmApiService::swarmInspect(swarmInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<swarmInspectResponse>> p = std::make_shared<std::promise<swarmInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            swarmInspectResponse result;
            result.ReadResponse(resp);
            p->set_value(result);
        }
        catch([[maybe_unused]] const std::exception &e)
        {
            try
            {
                p->set_exception(std::current_exception());
            } catch(...) {}
        }
    });
    return p->get_future().get();
}

swarmJoinResponse SwarmApiService::swarmJoin(swarmJoinParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<swarmJoinResponse>> p = std::make_shared<std::promise<swarmJoinResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            swarmJoinResponse result;
            result.ReadResponse(resp);
            p->set_value(result);
        }
        catch([[maybe_unused]] const std::exception &e)
        {
            try
            {
                p->set_exception(std::current_exception());
            } catch(...) {}
        }
    });
    return p->get_future().get();
}

swarmLeaveResponse SwarmApiService::swarmLeave(swarmLeaveParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<swarmLeaveResponse>> p = std::make_shared<std::promise<swarmLeaveResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            swarmLeaveResponse result;
            result.ReadResponse(resp);
            p->set_value(result);
        }
        catch([[maybe_unused]] const std::exception &e)
        {
            try
            {
                p->set_exception(std::current_exception());
            } catch(...) {}
        }
    });
    return p->get_future().get();
}

swarmUnlockResponse SwarmApiService::swarmUnlock(swarmUnlockParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<swarmUnlockResponse>> p = std::make_shared<std::promise<swarmUnlockResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            swarmUnlockResponse result;
            result.ReadResponse(resp);
            p->set_value(result);
        }
        catch([[maybe_unused]] const std::exception &e)
        {
            try
            {
                p->set_exception(std::current_exception());
            } catch(...) {}
        }
    });
    return p->get_future().get();
}

swarmUnlockkeyResponse SwarmApiService::swarmUnlockkey(swarmUnlockkeyParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<swarmUnlockkeyResponse>> p = std::make_shared<std::promise<swarmUnlockkeyResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            swarmUnlockkeyResponse result;
            result.ReadResponse(resp);
            p->set_value(result);
        }
        catch([[maybe_unused]] const std::exception &e)
        {
            try
            {
                p->set_exception(std::current_exception());
            } catch(...) {}
        }
    });
    return p->get_future().get();
}

swarmUpdateResponse SwarmApiService::swarmUpdate(swarmUpdateParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<swarmUpdateResponse>> p = std::make_shared<std::promise<swarmUpdateResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            swarmUpdateResponse result;
            result.ReadResponse(resp);
            p->set_value(result);
        }
        catch([[maybe_unused]] const std::exception &e)
        {
            try
            {
                p->set_exception(std::current_exception());
            } catch(...) {}
        }
    });
    return p->get_future().get();
}



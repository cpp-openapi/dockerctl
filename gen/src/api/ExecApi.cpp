#include "ExecApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name ExecApi


std::string const containerExecParams::ContentType = "application/json";
std::string const containerExecParams::PathPattern = "/containers/{id}/exec";
std::string const containerExecParams::Method = "POST";
void containerExecParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerExecParams::ContentType);
    req->SetMethod(containerExecParams::Method);
    req->SetPathPattern(containerExecParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->execConfig.has_value()){
        using V = remove_optional<decltype(this->execConfig)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->execConfig)));
    }
}

void containerExecResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerExecResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const execInspectParams::ContentType = "";
std::string const execInspectParams::PathPattern = "/exec/{id}/json";
std::string const execInspectParams::Method = "GET";
void execInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", execInspectParams::ContentType);
    req->SetMethod(execInspectParams::Method);
    req->SetPathPattern(execInspectParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
}

void execInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const execInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const execResizeParams::ContentType = "";
std::string const execResizeParams::PathPattern = "/exec/{id}/resize";
std::string const execResizeParams::Method = "POST";
void execResizeParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", execResizeParams::ContentType);
    req->SetMethod(execResizeParams::Method);
    req->SetPathPattern(execResizeParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->h.has_value()){
        using V = remove_optional<decltype(this->h)>::type;
        req->SetQueryParam<V>("h", this->h.value());
    }
    if (this->w.has_value()){
        using V = remove_optional<decltype(this->w)>::type;
        req->SetQueryParam<V>("w", this->w.value());
    }
}

void execResizeResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const execResizeResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const execStartParams::ContentType = "application/json";
std::string const execStartParams::PathPattern = "/exec/{id}/start";
std::string const execStartParams::Method = "POST";
void execStartParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", execStartParams::ContentType);
    req->SetMethod(execStartParams::Method);
    req->SetPathPattern(execStartParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->execStartConfig.has_value()){
        using V = remove_optional<decltype(this->execStartConfig)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->execStartConfig)));
    }
}

void execStartResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const execStartResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void ExecApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

containerExecResponse ExecApiService::containerExec(containerExecParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerExecResponse>> p = std::make_shared<std::promise<containerExecResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerExecResponse result;
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

execInspectResponse ExecApiService::execInspect(execInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<execInspectResponse>> p = std::make_shared<std::promise<execInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            execInspectResponse result;
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

execResizeResponse ExecApiService::execResize(execResizeParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<execResizeResponse>> p = std::make_shared<std::promise<execResizeResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            execResizeResponse result;
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

execStartResponse ExecApiService::execStart(execStartParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<execStartResponse>> p = std::make_shared<std::promise<execStartResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            execStartResponse result;
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



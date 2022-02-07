#include "NodeApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name NodeApi


std::string const nodeDeleteParams::ContentType = "";
std::string const nodeDeleteParams::PathPattern = "/nodes/{id}";
std::string const nodeDeleteParams::Method = "DELETE";
void nodeDeleteParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", nodeDeleteParams::ContentType);
    req->SetMethod(nodeDeleteParams::Method);
    req->SetPathPattern(nodeDeleteParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->force.has_value()){
        using V = remove_optional<decltype(this->force)>::type;
        req->SetQueryParam<V>("force", this->force.value());
    }
}

void nodeDeleteResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const nodeDeleteResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const nodeInspectParams::ContentType = "";
std::string const nodeInspectParams::PathPattern = "/nodes/{id}";
std::string const nodeInspectParams::Method = "GET";
void nodeInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", nodeInspectParams::ContentType);
    req->SetMethod(nodeInspectParams::Method);
    req->SetPathPattern(nodeInspectParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
}

void nodeInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const nodeInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const nodeListParams::ContentType = "";
std::string const nodeListParams::PathPattern = "/nodes";
std::string const nodeListParams::Method = "GET";
void nodeListParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", nodeListParams::ContentType);
    req->SetMethod(nodeListParams::Method);
    req->SetPathPattern(nodeListParams::PathPattern);
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void nodeListResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const nodeListResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const nodeUpdateParams::ContentType = "application/jsontext/plain";
std::string const nodeUpdateParams::PathPattern = "/nodes/{id}/update";
std::string const nodeUpdateParams::Method = "POST";
void nodeUpdateParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", nodeUpdateParams::ContentType);
    req->SetMethod(nodeUpdateParams::Method);
    req->SetPathPattern(nodeUpdateParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->version.has_value()){
        using V = remove_optional<decltype(this->version)>::type;
        req->SetQueryParam<V>("version", this->version.value());
    }
    if (this->body.has_value()){
        using V = remove_optional<decltype(this->body)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->body)));
    }
}

void nodeUpdateResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const nodeUpdateResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void NodeApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

nodeDeleteResponse NodeApiService::nodeDelete(nodeDeleteParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<nodeDeleteResponse>> p = std::make_shared<std::promise<nodeDeleteResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            nodeDeleteResponse result;
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

nodeInspectResponse NodeApiService::nodeInspect(nodeInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<nodeInspectResponse>> p = std::make_shared<std::promise<nodeInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            nodeInspectResponse result;
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

nodeListResponse NodeApiService::nodeList(nodeListParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<nodeListResponse>> p = std::make_shared<std::promise<nodeListResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            nodeListResponse result;
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

nodeUpdateResponse NodeApiService::nodeUpdate(nodeUpdateParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<nodeUpdateResponse>> p = std::make_shared<std::promise<nodeUpdateResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            nodeUpdateResponse result;
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



#include "NetworkApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name NetworkApi


std::string const networkConnectParams::ContentType = "application/json";
std::string const networkConnectParams::PathPattern = "/networks/{id}/connect";
std::string const networkConnectParams::Method = "POST";
void networkConnectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", networkConnectParams::ContentType);
    req->SetMethod(networkConnectParams::Method);
    req->SetPathPattern(networkConnectParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->container.has_value()){
        using V = remove_optional<decltype(this->container)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->container)));
    }
}

void networkConnectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const networkConnectResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const networkCreateParams::ContentType = "application/json";
std::string const networkCreateParams::PathPattern = "/networks/create";
std::string const networkCreateParams::Method = "POST";
void networkCreateParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", networkCreateParams::ContentType);
    req->SetMethod(networkCreateParams::Method);
    req->SetPathPattern(networkCreateParams::PathPattern);
    if (this->networkConfig.has_value()){
        using V = remove_optional<decltype(this->networkConfig)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->networkConfig)));
    }
}

void networkCreateResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const networkCreateResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const networkDeleteParams::ContentType = "";
std::string const networkDeleteParams::PathPattern = "/networks/{id}";
std::string const networkDeleteParams::Method = "DELETE";
void networkDeleteParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", networkDeleteParams::ContentType);
    req->SetMethod(networkDeleteParams::Method);
    req->SetPathPattern(networkDeleteParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
}

void networkDeleteResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const networkDeleteResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const networkDisconnectParams::ContentType = "application/json";
std::string const networkDisconnectParams::PathPattern = "/networks/{id}/disconnect";
std::string const networkDisconnectParams::Method = "POST";
void networkDisconnectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", networkDisconnectParams::ContentType);
    req->SetMethod(networkDisconnectParams::Method);
    req->SetPathPattern(networkDisconnectParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->container.has_value()){
        using V = remove_optional<decltype(this->container)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->container)));
    }
}

void networkDisconnectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const networkDisconnectResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const networkInspectParams::ContentType = "";
std::string const networkInspectParams::PathPattern = "/networks/{id}";
std::string const networkInspectParams::Method = "GET";
void networkInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", networkInspectParams::ContentType);
    req->SetMethod(networkInspectParams::Method);
    req->SetPathPattern(networkInspectParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->verbose.has_value()){
        using V = remove_optional<decltype(this->verbose)>::type;
        req->SetQueryParam<V>("verbose", this->verbose.value());
    }
    if (this->scope.has_value()){
        using V = remove_optional<decltype(this->scope)>::type;
        req->SetQueryParam<V>("scope", this->scope.value());
    }
}

void networkInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const networkInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const networkListParams::ContentType = "";
std::string const networkListParams::PathPattern = "/networks";
std::string const networkListParams::Method = "GET";
void networkListParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", networkListParams::ContentType);
    req->SetMethod(networkListParams::Method);
    req->SetPathPattern(networkListParams::PathPattern);
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void networkListResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const networkListResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const networkPruneParams::ContentType = "";
std::string const networkPruneParams::PathPattern = "/networks/prune";
std::string const networkPruneParams::Method = "POST";
void networkPruneParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", networkPruneParams::ContentType);
    req->SetMethod(networkPruneParams::Method);
    req->SetPathPattern(networkPruneParams::PathPattern);
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void networkPruneResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const networkPruneResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void NetworkApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

networkConnectResponse NetworkApiService::networkConnect(networkConnectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<networkConnectResponse>> p = std::make_shared<std::promise<networkConnectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            networkConnectResponse result;
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

networkCreateResponse NetworkApiService::networkCreate(networkCreateParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<networkCreateResponse>> p = std::make_shared<std::promise<networkCreateResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            networkCreateResponse result;
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

networkDeleteResponse NetworkApiService::networkDelete(networkDeleteParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<networkDeleteResponse>> p = std::make_shared<std::promise<networkDeleteResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            networkDeleteResponse result;
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

networkDisconnectResponse NetworkApiService::networkDisconnect(networkDisconnectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<networkDisconnectResponse>> p = std::make_shared<std::promise<networkDisconnectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            networkDisconnectResponse result;
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

networkInspectResponse NetworkApiService::networkInspect(networkInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<networkInspectResponse>> p = std::make_shared<std::promise<networkInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            networkInspectResponse result;
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

networkListResponse NetworkApiService::networkList(networkListParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<networkListResponse>> p = std::make_shared<std::promise<networkListResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            networkListResponse result;
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

networkPruneResponse NetworkApiService::networkPrune(networkPruneParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<networkPruneResponse>> p = std::make_shared<std::promise<networkPruneResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            networkPruneResponse result;
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



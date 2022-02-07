#include "ServiceApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name ServiceApi


std::string const serviceCreateParams::ContentType = "application/json";
std::string const serviceCreateParams::PathPattern = "/services/create";
std::string const serviceCreateParams::Method = "POST";
void serviceCreateParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", serviceCreateParams::ContentType);
    req->SetMethod(serviceCreateParams::Method);
    req->SetPathPattern(serviceCreateParams::PathPattern);
    if (this->body.has_value()){
        using V = remove_optional<decltype(this->body)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->body)));
    }
    if (this->xRegistryAuth.has_value()){
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
}

void serviceCreateResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const serviceCreateResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const serviceDeleteParams::ContentType = "";
std::string const serviceDeleteParams::PathPattern = "/services/{id}";
std::string const serviceDeleteParams::Method = "DELETE";
void serviceDeleteParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", serviceDeleteParams::ContentType);
    req->SetMethod(serviceDeleteParams::Method);
    req->SetPathPattern(serviceDeleteParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
}

void serviceDeleteResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const serviceDeleteResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const serviceInspectParams::ContentType = "";
std::string const serviceInspectParams::PathPattern = "/services/{id}";
std::string const serviceInspectParams::Method = "GET";
void serviceInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", serviceInspectParams::ContentType);
    req->SetMethod(serviceInspectParams::Method);
    req->SetPathPattern(serviceInspectParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->insertDefaults.has_value()){
        using V = remove_optional<decltype(this->insertDefaults)>::type;
        req->SetQueryParam<V>("insertDefaults", this->insertDefaults.value());
    }
}

void serviceInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const serviceInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const serviceListParams::ContentType = "";
std::string const serviceListParams::PathPattern = "/services";
std::string const serviceListParams::Method = "GET";
void serviceListParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", serviceListParams::ContentType);
    req->SetMethod(serviceListParams::Method);
    req->SetPathPattern(serviceListParams::PathPattern);
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
    if (this->status.has_value()){
        using V = remove_optional<decltype(this->status)>::type;
        req->SetQueryParam<V>("status", this->status.value());
    }
}

void serviceListResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const serviceListResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const serviceLogsParams::ContentType = "";
std::string const serviceLogsParams::PathPattern = "/services/{id}/logs";
std::string const serviceLogsParams::Method = "GET";
void serviceLogsParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", serviceLogsParams::ContentType);
    req->SetMethod(serviceLogsParams::Method);
    req->SetPathPattern(serviceLogsParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->details.has_value()){
        using V = remove_optional<decltype(this->details)>::type;
        req->SetQueryParam<V>("details", this->details.value());
    }
    if (this->follow.has_value()){
        using V = remove_optional<decltype(this->follow)>::type;
        req->SetQueryParam<V>("follow", this->follow.value());
    }
    if (this->stdout.has_value()){
        using V = remove_optional<decltype(this->stdout)>::type;
        req->SetQueryParam<V>("stdout", this->stdout.value());
    }
    if (this->stderr.has_value()){
        using V = remove_optional<decltype(this->stderr)>::type;
        req->SetQueryParam<V>("stderr", this->stderr.value());
    }
    if (this->since.has_value()){
        using V = remove_optional<decltype(this->since)>::type;
        req->SetQueryParam<V>("since", this->since.value());
    }
    if (this->timestamps.has_value()){
        using V = remove_optional<decltype(this->timestamps)>::type;
        req->SetQueryParam<V>("timestamps", this->timestamps.value());
    }
    if (this->tail.has_value()){
        using V = remove_optional<decltype(this->tail)>::type;
        req->SetQueryParam<V>("tail", this->tail.value());
    }
}

void serviceLogsResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const serviceLogsResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const serviceUpdateParams::ContentType = "application/json";
std::string const serviceUpdateParams::PathPattern = "/services/{id}/update";
std::string const serviceUpdateParams::Method = "POST";
void serviceUpdateParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", serviceUpdateParams::ContentType);
    req->SetMethod(serviceUpdateParams::Method);
    req->SetPathPattern(serviceUpdateParams::PathPattern);
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
    if (this->registryAuthFrom.has_value()){
        using V = remove_optional<decltype(this->registryAuthFrom)>::type;
        req->SetQueryParam<V>("registryAuthFrom", this->registryAuthFrom.value());
    }
    if (this->rollback.has_value()){
        using V = remove_optional<decltype(this->rollback)>::type;
        req->SetQueryParam<V>("rollback", this->rollback.value());
    }
    if (this->xRegistryAuth.has_value()){
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
}

void serviceUpdateResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const serviceUpdateResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void ServiceApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

serviceCreateResponse ServiceApiService::serviceCreate(serviceCreateParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<serviceCreateResponse>> p = std::make_shared<std::promise<serviceCreateResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            serviceCreateResponse result;
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

serviceDeleteResponse ServiceApiService::serviceDelete(serviceDeleteParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<serviceDeleteResponse>> p = std::make_shared<std::promise<serviceDeleteResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            serviceDeleteResponse result;
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

serviceInspectResponse ServiceApiService::serviceInspect(serviceInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<serviceInspectResponse>> p = std::make_shared<std::promise<serviceInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            serviceInspectResponse result;
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

serviceListResponse ServiceApiService::serviceList(serviceListParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<serviceListResponse>> p = std::make_shared<std::promise<serviceListResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            serviceListResponse result;
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

serviceLogsResponse ServiceApiService::serviceLogs(serviceLogsParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<serviceLogsResponse>> p = std::make_shared<std::promise<serviceLogsResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            serviceLogsResponse result;
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

serviceUpdateResponse ServiceApiService::serviceUpdate(serviceUpdateParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<serviceUpdateResponse>> p = std::make_shared<std::promise<serviceUpdateResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            serviceUpdateResponse result;
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



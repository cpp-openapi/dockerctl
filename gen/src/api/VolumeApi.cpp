#include "VolumeApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name VolumeApi


std::string const volumeCreateParams::ContentType = "application/json";
std::string const volumeCreateParams::PathPattern = "/volumes/create";
std::string const volumeCreateParams::Method = "POST";
void volumeCreateParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", volumeCreateParams::ContentType);
    req->SetMethod(volumeCreateParams::Method);
    req->SetPathPattern(volumeCreateParams::PathPattern);
    if (this->volumeConfig.has_value()){
        using V = remove_optional<decltype(this->volumeConfig)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->volumeConfig)));
    }
}

void volumeCreateResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const volumeCreateResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const volumeDeleteParams::ContentType = "";
std::string const volumeDeleteParams::PathPattern = "/volumes/{name}";
std::string const volumeDeleteParams::Method = "DELETE";
void volumeDeleteParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", volumeDeleteParams::ContentType);
    req->SetMethod(volumeDeleteParams::Method);
    req->SetPathPattern(volumeDeleteParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
    if (this->force.has_value()){
        using V = remove_optional<decltype(this->force)>::type;
        req->SetQueryParam<V>("force", this->force.value());
    }
}

void volumeDeleteResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const volumeDeleteResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const volumeInspectParams::ContentType = "";
std::string const volumeInspectParams::PathPattern = "/volumes/{name}";
std::string const volumeInspectParams::Method = "GET";
void volumeInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", volumeInspectParams::ContentType);
    req->SetMethod(volumeInspectParams::Method);
    req->SetPathPattern(volumeInspectParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
}

void volumeInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const volumeInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const volumeListParams::ContentType = "";
std::string const volumeListParams::PathPattern = "/volumes";
std::string const volumeListParams::Method = "GET";
void volumeListParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", volumeListParams::ContentType);
    req->SetMethod(volumeListParams::Method);
    req->SetPathPattern(volumeListParams::PathPattern);
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void volumeListResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const volumeListResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const volumePruneParams::ContentType = "";
std::string const volumePruneParams::PathPattern = "/volumes/prune";
std::string const volumePruneParams::Method = "POST";
void volumePruneParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", volumePruneParams::ContentType);
    req->SetMethod(volumePruneParams::Method);
    req->SetPathPattern(volumePruneParams::PathPattern);
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void volumePruneResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const volumePruneResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void VolumeApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

volumeCreateResponse VolumeApiService::volumeCreate(volumeCreateParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<volumeCreateResponse>> p = std::make_shared<std::promise<volumeCreateResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            volumeCreateResponse result;
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

volumeDeleteResponse VolumeApiService::volumeDelete(volumeDeleteParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<volumeDeleteResponse>> p = std::make_shared<std::promise<volumeDeleteResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            volumeDeleteResponse result;
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

volumeInspectResponse VolumeApiService::volumeInspect(volumeInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<volumeInspectResponse>> p = std::make_shared<std::promise<volumeInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            volumeInspectResponse result;
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

volumeListResponse VolumeApiService::volumeList(volumeListParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<volumeListResponse>> p = std::make_shared<std::promise<volumeListResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            volumeListResponse result;
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

volumePruneResponse VolumeApiService::volumePrune(volumePruneParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<volumePruneResponse>> p = std::make_shared<std::promise<volumePruneResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            volumePruneResponse result;
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



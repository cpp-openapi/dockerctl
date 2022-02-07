#include "PluginApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name PluginApi


std::string const getPluginPrivilegesParams::ContentType = "";
std::string const getPluginPrivilegesParams::PathPattern = "/plugins/privileges";
std::string const getPluginPrivilegesParams::Method = "GET";
void getPluginPrivilegesParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", getPluginPrivilegesParams::ContentType);
    req->SetMethod(getPluginPrivilegesParams::Method);
    req->SetPathPattern(getPluginPrivilegesParams::PathPattern);
    if (this->remote.has_value()){
        using V = remove_optional<decltype(this->remote)>::type;
        req->SetQueryParam<V>("remote", this->remote.value());
    }
}

void getPluginPrivilegesResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const getPluginPrivilegesResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const pluginCreateParams::ContentType = "application/x-tar";
std::string const pluginCreateParams::PathPattern = "/plugins/create";
std::string const pluginCreateParams::Method = "POST";
void pluginCreateParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", pluginCreateParams::ContentType);
    req->SetMethod(pluginCreateParams::Method);
    req->SetPathPattern(pluginCreateParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetQueryParam<V>("name", this->name.value());
    }
    if (this->tarContext.has_value()){
        using V = remove_optional<decltype(this->tarContext)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->tarContext)));
    }
}

void pluginCreateResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const pluginCreateResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const pluginDeleteParams::ContentType = "";
std::string const pluginDeleteParams::PathPattern = "/plugins/{name}";
std::string const pluginDeleteParams::Method = "DELETE";
void pluginDeleteParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", pluginDeleteParams::ContentType);
    req->SetMethod(pluginDeleteParams::Method);
    req->SetPathPattern(pluginDeleteParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
    if (this->force.has_value()){
        using V = remove_optional<decltype(this->force)>::type;
        req->SetQueryParam<V>("force", this->force.value());
    }
}

void pluginDeleteResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const pluginDeleteResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const pluginDisableParams::ContentType = "";
std::string const pluginDisableParams::PathPattern = "/plugins/{name}/disable";
std::string const pluginDisableParams::Method = "POST";
void pluginDisableParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", pluginDisableParams::ContentType);
    req->SetMethod(pluginDisableParams::Method);
    req->SetPathPattern(pluginDisableParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
}

void pluginDisableResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const pluginDisableResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const pluginEnableParams::ContentType = "";
std::string const pluginEnableParams::PathPattern = "/plugins/{name}/enable";
std::string const pluginEnableParams::Method = "POST";
void pluginEnableParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", pluginEnableParams::ContentType);
    req->SetMethod(pluginEnableParams::Method);
    req->SetPathPattern(pluginEnableParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
    if (this->timeout.has_value()){
        using V = remove_optional<decltype(this->timeout)>::type;
        req->SetQueryParam<V>("timeout", this->timeout.value());
    }
}

void pluginEnableResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const pluginEnableResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const pluginInspectParams::ContentType = "";
std::string const pluginInspectParams::PathPattern = "/plugins/{name}/json";
std::string const pluginInspectParams::Method = "GET";
void pluginInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", pluginInspectParams::ContentType);
    req->SetMethod(pluginInspectParams::Method);
    req->SetPathPattern(pluginInspectParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
}

void pluginInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const pluginInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const pluginListParams::ContentType = "";
std::string const pluginListParams::PathPattern = "/plugins";
std::string const pluginListParams::Method = "GET";
void pluginListParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", pluginListParams::ContentType);
    req->SetMethod(pluginListParams::Method);
    req->SetPathPattern(pluginListParams::PathPattern);
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void pluginListResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const pluginListResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const pluginPullParams::ContentType = "application/jsontext/plain";
std::string const pluginPullParams::PathPattern = "/plugins/pull";
std::string const pluginPullParams::Method = "POST";
void pluginPullParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", pluginPullParams::ContentType);
    req->SetMethod(pluginPullParams::Method);
    req->SetPathPattern(pluginPullParams::PathPattern);
    if (this->remote.has_value()){
        using V = remove_optional<decltype(this->remote)>::type;
        req->SetQueryParam<V>("remote", this->remote.value());
    }
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetQueryParam<V>("name", this->name.value());
    }
    if (this->xRegistryAuth.has_value()){
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
    if (this->body.has_value()){
        using V = remove_optional<decltype(this->body)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->body)));
    }
}

void pluginPullResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const pluginPullResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const pluginPushParams::ContentType = "";
std::string const pluginPushParams::PathPattern = "/plugins/{name}/push";
std::string const pluginPushParams::Method = "POST";
void pluginPushParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", pluginPushParams::ContentType);
    req->SetMethod(pluginPushParams::Method);
    req->SetPathPattern(pluginPushParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
}

void pluginPushResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const pluginPushResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const pluginSetParams::ContentType = "application/json";
std::string const pluginSetParams::PathPattern = "/plugins/{name}/set";
std::string const pluginSetParams::Method = "POST";
void pluginSetParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", pluginSetParams::ContentType);
    req->SetMethod(pluginSetParams::Method);
    req->SetPathPattern(pluginSetParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
    if (this->body.has_value()){
        using V = remove_optional<decltype(this->body)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->body)));
    }
}

void pluginSetResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const pluginSetResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const pluginUpgradeParams::ContentType = "application/jsontext/plain";
std::string const pluginUpgradeParams::PathPattern = "/plugins/{name}/upgrade";
std::string const pluginUpgradeParams::Method = "POST";
void pluginUpgradeParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", pluginUpgradeParams::ContentType);
    req->SetMethod(pluginUpgradeParams::Method);
    req->SetPathPattern(pluginUpgradeParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
    if (this->remote.has_value()){
        using V = remove_optional<decltype(this->remote)>::type;
        req->SetQueryParam<V>("remote", this->remote.value());
    }
    if (this->xRegistryAuth.has_value()){
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
    if (this->body.has_value()){
        using V = remove_optional<decltype(this->body)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->body)));
    }
}

void pluginUpgradeResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const pluginUpgradeResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void PluginApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

getPluginPrivilegesResponse PluginApiService::getPluginPrivileges(getPluginPrivilegesParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<getPluginPrivilegesResponse>> p = std::make_shared<std::promise<getPluginPrivilegesResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            getPluginPrivilegesResponse result;
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

pluginCreateResponse PluginApiService::pluginCreate(pluginCreateParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<pluginCreateResponse>> p = std::make_shared<std::promise<pluginCreateResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            pluginCreateResponse result;
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

pluginDeleteResponse PluginApiService::pluginDelete(pluginDeleteParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<pluginDeleteResponse>> p = std::make_shared<std::promise<pluginDeleteResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            pluginDeleteResponse result;
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

pluginDisableResponse PluginApiService::pluginDisable(pluginDisableParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<pluginDisableResponse>> p = std::make_shared<std::promise<pluginDisableResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            pluginDisableResponse result;
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

pluginEnableResponse PluginApiService::pluginEnable(pluginEnableParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<pluginEnableResponse>> p = std::make_shared<std::promise<pluginEnableResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            pluginEnableResponse result;
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

pluginInspectResponse PluginApiService::pluginInspect(pluginInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<pluginInspectResponse>> p = std::make_shared<std::promise<pluginInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            pluginInspectResponse result;
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

pluginListResponse PluginApiService::pluginList(pluginListParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<pluginListResponse>> p = std::make_shared<std::promise<pluginListResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            pluginListResponse result;
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

pluginPullResponse PluginApiService::pluginPull(pluginPullParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<pluginPullResponse>> p = std::make_shared<std::promise<pluginPullResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            pluginPullResponse result;
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

pluginPushResponse PluginApiService::pluginPush(pluginPushParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<pluginPushResponse>> p = std::make_shared<std::promise<pluginPushResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            pluginPushResponse result;
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

pluginSetResponse PluginApiService::pluginSet(pluginSetParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<pluginSetResponse>> p = std::make_shared<std::promise<pluginSetResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            pluginSetResponse result;
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

pluginUpgradeResponse PluginApiService::pluginUpgrade(pluginUpgradeParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<pluginUpgradeResponse>> p = std::make_shared<std::promise<pluginUpgradeResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            pluginUpgradeResponse result;
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



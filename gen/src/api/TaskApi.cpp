#include "TaskApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name TaskApi


std::string const taskInspectParams::ContentType = "";
std::string const taskInspectParams::PathPattern = "/tasks/{id}";
std::string const taskInspectParams::Method = "GET";
void taskInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", taskInspectParams::ContentType);
    req->SetMethod(taskInspectParams::Method);
    req->SetPathPattern(taskInspectParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
}

void taskInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const taskInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const taskListParams::ContentType = "";
std::string const taskListParams::PathPattern = "/tasks";
std::string const taskListParams::Method = "GET";
void taskListParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", taskListParams::ContentType);
    req->SetMethod(taskListParams::Method);
    req->SetPathPattern(taskListParams::PathPattern);
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void taskListResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const taskListResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const taskLogsParams::ContentType = "";
std::string const taskLogsParams::PathPattern = "/tasks/{id}/logs";
std::string const taskLogsParams::Method = "GET";
void taskLogsParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", taskLogsParams::ContentType);
    req->SetMethod(taskLogsParams::Method);
    req->SetPathPattern(taskLogsParams::PathPattern);
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

void taskLogsResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const taskLogsResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void TaskApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

taskInspectResponse TaskApiService::taskInspect(taskInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<taskInspectResponse>> p = std::make_shared<std::promise<taskInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            taskInspectResponse result;
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

taskListResponse TaskApiService::taskList(taskListParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<taskListResponse>> p = std::make_shared<std::promise<taskListResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            taskListResponse result;
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

taskLogsResponse TaskApiService::taskLogs(taskLogsParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<taskLogsResponse>> p = std::make_shared<std::promise<taskLogsResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            taskLogsResponse result;
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



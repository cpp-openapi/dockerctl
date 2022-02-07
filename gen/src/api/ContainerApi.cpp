#include "ContainerApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name ContainerApi


std::string const containerArchiveParams::ContentType = "";
std::string const containerArchiveParams::PathPattern = "/containers/{id}/archive";
std::string const containerArchiveParams::Method = "GET";
void containerArchiveParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerArchiveParams::ContentType);
    req->SetMethod(containerArchiveParams::Method);
    req->SetPathPattern(containerArchiveParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->path.has_value()){
        using V = remove_optional<decltype(this->path)>::type;
        req->SetQueryParam<V>("path", this->path.value());
    }
}

void containerArchiveResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerArchiveResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerArchiveInfoParams::ContentType = "";
std::string const containerArchiveInfoParams::PathPattern = "/containers/{id}/archive";
std::string const containerArchiveInfoParams::Method = "HEAD";
void containerArchiveInfoParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerArchiveInfoParams::ContentType);
    req->SetMethod(containerArchiveInfoParams::Method);
    req->SetPathPattern(containerArchiveInfoParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->path.has_value()){
        using V = remove_optional<decltype(this->path)>::type;
        req->SetQueryParam<V>("path", this->path.value());
    }
}

void containerArchiveInfoResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerArchiveInfoResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerAttachParams::ContentType = "";
std::string const containerAttachParams::PathPattern = "/containers/{id}/attach";
std::string const containerAttachParams::Method = "POST";
void containerAttachParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerAttachParams::ContentType);
    req->SetMethod(containerAttachParams::Method);
    req->SetPathPattern(containerAttachParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->detachKeys.has_value()){
        using V = remove_optional<decltype(this->detachKeys)>::type;
        req->SetQueryParam<V>("detachKeys", this->detachKeys.value());
    }
    if (this->logs.has_value()){
        using V = remove_optional<decltype(this->logs)>::type;
        req->SetQueryParam<V>("logs", this->logs.value());
    }
    if (this->stream.has_value()){
        using V = remove_optional<decltype(this->stream)>::type;
        req->SetQueryParam<V>("stream", this->stream.value());
    }
    if (this->stdin.has_value()){
        using V = remove_optional<decltype(this->stdin)>::type;
        req->SetQueryParam<V>("stdin", this->stdin.value());
    }
    if (this->stdout.has_value()){
        using V = remove_optional<decltype(this->stdout)>::type;
        req->SetQueryParam<V>("stdout", this->stdout.value());
    }
    if (this->stderr.has_value()){
        using V = remove_optional<decltype(this->stderr)>::type;
        req->SetQueryParam<V>("stderr", this->stderr.value());
    }
}

void containerAttachResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerAttachResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerAttachWebsocketParams::ContentType = "";
std::string const containerAttachWebsocketParams::PathPattern = "/containers/{id}/attach/ws";
std::string const containerAttachWebsocketParams::Method = "GET";
void containerAttachWebsocketParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerAttachWebsocketParams::ContentType);
    req->SetMethod(containerAttachWebsocketParams::Method);
    req->SetPathPattern(containerAttachWebsocketParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->detachKeys.has_value()){
        using V = remove_optional<decltype(this->detachKeys)>::type;
        req->SetQueryParam<V>("detachKeys", this->detachKeys.value());
    }
    if (this->logs.has_value()){
        using V = remove_optional<decltype(this->logs)>::type;
        req->SetQueryParam<V>("logs", this->logs.value());
    }
    if (this->stream.has_value()){
        using V = remove_optional<decltype(this->stream)>::type;
        req->SetQueryParam<V>("stream", this->stream.value());
    }
    if (this->stdin.has_value()){
        using V = remove_optional<decltype(this->stdin)>::type;
        req->SetQueryParam<V>("stdin", this->stdin.value());
    }
    if (this->stdout.has_value()){
        using V = remove_optional<decltype(this->stdout)>::type;
        req->SetQueryParam<V>("stdout", this->stdout.value());
    }
    if (this->stderr.has_value()){
        using V = remove_optional<decltype(this->stderr)>::type;
        req->SetQueryParam<V>("stderr", this->stderr.value());
    }
}

void containerAttachWebsocketResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerAttachWebsocketResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerChangesParams::ContentType = "";
std::string const containerChangesParams::PathPattern = "/containers/{id}/changes";
std::string const containerChangesParams::Method = "GET";
void containerChangesParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerChangesParams::ContentType);
    req->SetMethod(containerChangesParams::Method);
    req->SetPathPattern(containerChangesParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
}

void containerChangesResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerChangesResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerCreateParams::ContentType = "application/jsonapplication/octet-stream";
std::string const containerCreateParams::PathPattern = "/containers/create";
std::string const containerCreateParams::Method = "POST";
void containerCreateParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerCreateParams::ContentType);
    req->SetMethod(containerCreateParams::Method);
    req->SetPathPattern(containerCreateParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetQueryParam<V>("name", this->name.value());
    }
    if (this->body.has_value()){
        using V = remove_optional<decltype(this->body)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->body)));
    }
}

void containerCreateResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerCreateResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerDeleteParams::ContentType = "";
std::string const containerDeleteParams::PathPattern = "/containers/{id}";
std::string const containerDeleteParams::Method = "DELETE";
void containerDeleteParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerDeleteParams::ContentType);
    req->SetMethod(containerDeleteParams::Method);
    req->SetPathPattern(containerDeleteParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->v.has_value()){
        using V = remove_optional<decltype(this->v)>::type;
        req->SetQueryParam<V>("v", this->v.value());
    }
    if (this->force.has_value()){
        using V = remove_optional<decltype(this->force)>::type;
        req->SetQueryParam<V>("force", this->force.value());
    }
    if (this->link.has_value()){
        using V = remove_optional<decltype(this->link)>::type;
        req->SetQueryParam<V>("link", this->link.value());
    }
}

void containerDeleteResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerDeleteResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerExportParams::ContentType = "";
std::string const containerExportParams::PathPattern = "/containers/{id}/export";
std::string const containerExportParams::Method = "GET";
void containerExportParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerExportParams::ContentType);
    req->SetMethod(containerExportParams::Method);
    req->SetPathPattern(containerExportParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
}

void containerExportResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerExportResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerInspectParams::ContentType = "";
std::string const containerInspectParams::PathPattern = "/containers/{id}/json";
std::string const containerInspectParams::Method = "GET";
void containerInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerInspectParams::ContentType);
    req->SetMethod(containerInspectParams::Method);
    req->SetPathPattern(containerInspectParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->size.has_value()){
        using V = remove_optional<decltype(this->size)>::type;
        req->SetQueryParam<V>("size", this->size.value());
    }
}

void containerInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerKillParams::ContentType = "";
std::string const containerKillParams::PathPattern = "/containers/{id}/kill";
std::string const containerKillParams::Method = "POST";
void containerKillParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerKillParams::ContentType);
    req->SetMethod(containerKillParams::Method);
    req->SetPathPattern(containerKillParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->signal.has_value()){
        using V = remove_optional<decltype(this->signal)>::type;
        req->SetQueryParam<V>("signal", this->signal.value());
    }
}

void containerKillResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerKillResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerListParams::ContentType = "";
std::string const containerListParams::PathPattern = "/containers/json";
std::string const containerListParams::Method = "GET";
void containerListParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerListParams::ContentType);
    req->SetMethod(containerListParams::Method);
    req->SetPathPattern(containerListParams::PathPattern);
    if (this->all.has_value()){
        using V = remove_optional<decltype(this->all)>::type;
        req->SetQueryParam<V>("all", this->all.value());
    }
    if (this->limit.has_value()){
        using V = remove_optional<decltype(this->limit)>::type;
        req->SetQueryParam<V>("limit", this->limit.value());
    }
    if (this->size.has_value()){
        using V = remove_optional<decltype(this->size)>::type;
        req->SetQueryParam<V>("size", this->size.value());
    }
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void containerListResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerListResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerLogsParams::ContentType = "";
std::string const containerLogsParams::PathPattern = "/containers/{id}/logs";
std::string const containerLogsParams::Method = "GET";
void containerLogsParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerLogsParams::ContentType);
    req->SetMethod(containerLogsParams::Method);
    req->SetPathPattern(containerLogsParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
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
    if (this->until.has_value()){
        using V = remove_optional<decltype(this->until)>::type;
        req->SetQueryParam<V>("until", this->until.value());
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

void containerLogsResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerLogsResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerPauseParams::ContentType = "";
std::string const containerPauseParams::PathPattern = "/containers/{id}/pause";
std::string const containerPauseParams::Method = "POST";
void containerPauseParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerPauseParams::ContentType);
    req->SetMethod(containerPauseParams::Method);
    req->SetPathPattern(containerPauseParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
}

void containerPauseResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerPauseResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerPruneParams::ContentType = "";
std::string const containerPruneParams::PathPattern = "/containers/prune";
std::string const containerPruneParams::Method = "POST";
void containerPruneParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerPruneParams::ContentType);
    req->SetMethod(containerPruneParams::Method);
    req->SetPathPattern(containerPruneParams::PathPattern);
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void containerPruneResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerPruneResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerRenameParams::ContentType = "";
std::string const containerRenameParams::PathPattern = "/containers/{id}/rename";
std::string const containerRenameParams::Method = "POST";
void containerRenameParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerRenameParams::ContentType);
    req->SetMethod(containerRenameParams::Method);
    req->SetPathPattern(containerRenameParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetQueryParam<V>("name", this->name.value());
    }
}

void containerRenameResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerRenameResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerResizeParams::ContentType = "";
std::string const containerResizeParams::PathPattern = "/containers/{id}/resize";
std::string const containerResizeParams::Method = "POST";
void containerResizeParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerResizeParams::ContentType);
    req->SetMethod(containerResizeParams::Method);
    req->SetPathPattern(containerResizeParams::PathPattern);
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

void containerResizeResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerResizeResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerRestartParams::ContentType = "";
std::string const containerRestartParams::PathPattern = "/containers/{id}/restart";
std::string const containerRestartParams::Method = "POST";
void containerRestartParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerRestartParams::ContentType);
    req->SetMethod(containerRestartParams::Method);
    req->SetPathPattern(containerRestartParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->t.has_value()){
        using V = remove_optional<decltype(this->t)>::type;
        req->SetQueryParam<V>("t", this->t.value());
    }
}

void containerRestartResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerRestartResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerStartParams::ContentType = "";
std::string const containerStartParams::PathPattern = "/containers/{id}/start";
std::string const containerStartParams::Method = "POST";
void containerStartParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerStartParams::ContentType);
    req->SetMethod(containerStartParams::Method);
    req->SetPathPattern(containerStartParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->detachKeys.has_value()){
        using V = remove_optional<decltype(this->detachKeys)>::type;
        req->SetQueryParam<V>("detachKeys", this->detachKeys.value());
    }
}

void containerStartResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerStartResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerStatsParams::ContentType = "";
std::string const containerStatsParams::PathPattern = "/containers/{id}/stats";
std::string const containerStatsParams::Method = "GET";
void containerStatsParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerStatsParams::ContentType);
    req->SetMethod(containerStatsParams::Method);
    req->SetPathPattern(containerStatsParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->stream.has_value()){
        using V = remove_optional<decltype(this->stream)>::type;
        req->SetQueryParam<V>("stream", this->stream.value());
    }
    if (this->oneShot.has_value()){
        using V = remove_optional<decltype(this->oneShot)>::type;
        req->SetQueryParam<V>("oneShot", this->oneShot.value());
    }
}

void containerStatsResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerStatsResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerStopParams::ContentType = "";
std::string const containerStopParams::PathPattern = "/containers/{id}/stop";
std::string const containerStopParams::Method = "POST";
void containerStopParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerStopParams::ContentType);
    req->SetMethod(containerStopParams::Method);
    req->SetPathPattern(containerStopParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->t.has_value()){
        using V = remove_optional<decltype(this->t)>::type;
        req->SetQueryParam<V>("t", this->t.value());
    }
}

void containerStopResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerStopResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerTopParams::ContentType = "";
std::string const containerTopParams::PathPattern = "/containers/{id}/top";
std::string const containerTopParams::Method = "GET";
void containerTopParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerTopParams::ContentType);
    req->SetMethod(containerTopParams::Method);
    req->SetPathPattern(containerTopParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->psArgs.has_value()){
        using V = remove_optional<decltype(this->psArgs)>::type;
        req->SetQueryParam<V>("psArgs", this->psArgs.value());
    }
}

void containerTopResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerTopResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerUnpauseParams::ContentType = "";
std::string const containerUnpauseParams::PathPattern = "/containers/{id}/unpause";
std::string const containerUnpauseParams::Method = "POST";
void containerUnpauseParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerUnpauseParams::ContentType);
    req->SetMethod(containerUnpauseParams::Method);
    req->SetPathPattern(containerUnpauseParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
}

void containerUnpauseResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const containerUnpauseResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerUpdateParams::ContentType = "application/json";
std::string const containerUpdateParams::PathPattern = "/containers/{id}/update";
std::string const containerUpdateParams::Method = "POST";
void containerUpdateParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerUpdateParams::ContentType);
    req->SetMethod(containerUpdateParams::Method);
    req->SetPathPattern(containerUpdateParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->update.has_value()){
        using V = remove_optional<decltype(this->update)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->update)));
    }
}

void containerUpdateResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerUpdateResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const containerWaitParams::ContentType = "";
std::string const containerWaitParams::PathPattern = "/containers/{id}/wait";
std::string const containerWaitParams::Method = "POST";
void containerWaitParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", containerWaitParams::ContentType);
    req->SetMethod(containerWaitParams::Method);
    req->SetPathPattern(containerWaitParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->condition.has_value()){
        using V = remove_optional<decltype(this->condition)>::type;
        req->SetQueryParam<V>("condition", this->condition.value());
    }
}

void containerWaitResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const containerWaitResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const putContainerArchiveParams::ContentType = "application/x-tarapplication/octet-stream";
std::string const putContainerArchiveParams::PathPattern = "/containers/{id}/archive";
std::string const putContainerArchiveParams::Method = "PUT";
void putContainerArchiveParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", putContainerArchiveParams::ContentType);
    req->SetMethod(putContainerArchiveParams::Method);
    req->SetPathPattern(putContainerArchiveParams::PathPattern);
    if (this->id.has_value()){
        using V = remove_optional<decltype(this->id)>::type;
        req->SetPathParam<V>("id", this->id.value());
    }
    if (this->path.has_value()){
        using V = remove_optional<decltype(this->path)>::type;
        req->SetQueryParam<V>("path", this->path.value());
    }
    if (this->inputStream.has_value()){
        using V = remove_optional<decltype(this->inputStream)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->inputStream)));
    }
    if (this->noOverwriteDirNonDir.has_value()){
        using V = remove_optional<decltype(this->noOverwriteDirNonDir)>::type;
        req->SetQueryParam<V>("noOverwriteDirNonDir", this->noOverwriteDirNonDir.value());
    }
    if (this->copyUIDGID.has_value()){
        using V = remove_optional<decltype(this->copyUIDGID)>::type;
        req->SetQueryParam<V>("copyUIDGID", this->copyUIDGID.value());
    }
}

void putContainerArchiveResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const putContainerArchiveResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void ContainerApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

containerArchiveResponse ContainerApiService::containerArchive(containerArchiveParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerArchiveResponse>> p = std::make_shared<std::promise<containerArchiveResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerArchiveResponse result;
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

containerArchiveInfoResponse ContainerApiService::containerArchiveInfo(containerArchiveInfoParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerArchiveInfoResponse>> p = std::make_shared<std::promise<containerArchiveInfoResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerArchiveInfoResponse result;
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

containerAttachResponse ContainerApiService::containerAttach(containerAttachParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerAttachResponse>> p = std::make_shared<std::promise<containerAttachResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerAttachResponse result;
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

containerAttachWebsocketResponse ContainerApiService::containerAttachWebsocket(containerAttachWebsocketParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerAttachWebsocketResponse>> p = std::make_shared<std::promise<containerAttachWebsocketResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerAttachWebsocketResponse result;
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

containerChangesResponse ContainerApiService::containerChanges(containerChangesParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerChangesResponse>> p = std::make_shared<std::promise<containerChangesResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerChangesResponse result;
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

containerCreateResponse ContainerApiService::containerCreate(containerCreateParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerCreateResponse>> p = std::make_shared<std::promise<containerCreateResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerCreateResponse result;
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

containerDeleteResponse ContainerApiService::containerDelete(containerDeleteParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerDeleteResponse>> p = std::make_shared<std::promise<containerDeleteResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerDeleteResponse result;
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

containerExportResponse ContainerApiService::containerExport(containerExportParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerExportResponse>> p = std::make_shared<std::promise<containerExportResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerExportResponse result;
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

containerInspectResponse ContainerApiService::containerInspect(containerInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerInspectResponse>> p = std::make_shared<std::promise<containerInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerInspectResponse result;
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

containerKillResponse ContainerApiService::containerKill(containerKillParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerKillResponse>> p = std::make_shared<std::promise<containerKillResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerKillResponse result;
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

containerListResponse ContainerApiService::containerList(containerListParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerListResponse>> p = std::make_shared<std::promise<containerListResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerListResponse result;
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

containerLogsResponse ContainerApiService::containerLogs(containerLogsParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerLogsResponse>> p = std::make_shared<std::promise<containerLogsResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerLogsResponse result;
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

containerPauseResponse ContainerApiService::containerPause(containerPauseParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerPauseResponse>> p = std::make_shared<std::promise<containerPauseResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerPauseResponse result;
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

containerPruneResponse ContainerApiService::containerPrune(containerPruneParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerPruneResponse>> p = std::make_shared<std::promise<containerPruneResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerPruneResponse result;
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

containerRenameResponse ContainerApiService::containerRename(containerRenameParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerRenameResponse>> p = std::make_shared<std::promise<containerRenameResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerRenameResponse result;
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

containerResizeResponse ContainerApiService::containerResize(containerResizeParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerResizeResponse>> p = std::make_shared<std::promise<containerResizeResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerResizeResponse result;
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

containerRestartResponse ContainerApiService::containerRestart(containerRestartParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerRestartResponse>> p = std::make_shared<std::promise<containerRestartResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerRestartResponse result;
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

containerStartResponse ContainerApiService::containerStart(containerStartParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerStartResponse>> p = std::make_shared<std::promise<containerStartResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerStartResponse result;
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

containerStatsResponse ContainerApiService::containerStats(containerStatsParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerStatsResponse>> p = std::make_shared<std::promise<containerStatsResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerStatsResponse result;
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

containerStopResponse ContainerApiService::containerStop(containerStopParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerStopResponse>> p = std::make_shared<std::promise<containerStopResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerStopResponse result;
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

containerTopResponse ContainerApiService::containerTop(containerTopParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerTopResponse>> p = std::make_shared<std::promise<containerTopResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerTopResponse result;
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

containerUnpauseResponse ContainerApiService::containerUnpause(containerUnpauseParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerUnpauseResponse>> p = std::make_shared<std::promise<containerUnpauseResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerUnpauseResponse result;
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

containerUpdateResponse ContainerApiService::containerUpdate(containerUpdateParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerUpdateResponse>> p = std::make_shared<std::promise<containerUpdateResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerUpdateResponse result;
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

containerWaitResponse ContainerApiService::containerWait(containerWaitParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<containerWaitResponse>> p = std::make_shared<std::promise<containerWaitResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            containerWaitResponse result;
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

putContainerArchiveResponse ContainerApiService::putContainerArchive(putContainerArchiveParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<putContainerArchiveResponse>> p = std::make_shared<std::promise<putContainerArchiveResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            putContainerArchiveResponse result;
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



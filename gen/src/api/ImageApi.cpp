#include "ImageApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name ImageApi


std::string const buildPruneParams::ContentType = "";
std::string const buildPruneParams::PathPattern = "/build/prune";
std::string const buildPruneParams::Method = "POST";
void buildPruneParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", buildPruneParams::ContentType);
    req->SetMethod(buildPruneParams::Method);
    req->SetPathPattern(buildPruneParams::PathPattern);
    if (this->keepStorage.has_value()){
        using V = remove_optional<decltype(this->keepStorage)>::type;
        req->SetQueryParam<V>("keepStorage", this->keepStorage.value());
    }
    if (this->all.has_value()){
        using V = remove_optional<decltype(this->all)>::type;
        req->SetQueryParam<V>("all", this->all.value());
    }
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void buildPruneResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const buildPruneResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageBuildParams::ContentType = "application/octet-stream";
std::string const imageBuildParams::PathPattern = "/build";
std::string const imageBuildParams::Method = "POST";
void imageBuildParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageBuildParams::ContentType);
    req->SetMethod(imageBuildParams::Method);
    req->SetPathPattern(imageBuildParams::PathPattern);
    if (this->dockerfile.has_value()){
        using V = remove_optional<decltype(this->dockerfile)>::type;
        req->SetQueryParam<V>("dockerfile", this->dockerfile.value());
    }
    if (this->t.has_value()){
        using V = remove_optional<decltype(this->t)>::type;
        req->SetQueryParam<V>("t", this->t.value());
    }
    if (this->extrahosts.has_value()){
        using V = remove_optional<decltype(this->extrahosts)>::type;
        req->SetQueryParam<V>("extrahosts", this->extrahosts.value());
    }
    if (this->remote.has_value()){
        using V = remove_optional<decltype(this->remote)>::type;
        req->SetQueryParam<V>("remote", this->remote.value());
    }
    if (this->q.has_value()){
        using V = remove_optional<decltype(this->q)>::type;
        req->SetQueryParam<V>("q", this->q.value());
    }
    if (this->nocache.has_value()){
        using V = remove_optional<decltype(this->nocache)>::type;
        req->SetQueryParam<V>("nocache", this->nocache.value());
    }
    if (this->cachefrom.has_value()){
        using V = remove_optional<decltype(this->cachefrom)>::type;
        req->SetQueryParam<V>("cachefrom", this->cachefrom.value());
    }
    if (this->pull.has_value()){
        using V = remove_optional<decltype(this->pull)>::type;
        req->SetQueryParam<V>("pull", this->pull.value());
    }
    if (this->rm.has_value()){
        using V = remove_optional<decltype(this->rm)>::type;
        req->SetQueryParam<V>("rm", this->rm.value());
    }
    if (this->forcerm.has_value()){
        using V = remove_optional<decltype(this->forcerm)>::type;
        req->SetQueryParam<V>("forcerm", this->forcerm.value());
    }
    if (this->memory.has_value()){
        using V = remove_optional<decltype(this->memory)>::type;
        req->SetQueryParam<V>("memory", this->memory.value());
    }
    if (this->memswap.has_value()){
        using V = remove_optional<decltype(this->memswap)>::type;
        req->SetQueryParam<V>("memswap", this->memswap.value());
    }
    if (this->cpushares.has_value()){
        using V = remove_optional<decltype(this->cpushares)>::type;
        req->SetQueryParam<V>("cpushares", this->cpushares.value());
    }
    if (this->cpusetcpus.has_value()){
        using V = remove_optional<decltype(this->cpusetcpus)>::type;
        req->SetQueryParam<V>("cpusetcpus", this->cpusetcpus.value());
    }
    if (this->cpuperiod.has_value()){
        using V = remove_optional<decltype(this->cpuperiod)>::type;
        req->SetQueryParam<V>("cpuperiod", this->cpuperiod.value());
    }
    if (this->cpuquota.has_value()){
        using V = remove_optional<decltype(this->cpuquota)>::type;
        req->SetQueryParam<V>("cpuquota", this->cpuquota.value());
    }
    if (this->buildargs.has_value()){
        using V = remove_optional<decltype(this->buildargs)>::type;
        req->SetQueryParam<V>("buildargs", this->buildargs.value());
    }
    if (this->shmsize.has_value()){
        using V = remove_optional<decltype(this->shmsize)>::type;
        req->SetQueryParam<V>("shmsize", this->shmsize.value());
    }
    if (this->squash.has_value()){
        using V = remove_optional<decltype(this->squash)>::type;
        req->SetQueryParam<V>("squash", this->squash.value());
    }
    if (this->labels.has_value()){
        using V = remove_optional<decltype(this->labels)>::type;
        req->SetQueryParam<V>("labels", this->labels.value());
    }
    if (this->networkmode.has_value()){
        using V = remove_optional<decltype(this->networkmode)>::type;
        req->SetQueryParam<V>("networkmode", this->networkmode.value());
    }
    if (this->contentType.has_value()){
        using V = remove_optional<decltype(this->contentType)>::type;
    }
    if (this->xRegistryConfig.has_value()){
        using V = remove_optional<decltype(this->xRegistryConfig)>::type;
    }
    if (this->platform.has_value()){
        using V = remove_optional<decltype(this->platform)>::type;
        req->SetQueryParam<V>("platform", this->platform.value());
    }
    if (this->target.has_value()){
        using V = remove_optional<decltype(this->target)>::type;
        req->SetQueryParam<V>("target", this->target.value());
    }
    if (this->outputs.has_value()){
        using V = remove_optional<decltype(this->outputs)>::type;
        req->SetQueryParam<V>("outputs", this->outputs.value());
    }
    if (this->inputStream.has_value()){
        using V = remove_optional<decltype(this->inputStream)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->inputStream)));
    }
}

void imageBuildResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const imageBuildResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageCommitParams::ContentType = "application/json";
std::string const imageCommitParams::PathPattern = "/commit";
std::string const imageCommitParams::Method = "POST";
void imageCommitParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageCommitParams::ContentType);
    req->SetMethod(imageCommitParams::Method);
    req->SetPathPattern(imageCommitParams::PathPattern);
    if (this->container.has_value()){
        using V = remove_optional<decltype(this->container)>::type;
        req->SetQueryParam<V>("container", this->container.value());
    }
    if (this->repo.has_value()){
        using V = remove_optional<decltype(this->repo)>::type;
        req->SetQueryParam<V>("repo", this->repo.value());
    }
    if (this->tag.has_value()){
        using V = remove_optional<decltype(this->tag)>::type;
        req->SetQueryParam<V>("tag", this->tag.value());
    }
    if (this->comment.has_value()){
        using V = remove_optional<decltype(this->comment)>::type;
        req->SetQueryParam<V>("comment", this->comment.value());
    }
    if (this->author.has_value()){
        using V = remove_optional<decltype(this->author)>::type;
        req->SetQueryParam<V>("author", this->author.value());
    }
    if (this->pause.has_value()){
        using V = remove_optional<decltype(this->pause)>::type;
        req->SetQueryParam<V>("pause", this->pause.value());
    }
    if (this->changes.has_value()){
        using V = remove_optional<decltype(this->changes)>::type;
        req->SetQueryParam<V>("changes", this->changes.value());
    }
    if (this->containerConfig.has_value()){
        using V = remove_optional<decltype(this->containerConfig)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->containerConfig)));
    }
}

void imageCommitResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const imageCommitResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageCreateParams::ContentType = "text/plainapplication/octet-stream";
std::string const imageCreateParams::PathPattern = "/images/create";
std::string const imageCreateParams::Method = "POST";
void imageCreateParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageCreateParams::ContentType);
    req->SetMethod(imageCreateParams::Method);
    req->SetPathPattern(imageCreateParams::PathPattern);
    if (this->fromImage.has_value()){
        using V = remove_optional<decltype(this->fromImage)>::type;
        req->SetQueryParam<V>("fromImage", this->fromImage.value());
    }
    if (this->fromSrc.has_value()){
        using V = remove_optional<decltype(this->fromSrc)>::type;
        req->SetQueryParam<V>("fromSrc", this->fromSrc.value());
    }
    if (this->repo.has_value()){
        using V = remove_optional<decltype(this->repo)>::type;
        req->SetQueryParam<V>("repo", this->repo.value());
    }
    if (this->tag.has_value()){
        using V = remove_optional<decltype(this->tag)>::type;
        req->SetQueryParam<V>("tag", this->tag.value());
    }
    if (this->message.has_value()){
        using V = remove_optional<decltype(this->message)>::type;
        req->SetQueryParam<V>("message", this->message.value());
    }
    if (this->xRegistryAuth.has_value()){
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
    if (this->changes.has_value()){
        using V = remove_optional<decltype(this->changes)>::type;
        req->SetQueryParam<V>("changes", this->changes.value());
    }
    if (this->platform.has_value()){
        using V = remove_optional<decltype(this->platform)>::type;
        req->SetQueryParam<V>("platform", this->platform.value());
    }
    if (this->inputImage.has_value()){
        using V = remove_optional<decltype(this->inputImage)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->inputImage)));
    }
}

void imageCreateResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const imageCreateResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageDeleteParams::ContentType = "";
std::string const imageDeleteParams::PathPattern = "/images/{name}";
std::string const imageDeleteParams::Method = "DELETE";
void imageDeleteParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageDeleteParams::ContentType);
    req->SetMethod(imageDeleteParams::Method);
    req->SetPathPattern(imageDeleteParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
    if (this->force.has_value()){
        using V = remove_optional<decltype(this->force)>::type;
        req->SetQueryParam<V>("force", this->force.value());
    }
    if (this->noprune.has_value()){
        using V = remove_optional<decltype(this->noprune)>::type;
        req->SetQueryParam<V>("noprune", this->noprune.value());
    }
}

void imageDeleteResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const imageDeleteResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageGetParams::ContentType = "";
std::string const imageGetParams::PathPattern = "/images/{name}/get";
std::string const imageGetParams::Method = "GET";
void imageGetParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageGetParams::ContentType);
    req->SetMethod(imageGetParams::Method);
    req->SetPathPattern(imageGetParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
}

void imageGetResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const imageGetResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageGetAllParams::ContentType = "";
std::string const imageGetAllParams::PathPattern = "/images/get";
std::string const imageGetAllParams::Method = "GET";
void imageGetAllParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageGetAllParams::ContentType);
    req->SetMethod(imageGetAllParams::Method);
    req->SetPathPattern(imageGetAllParams::PathPattern);
    if (this->names.has_value()){
        using V = remove_optional<decltype(this->names)>::type;
        req->SetQueryParam<V>("names", this->names.value());
    }
}

void imageGetAllResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const imageGetAllResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageHistoryParams::ContentType = "";
std::string const imageHistoryParams::PathPattern = "/images/{name}/history";
std::string const imageHistoryParams::Method = "GET";
void imageHistoryParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageHistoryParams::ContentType);
    req->SetMethod(imageHistoryParams::Method);
    req->SetPathPattern(imageHistoryParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
}

void imageHistoryResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const imageHistoryResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageInspectParams::ContentType = "";
std::string const imageInspectParams::PathPattern = "/images/{name}/json";
std::string const imageInspectParams::Method = "GET";
void imageInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageInspectParams::ContentType);
    req->SetMethod(imageInspectParams::Method);
    req->SetPathPattern(imageInspectParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
}

void imageInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const imageInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageListParams::ContentType = "";
std::string const imageListParams::PathPattern = "/images/json";
std::string const imageListParams::Method = "GET";
void imageListParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageListParams::ContentType);
    req->SetMethod(imageListParams::Method);
    req->SetPathPattern(imageListParams::PathPattern);
    if (this->all.has_value()){
        using V = remove_optional<decltype(this->all)>::type;
        req->SetQueryParam<V>("all", this->all.value());
    }
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
    if (this->sharedSize.has_value()){
        using V = remove_optional<decltype(this->sharedSize)>::type;
        req->SetQueryParam<V>("sharedSize", this->sharedSize.value());
    }
    if (this->digests.has_value()){
        using V = remove_optional<decltype(this->digests)>::type;
        req->SetQueryParam<V>("digests", this->digests.value());
    }
}

void imageListResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const imageListResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageLoadParams::ContentType = "application/x-tar";
std::string const imageLoadParams::PathPattern = "/images/load";
std::string const imageLoadParams::Method = "POST";
void imageLoadParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageLoadParams::ContentType);
    req->SetMethod(imageLoadParams::Method);
    req->SetPathPattern(imageLoadParams::PathPattern);
    if (this->quiet.has_value()){
        using V = remove_optional<decltype(this->quiet)>::type;
        req->SetQueryParam<V>("quiet", this->quiet.value());
    }
    if (this->imagesTarball.has_value()){
        using V = remove_optional<decltype(this->imagesTarball)>::type;
        req->SetBodyParam(openapi::ToStdString(Json::Serialize(this->imagesTarball)));
    }
}

void imageLoadResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const imageLoadResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imagePruneParams::ContentType = "";
std::string const imagePruneParams::PathPattern = "/images/prune";
std::string const imagePruneParams::Method = "POST";
void imagePruneParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imagePruneParams::ContentType);
    req->SetMethod(imagePruneParams::Method);
    req->SetPathPattern(imagePruneParams::PathPattern);
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void imagePruneResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const imagePruneResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imagePushParams::ContentType = "";
std::string const imagePushParams::PathPattern = "/images/{name}/push";
std::string const imagePushParams::Method = "POST";
void imagePushParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imagePushParams::ContentType);
    req->SetMethod(imagePushParams::Method);
    req->SetPathPattern(imagePushParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
    if (this->xRegistryAuth.has_value()){
        using V = remove_optional<decltype(this->xRegistryAuth)>::type;
    }
    if (this->tag.has_value()){
        using V = remove_optional<decltype(this->tag)>::type;
        req->SetQueryParam<V>("tag", this->tag.value());
    }
}

void imagePushResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const imagePushResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageSearchParams::ContentType = "";
std::string const imageSearchParams::PathPattern = "/images/search";
std::string const imageSearchParams::Method = "GET";
void imageSearchParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageSearchParams::ContentType);
    req->SetMethod(imageSearchParams::Method);
    req->SetPathPattern(imageSearchParams::PathPattern);
    if (this->term.has_value()){
        using V = remove_optional<decltype(this->term)>::type;
        req->SetQueryParam<V>("term", this->term.value());
    }
    if (this->limit.has_value()){
        using V = remove_optional<decltype(this->limit)>::type;
        req->SetQueryParam<V>("limit", this->limit.value());
    }
    if (this->filters.has_value()){
        using V = remove_optional<decltype(this->filters)>::type;
        req->SetQueryParam<V>("filters", this->filters.value());
    }
}

void imageSearchResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const imageSearchResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}

std::string const imageTagParams::ContentType = "";
std::string const imageTagParams::PathPattern = "/images/{name}/tag";
std::string const imageTagParams::Method = "POST";
void imageTagParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", imageTagParams::ContentType);
    req->SetMethod(imageTagParams::Method);
    req->SetPathPattern(imageTagParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
    if (this->repo.has_value()){
        using V = remove_optional<decltype(this->repo)>::type;
        req->SetQueryParam<V>("repo", this->repo.value());
    }
    if (this->tag.has_value()){
        using V = remove_optional<decltype(this->tag)>::type;
        req->SetQueryParam<V>("tag", this->tag.value());
    }
}

void imageTagResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const imageTagResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void ImageApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

buildPruneResponse ImageApiService::buildPrune(buildPruneParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<buildPruneResponse>> p = std::make_shared<std::promise<buildPruneResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            buildPruneResponse result;
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

imageBuildResponse ImageApiService::imageBuild(imageBuildParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageBuildResponse>> p = std::make_shared<std::promise<imageBuildResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageBuildResponse result;
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

imageCommitResponse ImageApiService::imageCommit(imageCommitParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageCommitResponse>> p = std::make_shared<std::promise<imageCommitResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageCommitResponse result;
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

imageCreateResponse ImageApiService::imageCreate(imageCreateParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageCreateResponse>> p = std::make_shared<std::promise<imageCreateResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageCreateResponse result;
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

imageDeleteResponse ImageApiService::imageDelete(imageDeleteParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageDeleteResponse>> p = std::make_shared<std::promise<imageDeleteResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageDeleteResponse result;
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

imageGetResponse ImageApiService::imageGet(imageGetParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageGetResponse>> p = std::make_shared<std::promise<imageGetResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageGetResponse result;
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

imageGetAllResponse ImageApiService::imageGetAll(imageGetAllParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageGetAllResponse>> p = std::make_shared<std::promise<imageGetAllResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageGetAllResponse result;
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

imageHistoryResponse ImageApiService::imageHistory(imageHistoryParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageHistoryResponse>> p = std::make_shared<std::promise<imageHistoryResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageHistoryResponse result;
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

imageInspectResponse ImageApiService::imageInspect(imageInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageInspectResponse>> p = std::make_shared<std::promise<imageInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageInspectResponse result;
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

imageListResponse ImageApiService::imageList(imageListParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageListResponse>> p = std::make_shared<std::promise<imageListResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageListResponse result;
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

imageLoadResponse ImageApiService::imageLoad(imageLoadParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageLoadResponse>> p = std::make_shared<std::promise<imageLoadResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageLoadResponse result;
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

imagePruneResponse ImageApiService::imagePrune(imagePruneParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imagePruneResponse>> p = std::make_shared<std::promise<imagePruneResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imagePruneResponse result;
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

imagePushResponse ImageApiService::imagePush(imagePushParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imagePushResponse>> p = std::make_shared<std::promise<imagePushResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imagePushResponse result;
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

imageSearchResponse ImageApiService::imageSearch(imageSearchParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageSearchResponse>> p = std::make_shared<std::promise<imageSearchResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageSearchResponse result;
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

imageTagResponse ImageApiService::imageTag(imageTagParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<imageTagResponse>> p = std::make_shared<std::promise<imageTagResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            imageTagResponse result;
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



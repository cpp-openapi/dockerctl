#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "BuildPruneResponse.h"
#include "ContainerConfig.h"
#include "ErrorResponse.h"
#include "HistoryResponseItem.h"
#include "IdResponse.h"
#include "Image.h"
#include "ImageDeleteResponseItem.h"
#include "ImagePruneResponse.h"
#include "ImageSearchResponseItem.h"
#include "ImageSummary.h"


namespace openapi {


// class name ImageApi


struct buildPruneParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<int> keepStorage;
    std::optional<bool> all;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct buildPruneResponse {
    std::optional<BuildPruneResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const buildPruneResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const buildPruneResponse& resp);

struct imageBuildParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> dockerfile;
    std::optional<openapi::string_t> t;
    std::optional<openapi::string_t> extrahosts;
    std::optional<openapi::string_t> remote;
    std::optional<bool> q;
    std::optional<bool> nocache;
    std::optional<openapi::string_t> cachefrom;
    std::optional<openapi::string_t> pull;
    std::optional<bool> rm;
    std::optional<bool> forcerm;
    std::optional<int> memory;
    std::optional<int> memswap;
    std::optional<int> cpushares;
    std::optional<openapi::string_t> cpusetcpus;
    std::optional<int> cpuperiod;
    std::optional<int> cpuquota;
    std::optional<openapi::string_t> buildargs;
    std::optional<int> shmsize;
    std::optional<bool> squash;
    std::optional<openapi::string_t> labels;
    std::optional<openapi::string_t> networkmode;
    std::optional<openapi::string_t> contentType;
    std::optional<openapi::string_t> xRegistryConfig;
    std::optional<openapi::string_t> platform;
    std::optional<openapi::string_t> target;
    std::optional<openapi::string_t> outputs;
    std::optional<openapi::string_t> inputStream;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageBuildResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageBuildResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageBuildResponse& resp);

struct imageCommitParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> container;
    std::optional<openapi::string_t> repo;
    std::optional<openapi::string_t> tag;
    std::optional<openapi::string_t> comment;
    std::optional<openapi::string_t> author;
    std::optional<bool> pause;
    std::optional<openapi::string_t> changes;
    std::optional<std::shared_ptr<ContainerConfig>> containerConfig;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageCommitResponse {
    std::optional<IdResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageCommitResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageCommitResponse& resp);

struct imageCreateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> fromImage;
    std::optional<openapi::string_t> fromSrc;
    std::optional<openapi::string_t> repo;
    std::optional<openapi::string_t> tag;
    std::optional<openapi::string_t> message;
    std::optional<openapi::string_t> xRegistryAuth;
    std::optional<std::vector<openapi::string_t>> changes;
    std::optional<openapi::string_t> platform;
    std::optional<openapi::string_t> inputImage;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageCreateResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageCreateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageCreateResponse& resp);

struct imageDeleteParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    std::optional<bool> force;
    std::optional<bool> noprune;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageDeleteResponse {
    std::optional<std::vector<ImageDeleteResponseItem>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageDeleteResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageDeleteResponse& resp);

struct imageGetParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageGetResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageGetResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageGetResponse& resp);

struct imageGetAllParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::vector<openapi::string_t>> names;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageGetAllResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageGetAllResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageGetAllResponse& resp);

struct imageHistoryParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageHistoryResponse {
    std::optional<std::vector<HistoryResponseItem>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageHistoryResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageHistoryResponse& resp);

struct imageInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageInspectResponse {
    std::optional<Image> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageInspectResponse& resp);

struct imageListParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<bool> all;
    std::optional<openapi::string_t> filters;
    std::optional<bool> sharedSize;
    std::optional<bool> digests;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageListResponse {
    std::optional<std::vector<ImageSummary>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageListResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageListResponse& resp);

struct imageLoadParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<bool> quiet;
    std::optional<openapi::string_t> imagesTarball;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageLoadResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageLoadResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageLoadResponse& resp);

struct imagePruneParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imagePruneResponse {
    std::optional<ImagePruneResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imagePruneResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imagePruneResponse& resp);

struct imagePushParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> xRegistryAuth;
    std::optional<openapi::string_t> tag;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imagePushResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imagePushResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imagePushResponse& resp);

struct imageSearchParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> term;
    std::optional<int> limit;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageSearchResponse {
    std::optional<std::vector<ImageSearchResponseItem>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageSearchResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageSearchResponse& resp);

struct imageTagParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> repo;
    std::optional<openapi::string_t> tag;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct imageTagResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const imageTagResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const imageTagResponse& resp);

class ImageApiService{
public:
    ImageApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    buildPruneResponse buildPrune(buildPruneParams params);
    imageBuildResponse imageBuild(imageBuildParams params);
    imageCommitResponse imageCommit(imageCommitParams params);
    imageCreateResponse imageCreate(imageCreateParams params);
    imageDeleteResponse imageDelete(imageDeleteParams params);
    imageGetResponse imageGet(imageGetParams params);
    imageGetAllResponse imageGetAll(imageGetAllParams params);
    imageHistoryResponse imageHistory(imageHistoryParams params);
    imageInspectResponse imageInspect(imageInspectParams params);
    imageListResponse imageList(imageListParams params);
    imageLoadResponse imageLoad(imageLoadParams params);
    imagePruneResponse imagePrune(imagePruneParams params);
    imagePushResponse imagePush(imagePushParams params);
    imageSearchResponse imageSearch(imageSearchParams params);
    imageTagResponse imageTag(imageTagParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi
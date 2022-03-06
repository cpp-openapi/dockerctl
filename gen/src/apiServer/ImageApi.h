#pragma once

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


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name ImageApi
struct buildPruneParams {
    std::optional<int> keepStorage;
    std::optional<bool> all;
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct buildPruneResponse {
    std::optional<BuildPruneResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const buildPruneResponse& resp);
};

// function user needs to implement
typedef std::function<buildPruneResponse(buildPruneParams)> buildPruneHandlerFuncType;


// class name ImageApi
struct imageBuildParams {
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
    void ReadParams(IOASClientRequest & req);
};

struct imageBuildResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageBuildResponse& resp);
};

// function user needs to implement
typedef std::function<imageBuildResponse(imageBuildParams)> imageBuildHandlerFuncType;


// class name ImageApi
struct imageCommitParams {
    std::optional<openapi::string_t> container;
    std::optional<openapi::string_t> repo;
    std::optional<openapi::string_t> tag;
    std::optional<openapi::string_t> comment;
    std::optional<openapi::string_t> author;
    std::optional<bool> pause;
    std::optional<openapi::string_t> changes;
    std::optional<std::shared_ptr<ContainerConfig>> containerConfig;
    void ReadParams(IOASClientRequest & req);
};

struct imageCommitResponse {
    std::optional<IdResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageCommitResponse& resp);
};

// function user needs to implement
typedef std::function<imageCommitResponse(imageCommitParams)> imageCommitHandlerFuncType;


// class name ImageApi
struct imageCreateParams {
    std::optional<openapi::string_t> fromImage;
    std::optional<openapi::string_t> fromSrc;
    std::optional<openapi::string_t> repo;
    std::optional<openapi::string_t> tag;
    std::optional<openapi::string_t> message;
    std::optional<openapi::string_t> xRegistryAuth;
    std::optional<std::vector<openapi::string_t>> changes;
    std::optional<openapi::string_t> platform;
    std::optional<openapi::string_t> inputImage;
    void ReadParams(IOASClientRequest & req);
};

struct imageCreateResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageCreateResponse& resp);
};

// function user needs to implement
typedef std::function<imageCreateResponse(imageCreateParams)> imageCreateHandlerFuncType;


// class name ImageApi
struct imageDeleteParams {
    std::optional<openapi::string_t> name;
    std::optional<bool> force;
    std::optional<bool> noprune;
    void ReadParams(IOASClientRequest & req);
};

struct imageDeleteResponse {
    std::optional<std::vector<ImageDeleteResponseItem>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageDeleteResponse& resp);
};

// function user needs to implement
typedef std::function<imageDeleteResponse(imageDeleteParams)> imageDeleteHandlerFuncType;


// class name ImageApi
struct imageGetParams {
    std::optional<openapi::string_t> name;
    void ReadParams(IOASClientRequest & req);
};

struct imageGetResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageGetResponse& resp);
};

// function user needs to implement
typedef std::function<imageGetResponse(imageGetParams)> imageGetHandlerFuncType;


// class name ImageApi
struct imageGetAllParams {
    std::optional<std::vector<openapi::string_t>> names;
    void ReadParams(IOASClientRequest & req);
};

struct imageGetAllResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageGetAllResponse& resp);
};

// function user needs to implement
typedef std::function<imageGetAllResponse(imageGetAllParams)> imageGetAllHandlerFuncType;


// class name ImageApi
struct imageHistoryParams {
    std::optional<openapi::string_t> name;
    void ReadParams(IOASClientRequest & req);
};

struct imageHistoryResponse {
    std::optional<std::vector<HistoryResponseItem>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageHistoryResponse& resp);
};

// function user needs to implement
typedef std::function<imageHistoryResponse(imageHistoryParams)> imageHistoryHandlerFuncType;


// class name ImageApi
struct imageInspectParams {
    std::optional<openapi::string_t> name;
    void ReadParams(IOASClientRequest & req);
};

struct imageInspectResponse {
    std::optional<Image> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageInspectResponse& resp);
};

// function user needs to implement
typedef std::function<imageInspectResponse(imageInspectParams)> imageInspectHandlerFuncType;


// class name ImageApi
struct imageListParams {
    std::optional<bool> all;
    std::optional<openapi::string_t> filters;
    std::optional<bool> sharedSize;
    std::optional<bool> digests;
    void ReadParams(IOASClientRequest & req);
};

struct imageListResponse {
    std::optional<std::vector<ImageSummary>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageListResponse& resp);
};

// function user needs to implement
typedef std::function<imageListResponse(imageListParams)> imageListHandlerFuncType;


// class name ImageApi
struct imageLoadParams {
    std::optional<bool> quiet;
    std::optional<openapi::string_t> imagesTarball;
    void ReadParams(IOASClientRequest & req);
};

struct imageLoadResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageLoadResponse& resp);
};

// function user needs to implement
typedef std::function<imageLoadResponse(imageLoadParams)> imageLoadHandlerFuncType;


// class name ImageApi
struct imagePruneParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct imagePruneResponse {
    std::optional<ImagePruneResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imagePruneResponse& resp);
};

// function user needs to implement
typedef std::function<imagePruneResponse(imagePruneParams)> imagePruneHandlerFuncType;


// class name ImageApi
struct imagePushParams {
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> xRegistryAuth;
    std::optional<openapi::string_t> tag;
    void ReadParams(IOASClientRequest & req);
};

struct imagePushResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imagePushResponse& resp);
};

// function user needs to implement
typedef std::function<imagePushResponse(imagePushParams)> imagePushHandlerFuncType;


// class name ImageApi
struct imageSearchParams {
    std::optional<openapi::string_t> term;
    std::optional<int> limit;
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct imageSearchResponse {
    std::optional<std::vector<ImageSearchResponseItem>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageSearchResponse& resp);
};

// function user needs to implement
typedef std::function<imageSearchResponse(imageSearchParams)> imageSearchHandlerFuncType;


// class name ImageApi
struct imageTagParams {
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> repo;
    std::optional<openapi::string_t> tag;
    void ReadParams(IOASClientRequest & req);
};

struct imageTagResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const imageTagResponse& resp);
};

// function user needs to implement
typedef std::function<imageTagResponse(imageTagParams)> imageTagHandlerFuncType;



} // namespace openapi
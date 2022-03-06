#pragma once

#include "ErrorResponse.h"
#include "Service.h"
#include "ServiceCreateResponse.h"
#include "ServiceSpec.h"
#include "ServiceUpdateResponse.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name ServiceApi
struct serviceCreateParams {
    std::optional<std::shared_ptr<ServiceSpec>> body;
    std::optional<openapi::string_t> xRegistryAuth;
    void ReadParams(IOASClientRequest & req);
};

struct serviceCreateResponse {
    std::optional<ServiceCreateResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const serviceCreateResponse& resp);
};

// function user needs to implement
typedef std::function<serviceCreateResponse(serviceCreateParams)> serviceCreateHandlerFuncType;


// class name ServiceApi
struct serviceDeleteParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct serviceDeleteResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const serviceDeleteResponse& resp);
};

// function user needs to implement
typedef std::function<serviceDeleteResponse(serviceDeleteParams)> serviceDeleteHandlerFuncType;


// class name ServiceApi
struct serviceInspectParams {
    std::optional<openapi::string_t> id;
    std::optional<bool> insertDefaults;
    void ReadParams(IOASClientRequest & req);
};

struct serviceInspectResponse {
    std::optional<Service> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const serviceInspectResponse& resp);
};

// function user needs to implement
typedef std::function<serviceInspectResponse(serviceInspectParams)> serviceInspectHandlerFuncType;


// class name ServiceApi
struct serviceListParams {
    std::optional<openapi::string_t> filters;
    std::optional<bool> status;
    void ReadParams(IOASClientRequest & req);
};

struct serviceListResponse {
    std::optional<std::vector<Service>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const serviceListResponse& resp);
};

// function user needs to implement
typedef std::function<serviceListResponse(serviceListParams)> serviceListHandlerFuncType;


// class name ServiceApi
struct serviceLogsParams {
    std::optional<openapi::string_t> id;
    std::optional<bool> details;
    std::optional<bool> follow;
    std::optional<bool> stdout;
    std::optional<bool> stderr;
    std::optional<int> since;
    std::optional<bool> timestamps;
    std::optional<openapi::string_t> tail;
    void ReadParams(IOASClientRequest & req);
};

struct serviceLogsResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const serviceLogsResponse& resp);
};

// function user needs to implement
typedef std::function<serviceLogsResponse(serviceLogsParams)> serviceLogsHandlerFuncType;


// class name ServiceApi
struct serviceUpdateParams {
    std::optional<openapi::string_t> id;
    std::optional<int> version;
    std::optional<std::shared_ptr<ServiceSpec>> body;
    std::optional<openapi::string_t> registryAuthFrom;
    std::optional<openapi::string_t> rollback;
    std::optional<openapi::string_t> xRegistryAuth;
    void ReadParams(IOASClientRequest & req);
};

struct serviceUpdateResponse {
    std::optional<ServiceUpdateResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const serviceUpdateResponse& resp);
};

// function user needs to implement
typedef std::function<serviceUpdateResponse(serviceUpdateParams)> serviceUpdateHandlerFuncType;



} // namespace openapi
#pragma once

#include "Config.h"
#include "ConfigSpec.h"
#include "ErrorResponse.h"
#include "IdResponse.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name ConfigApi
struct configCreateParams {
    std::optional<std::shared_ptr<ConfigSpec>> body;
    void ReadParams(IOASClientRequest & req);
};

struct configCreateResponse {
    std::optional<IdResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const configCreateResponse& resp);
};

// function user needs to implement
typedef std::function<configCreateResponse(configCreateParams)> configCreateHandlerFuncType;


// class name ConfigApi
struct configDeleteParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct configDeleteResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const configDeleteResponse& resp);
};

// function user needs to implement
typedef std::function<configDeleteResponse(configDeleteParams)> configDeleteHandlerFuncType;


// class name ConfigApi
struct configInspectParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct configInspectResponse {
    std::optional<Config> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const configInspectResponse& resp);
};

// function user needs to implement
typedef std::function<configInspectResponse(configInspectParams)> configInspectHandlerFuncType;


// class name ConfigApi
struct configListParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct configListResponse {
    std::optional<std::vector<Config>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const configListResponse& resp);
};

// function user needs to implement
typedef std::function<configListResponse(configListParams)> configListHandlerFuncType;


// class name ConfigApi
struct configUpdateParams {
    std::optional<openapi::string_t> id;
    std::optional<int> version;
    std::optional<std::shared_ptr<ConfigSpec>> body;
    void ReadParams(IOASClientRequest & req);
};

struct configUpdateResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const configUpdateResponse& resp);
};

// function user needs to implement
typedef std::function<configUpdateResponse(configUpdateParams)> configUpdateHandlerFuncType;



} // namespace openapi
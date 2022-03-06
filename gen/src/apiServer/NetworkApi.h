#pragma once

#include "ErrorResponse.h"
#include "Network.h"
#include "NetworkConnectRequest.h"
#include "NetworkCreateRequest.h"
#include "NetworkCreateResponse.h"
#include "NetworkDisconnectRequest.h"
#include "NetworkPruneResponse.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name NetworkApi
struct networkConnectParams {
    std::optional<openapi::string_t> id;
    std::optional<std::shared_ptr<NetworkConnectRequest>> container;
    void ReadParams(IOASClientRequest & req);
};

struct networkConnectResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const networkConnectResponse& resp);
};

// function user needs to implement
typedef std::function<networkConnectResponse(networkConnectParams)> networkConnectHandlerFuncType;


// class name NetworkApi
struct networkCreateParams {
    std::optional<std::shared_ptr<NetworkCreateRequest>> networkConfig;
    void ReadParams(IOASClientRequest & req);
};

struct networkCreateResponse {
    std::optional<NetworkCreateResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const networkCreateResponse& resp);
};

// function user needs to implement
typedef std::function<networkCreateResponse(networkCreateParams)> networkCreateHandlerFuncType;


// class name NetworkApi
struct networkDeleteParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct networkDeleteResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const networkDeleteResponse& resp);
};

// function user needs to implement
typedef std::function<networkDeleteResponse(networkDeleteParams)> networkDeleteHandlerFuncType;


// class name NetworkApi
struct networkDisconnectParams {
    std::optional<openapi::string_t> id;
    std::optional<std::shared_ptr<NetworkDisconnectRequest>> container;
    void ReadParams(IOASClientRequest & req);
};

struct networkDisconnectResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const networkDisconnectResponse& resp);
};

// function user needs to implement
typedef std::function<networkDisconnectResponse(networkDisconnectParams)> networkDisconnectHandlerFuncType;


// class name NetworkApi
struct networkInspectParams {
    std::optional<openapi::string_t> id;
    std::optional<bool> verbose;
    std::optional<openapi::string_t> scope;
    void ReadParams(IOASClientRequest & req);
};

struct networkInspectResponse {
    std::optional<Network> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const networkInspectResponse& resp);
};

// function user needs to implement
typedef std::function<networkInspectResponse(networkInspectParams)> networkInspectHandlerFuncType;


// class name NetworkApi
struct networkListParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct networkListResponse {
    std::optional<std::vector<Network>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const networkListResponse& resp);
};

// function user needs to implement
typedef std::function<networkListResponse(networkListParams)> networkListHandlerFuncType;


// class name NetworkApi
struct networkPruneParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct networkPruneResponse {
    std::optional<NetworkPruneResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const networkPruneResponse& resp);
};

// function user needs to implement
typedef std::function<networkPruneResponse(networkPruneParams)> networkPruneHandlerFuncType;



} // namespace openapi
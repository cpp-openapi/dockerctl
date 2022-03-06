#pragma once

#include "ErrorResponse.h"
#include "Node.h"
#include "NodeSpec.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name NodeApi
struct nodeDeleteParams {
    std::optional<openapi::string_t> id;
    std::optional<bool> force;
    void ReadParams(IOASClientRequest & req);
};

struct nodeDeleteResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const nodeDeleteResponse& resp);
};

// function user needs to implement
typedef std::function<nodeDeleteResponse(nodeDeleteParams)> nodeDeleteHandlerFuncType;


// class name NodeApi
struct nodeInspectParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct nodeInspectResponse {
    std::optional<Node> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const nodeInspectResponse& resp);
};

// function user needs to implement
typedef std::function<nodeInspectResponse(nodeInspectParams)> nodeInspectHandlerFuncType;


// class name NodeApi
struct nodeListParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct nodeListResponse {
    std::optional<std::vector<Node>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const nodeListResponse& resp);
};

// function user needs to implement
typedef std::function<nodeListResponse(nodeListParams)> nodeListHandlerFuncType;


// class name NodeApi
struct nodeUpdateParams {
    std::optional<openapi::string_t> id;
    std::optional<int> version;
    std::optional<std::shared_ptr<NodeSpec>> body;
    void ReadParams(IOASClientRequest & req);
};

struct nodeUpdateResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const nodeUpdateResponse& resp);
};

// function user needs to implement
typedef std::function<nodeUpdateResponse(nodeUpdateParams)> nodeUpdateHandlerFuncType;



} // namespace openapi
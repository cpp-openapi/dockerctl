#pragma once

#include "ErrorResponse.h"
#include "ExecConfig.h"
#include "ExecInspectResponse.h"
#include "ExecStartConfig.h"
#include "IdResponse.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name ExecApi
struct containerExecParams {
    std::optional<openapi::string_t> id;
    std::optional<std::shared_ptr<ExecConfig>> execConfig;
    void ReadParams(IOASClientRequest & req);
};

struct containerExecResponse {
    std::optional<IdResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerExecResponse& resp);
};

// function user needs to implement
typedef std::function<containerExecResponse(containerExecParams)> containerExecHandlerFuncType;


// class name ExecApi
struct execInspectParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct execInspectResponse {
    std::optional<ExecInspectResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const execInspectResponse& resp);
};

// function user needs to implement
typedef std::function<execInspectResponse(execInspectParams)> execInspectHandlerFuncType;


// class name ExecApi
struct execResizeParams {
    std::optional<openapi::string_t> id;
    std::optional<int> h;
    std::optional<int> w;
    void ReadParams(IOASClientRequest & req);
};

struct execResizeResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const execResizeResponse& resp);
};

// function user needs to implement
typedef std::function<execResizeResponse(execResizeParams)> execResizeHandlerFuncType;


// class name ExecApi
struct execStartParams {
    std::optional<openapi::string_t> id;
    std::optional<std::shared_ptr<ExecStartConfig>> execStartConfig;
    void ReadParams(IOASClientRequest & req);
};

struct execStartResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const execStartResponse& resp);
};

// function user needs to implement
typedef std::function<execStartResponse(execStartParams)> execStartHandlerFuncType;



} // namespace openapi
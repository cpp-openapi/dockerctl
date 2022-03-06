#pragma once

#include "ErrorResponse.h"
#include "Task.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name TaskApi
struct taskInspectParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct taskInspectResponse {
    std::optional<Task> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const taskInspectResponse& resp);
};

// function user needs to implement
typedef std::function<taskInspectResponse(taskInspectParams)> taskInspectHandlerFuncType;


// class name TaskApi
struct taskListParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct taskListResponse {
    std::optional<std::vector<Task>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const taskListResponse& resp);
};

// function user needs to implement
typedef std::function<taskListResponse(taskListParams)> taskListHandlerFuncType;


// class name TaskApi
struct taskLogsParams {
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

struct taskLogsResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const taskLogsResponse& resp);
};

// function user needs to implement
typedef std::function<taskLogsResponse(taskLogsParams)> taskLogsHandlerFuncType;



} // namespace openapi
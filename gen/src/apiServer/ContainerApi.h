#pragma once

#include "ContainerChangeResponseItem.h"
#include "ContainerConfig.h"
#include "ContainerCreateResponse.h"
#include "ContainerInspectResponse.h"
#include "ContainerPruneResponse.h"
#include "ContainerSummary.h"
#include "ContainerTopResponse.h"
#include "ContainerUpdateResponse.h"
#include "ContainerWaitResponse.h"
#include "ErrorResponse.h"
#include "InlineResponse400.h"
#include "Resources.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name ContainerApi
struct containerArchiveParams {
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> path;
    void ReadParams(IOASClientRequest & req);
};

struct containerArchiveResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerArchiveResponse& resp);
};

// function user needs to implement
typedef std::function<containerArchiveResponse(containerArchiveParams)> containerArchiveHandlerFuncType;


// class name ContainerApi
struct containerArchiveInfoParams {
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> path;
    void ReadParams(IOASClientRequest & req);
};

struct containerArchiveInfoResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerArchiveInfoResponse& resp);
};

// function user needs to implement
typedef std::function<containerArchiveInfoResponse(containerArchiveInfoParams)> containerArchiveInfoHandlerFuncType;


// class name ContainerApi
struct containerAttachParams {
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> detachKeys;
    std::optional<bool> logs;
    std::optional<bool> stream;
    std::optional<bool> stdin;
    std::optional<bool> stdout;
    std::optional<bool> stderr;
    void ReadParams(IOASClientRequest & req);
};

struct containerAttachResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerAttachResponse& resp);
};

// function user needs to implement
typedef std::function<containerAttachResponse(containerAttachParams)> containerAttachHandlerFuncType;


// class name ContainerApi
struct containerAttachWebsocketParams {
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> detachKeys;
    std::optional<bool> logs;
    std::optional<bool> stream;
    std::optional<bool> stdin;
    std::optional<bool> stdout;
    std::optional<bool> stderr;
    void ReadParams(IOASClientRequest & req);
};

struct containerAttachWebsocketResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerAttachWebsocketResponse& resp);
};

// function user needs to implement
typedef std::function<containerAttachWebsocketResponse(containerAttachWebsocketParams)> containerAttachWebsocketHandlerFuncType;


// class name ContainerApi
struct containerChangesParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct containerChangesResponse {
    std::optional<std::vector<ContainerChangeResponseItem>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerChangesResponse& resp);
};

// function user needs to implement
typedef std::function<containerChangesResponse(containerChangesParams)> containerChangesHandlerFuncType;


// class name ContainerApi
struct containerCreateParams {
    std::optional<openapi::string_t> name;
    std::optional<std::shared_ptr<ContainerConfig>> body;
    void ReadParams(IOASClientRequest & req);
};

struct containerCreateResponse {
    std::optional<ContainerCreateResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerCreateResponse& resp);
};

// function user needs to implement
typedef std::function<containerCreateResponse(containerCreateParams)> containerCreateHandlerFuncType;


// class name ContainerApi
struct containerDeleteParams {
    std::optional<openapi::string_t> id;
    std::optional<bool> v;
    std::optional<bool> force;
    std::optional<bool> link;
    void ReadParams(IOASClientRequest & req);
};

struct containerDeleteResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerDeleteResponse& resp);
};

// function user needs to implement
typedef std::function<containerDeleteResponse(containerDeleteParams)> containerDeleteHandlerFuncType;


// class name ContainerApi
struct containerExportParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct containerExportResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerExportResponse& resp);
};

// function user needs to implement
typedef std::function<containerExportResponse(containerExportParams)> containerExportHandlerFuncType;


// class name ContainerApi
struct containerInspectParams {
    std::optional<openapi::string_t> id;
    std::optional<bool> size;
    void ReadParams(IOASClientRequest & req);
};

struct containerInspectResponse {
    std::optional<ContainerInspectResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerInspectResponse& resp);
};

// function user needs to implement
typedef std::function<containerInspectResponse(containerInspectParams)> containerInspectHandlerFuncType;


// class name ContainerApi
struct containerKillParams {
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> signal;
    void ReadParams(IOASClientRequest & req);
};

struct containerKillResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerKillResponse& resp);
};

// function user needs to implement
typedef std::function<containerKillResponse(containerKillParams)> containerKillHandlerFuncType;


// class name ContainerApi
struct containerListParams {
    std::optional<bool> all;
    std::optional<int> limit;
    std::optional<bool> size;
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct containerListResponse {
    std::optional<std::vector<ContainerSummary>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerListResponse& resp);
};

// function user needs to implement
typedef std::function<containerListResponse(containerListParams)> containerListHandlerFuncType;


// class name ContainerApi
struct containerLogsParams {
    std::optional<openapi::string_t> id;
    std::optional<bool> follow;
    std::optional<bool> stdout;
    std::optional<bool> stderr;
    std::optional<int> since;
    std::optional<int> until;
    std::optional<bool> timestamps;
    std::optional<openapi::string_t> tail;
    void ReadParams(IOASClientRequest & req);
};

struct containerLogsResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerLogsResponse& resp);
};

// function user needs to implement
typedef std::function<containerLogsResponse(containerLogsParams)> containerLogsHandlerFuncType;


// class name ContainerApi
struct containerPauseParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct containerPauseResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerPauseResponse& resp);
};

// function user needs to implement
typedef std::function<containerPauseResponse(containerPauseParams)> containerPauseHandlerFuncType;


// class name ContainerApi
struct containerPruneParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct containerPruneResponse {
    std::optional<ContainerPruneResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerPruneResponse& resp);
};

// function user needs to implement
typedef std::function<containerPruneResponse(containerPruneParams)> containerPruneHandlerFuncType;


// class name ContainerApi
struct containerRenameParams {
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> name;
    void ReadParams(IOASClientRequest & req);
};

struct containerRenameResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerRenameResponse& resp);
};

// function user needs to implement
typedef std::function<containerRenameResponse(containerRenameParams)> containerRenameHandlerFuncType;


// class name ContainerApi
struct containerResizeParams {
    std::optional<openapi::string_t> id;
    std::optional<int> h;
    std::optional<int> w;
    void ReadParams(IOASClientRequest & req);
};

struct containerResizeResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerResizeResponse& resp);
};

// function user needs to implement
typedef std::function<containerResizeResponse(containerResizeParams)> containerResizeHandlerFuncType;


// class name ContainerApi
struct containerRestartParams {
    std::optional<openapi::string_t> id;
    std::optional<int> t;
    void ReadParams(IOASClientRequest & req);
};

struct containerRestartResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerRestartResponse& resp);
};

// function user needs to implement
typedef std::function<containerRestartResponse(containerRestartParams)> containerRestartHandlerFuncType;


// class name ContainerApi
struct containerStartParams {
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> detachKeys;
    void ReadParams(IOASClientRequest & req);
};

struct containerStartResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerStartResponse& resp);
};

// function user needs to implement
typedef std::function<containerStartResponse(containerStartParams)> containerStartHandlerFuncType;


// class name ContainerApi
struct containerStatsParams {
    std::optional<openapi::string_t> id;
    std::optional<bool> stream;
    std::optional<bool> oneShot;
    void ReadParams(IOASClientRequest & req);
};

struct containerStatsResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerStatsResponse& resp);
};

// function user needs to implement
typedef std::function<containerStatsResponse(containerStatsParams)> containerStatsHandlerFuncType;


// class name ContainerApi
struct containerStopParams {
    std::optional<openapi::string_t> id;
    std::optional<int> t;
    void ReadParams(IOASClientRequest & req);
};

struct containerStopResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerStopResponse& resp);
};

// function user needs to implement
typedef std::function<containerStopResponse(containerStopParams)> containerStopHandlerFuncType;


// class name ContainerApi
struct containerTopParams {
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> psArgs;
    void ReadParams(IOASClientRequest & req);
};

struct containerTopResponse {
    std::optional<ContainerTopResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerTopResponse& resp);
};

// function user needs to implement
typedef std::function<containerTopResponse(containerTopParams)> containerTopHandlerFuncType;


// class name ContainerApi
struct containerUnpauseParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct containerUnpauseResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerUnpauseResponse& resp);
};

// function user needs to implement
typedef std::function<containerUnpauseResponse(containerUnpauseParams)> containerUnpauseHandlerFuncType;


// class name ContainerApi
struct containerUpdateParams {
    std::optional<openapi::string_t> id;
    std::optional<std::shared_ptr<Resources>> update;
    void ReadParams(IOASClientRequest & req);
};

struct containerUpdateResponse {
    std::optional<ContainerUpdateResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerUpdateResponse& resp);
};

// function user needs to implement
typedef std::function<containerUpdateResponse(containerUpdateParams)> containerUpdateHandlerFuncType;


// class name ContainerApi
struct containerWaitParams {
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> condition;
    void ReadParams(IOASClientRequest & req);
};

struct containerWaitResponse {
    std::optional<ContainerWaitResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const containerWaitResponse& resp);
};

// function user needs to implement
typedef std::function<containerWaitResponse(containerWaitParams)> containerWaitHandlerFuncType;


// class name ContainerApi
struct putContainerArchiveParams {
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> path;
    std::optional<openapi::string_t> inputStream;
    std::optional<openapi::string_t> noOverwriteDirNonDir;
    std::optional<openapi::string_t> copyUIDGID;
    void ReadParams(IOASClientRequest & req);
};

struct putContainerArchiveResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const putContainerArchiveResponse& resp);
};

// function user needs to implement
typedef std::function<putContainerArchiveResponse(putContainerArchiveParams)> putContainerArchiveHandlerFuncType;



} // namespace openapi
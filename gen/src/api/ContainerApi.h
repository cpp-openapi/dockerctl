#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
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


namespace openapi {


// class name ContainerApi


struct containerArchiveParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> path;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerArchiveResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerArchiveResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerArchiveResponse& resp);

struct containerArchiveInfoParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> path;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerArchiveInfoResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerArchiveInfoResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerArchiveInfoResponse& resp);

struct containerAttachParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> detachKeys;
    std::optional<bool> logs;
    std::optional<bool> stream;
    std::optional<bool> stdin;
    std::optional<bool> stdout;
    std::optional<bool> stderr;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerAttachResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerAttachResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerAttachResponse& resp);

struct containerAttachWebsocketParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> detachKeys;
    std::optional<bool> logs;
    std::optional<bool> stream;
    std::optional<bool> stdin;
    std::optional<bool> stdout;
    std::optional<bool> stderr;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerAttachWebsocketResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerAttachWebsocketResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerAttachWebsocketResponse& resp);

struct containerChangesParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerChangesResponse {
    std::optional<std::vector<ContainerChangeResponseItem>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerChangesResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerChangesResponse& resp);

struct containerCreateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    std::optional<std::shared_ptr<ContainerConfig>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerCreateResponse {
    std::optional<ContainerCreateResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerCreateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerCreateResponse& resp);

struct containerDeleteParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<bool> v;
    std::optional<bool> force;
    std::optional<bool> link;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerDeleteResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerDeleteResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerDeleteResponse& resp);

struct containerExportParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerExportResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerExportResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerExportResponse& resp);

struct containerInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<bool> size;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerInspectResponse {
    std::optional<ContainerInspectResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerInspectResponse& resp);

struct containerKillParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> signal;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerKillResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerKillResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerKillResponse& resp);

struct containerListParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<bool> all;
    std::optional<int> limit;
    std::optional<bool> size;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerListResponse {
    std::optional<std::vector<ContainerSummary>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerListResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerListResponse& resp);

struct containerLogsParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<bool> follow;
    std::optional<bool> stdout;
    std::optional<bool> stderr;
    std::optional<int> since;
    std::optional<int> until;
    std::optional<bool> timestamps;
    std::optional<openapi::string_t> tail;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerLogsResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerLogsResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerLogsResponse& resp);

struct containerPauseParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerPauseResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerPauseResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerPauseResponse& resp);

struct containerPruneParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerPruneResponse {
    std::optional<ContainerPruneResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerPruneResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerPruneResponse& resp);

struct containerRenameParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> name;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerRenameResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerRenameResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerRenameResponse& resp);

struct containerResizeParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<int> h;
    std::optional<int> w;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerResizeResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerResizeResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerResizeResponse& resp);

struct containerRestartParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<int> t;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerRestartResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerRestartResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerRestartResponse& resp);

struct containerStartParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> detachKeys;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerStartResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerStartResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerStartResponse& resp);

struct containerStatsParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<bool> stream;
    std::optional<bool> oneShot;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerStatsResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerStatsResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerStatsResponse& resp);

struct containerStopParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<int> t;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerStopResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerStopResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerStopResponse& resp);

struct containerTopParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> psArgs;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerTopResponse {
    std::optional<ContainerTopResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerTopResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerTopResponse& resp);

struct containerUnpauseParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerUnpauseResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerUnpauseResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerUnpauseResponse& resp);

struct containerUpdateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<std::shared_ptr<Resources>> update;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerUpdateResponse {
    std::optional<ContainerUpdateResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerUpdateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerUpdateResponse& resp);

struct containerWaitParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> condition;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerWaitResponse {
    std::optional<ContainerWaitResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerWaitResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerWaitResponse& resp);

struct putContainerArchiveParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> path;
    std::optional<openapi::string_t> inputStream;
    std::optional<openapi::string_t> noOverwriteDirNonDir;
    std::optional<openapi::string_t> copyUIDGID;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct putContainerArchiveResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const putContainerArchiveResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const putContainerArchiveResponse& resp);

class ContainerApiService{
public:
    ContainerApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    containerArchiveResponse containerArchive(containerArchiveParams params);
    containerArchiveInfoResponse containerArchiveInfo(containerArchiveInfoParams params);
    containerAttachResponse containerAttach(containerAttachParams params);
    containerAttachWebsocketResponse containerAttachWebsocket(containerAttachWebsocketParams params);
    containerChangesResponse containerChanges(containerChangesParams params);
    containerCreateResponse containerCreate(containerCreateParams params);
    containerDeleteResponse containerDelete(containerDeleteParams params);
    containerExportResponse containerExport(containerExportParams params);
    containerInspectResponse containerInspect(containerInspectParams params);
    containerKillResponse containerKill(containerKillParams params);
    containerListResponse containerList(containerListParams params);
    containerLogsResponse containerLogs(containerLogsParams params);
    containerPauseResponse containerPause(containerPauseParams params);
    containerPruneResponse containerPrune(containerPruneParams params);
    containerRenameResponse containerRename(containerRenameParams params);
    containerResizeResponse containerResize(containerResizeParams params);
    containerRestartResponse containerRestart(containerRestartParams params);
    containerStartResponse containerStart(containerStartParams params);
    containerStatsResponse containerStats(containerStatsParams params);
    containerStopResponse containerStop(containerStopParams params);
    containerTopResponse containerTop(containerTopParams params);
    containerUnpauseResponse containerUnpause(containerUnpauseParams params);
    containerUpdateResponse containerUpdate(containerUpdateParams params);
    containerWaitResponse containerWait(containerWaitParams params);
    putContainerArchiveResponse putContainerArchive(putContainerArchiveParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi
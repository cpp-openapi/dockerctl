#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "ErrorResponse.h"
#include "Task.h"


namespace openapi {


// class name TaskApi


struct taskInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct taskInspectResponse {
    std::optional<Task> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const taskInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const taskInspectResponse& resp);

struct taskListParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct taskListResponse {
    std::optional<std::vector<Task>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const taskListResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const taskListResponse& resp);

struct taskLogsParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<bool> details;
    std::optional<bool> follow;
    std::optional<bool> stdout;
    std::optional<bool> stderr;
    std::optional<int> since;
    std::optional<bool> timestamps;
    std::optional<openapi::string_t> tail;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct taskLogsResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const taskLogsResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const taskLogsResponse& resp);

class TaskApiService{
public:
    TaskApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    taskInspectResponse taskInspect(taskInspectParams params);
    taskListResponse taskList(taskListParams params);
    taskLogsResponse taskLogs(taskLogsParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi
#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "ErrorResponse.h"
#include "ExecConfig.h"
#include "ExecInspectResponse.h"
#include "ExecStartConfig.h"
#include "IdResponse.h"


namespace openapi {


// class name ExecApi


struct containerExecParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<std::shared_ptr<ExecConfig>> execConfig;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct containerExecResponse {
    std::optional<IdResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const containerExecResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const containerExecResponse& resp);

struct execInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct execInspectResponse {
    std::optional<ExecInspectResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const execInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const execInspectResponse& resp);

struct execResizeParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<int> h;
    std::optional<int> w;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct execResizeResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const execResizeResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const execResizeResponse& resp);

struct execStartParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<std::shared_ptr<ExecStartConfig>> execStartConfig;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct execStartResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const execStartResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const execStartResponse& resp);

class ExecApiService{
public:
    ExecApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    containerExecResponse containerExec(containerExecParams params);
    execInspectResponse execInspect(execInspectParams params);
    execResizeResponse execResize(execResizeParams params);
    execStartResponse execStart(execStartParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi
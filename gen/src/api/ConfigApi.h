#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "Config.h"
#include "ConfigSpec.h"
#include "ErrorResponse.h"
#include "IdResponse.h"


namespace openapi {


// class name ConfigApi


struct configCreateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::shared_ptr<ConfigSpec>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct configCreateResponse {
    std::optional<IdResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const configCreateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const configCreateResponse& resp);

struct configDeleteParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct configDeleteResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const configDeleteResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const configDeleteResponse& resp);

struct configInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct configInspectResponse {
    std::optional<Config> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const configInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const configInspectResponse& resp);

struct configListParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct configListResponse {
    std::optional<std::vector<Config>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const configListResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const configListResponse& resp);

struct configUpdateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<int> version;
    std::optional<std::shared_ptr<ConfigSpec>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct configUpdateResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const configUpdateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const configUpdateResponse& resp);

class ConfigApiService{
public:
    ConfigApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    configCreateResponse configCreate(configCreateParams params);
    configDeleteResponse configDelete(configDeleteParams params);
    configInspectResponse configInspect(configInspectParams params);
    configListResponse configList(configListParams params);
    configUpdateResponse configUpdate(configUpdateParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi
#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "ErrorResponse.h"
#include "Plugin.h"
#include "PluginPrivilege.h"

#include <vector>

namespace openapi {


// class name PluginApi


struct getPluginPrivilegesParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> remote;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct getPluginPrivilegesResponse {
    std::optional<std::vector<PluginPrivilege>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const getPluginPrivilegesResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const getPluginPrivilegesResponse& resp);

struct pluginCreateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> tarContext;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct pluginCreateResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const pluginCreateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const pluginCreateResponse& resp);

struct pluginDeleteParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    std::optional<bool> force;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct pluginDeleteResponse {
    std::optional<Plugin> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const pluginDeleteResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const pluginDeleteResponse& resp);

struct pluginDisableParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct pluginDisableResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const pluginDisableResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const pluginDisableResponse& resp);

struct pluginEnableParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    std::optional<int> timeout;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct pluginEnableResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const pluginEnableResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const pluginEnableResponse& resp);

struct pluginInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct pluginInspectResponse {
    std::optional<Plugin> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const pluginInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const pluginInspectResponse& resp);

struct pluginListParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct pluginListResponse {
    std::optional<std::vector<Plugin>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const pluginListResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const pluginListResponse& resp);

struct pluginPullParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> remote;
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> xRegistryAuth;
    std::optional<std::vector<PluginPrivilege>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct pluginPullResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const pluginPullResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const pluginPullResponse& resp);

struct pluginPushParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct pluginPushResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const pluginPushResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const pluginPushResponse& resp);

struct pluginSetParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    std::optional<std::vector<openapi::string_t>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct pluginSetResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const pluginSetResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const pluginSetResponse& resp);

struct pluginUpgradeParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> remote;
    std::optional<openapi::string_t> xRegistryAuth;
    std::optional<std::vector<PluginPrivilege>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct pluginUpgradeResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const pluginUpgradeResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const pluginUpgradeResponse& resp);

class PluginApiService{
public:
    PluginApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    getPluginPrivilegesResponse getPluginPrivileges(getPluginPrivilegesParams params);
    pluginCreateResponse pluginCreate(pluginCreateParams params);
    pluginDeleteResponse pluginDelete(pluginDeleteParams params);
    pluginDisableResponse pluginDisable(pluginDisableParams params);
    pluginEnableResponse pluginEnable(pluginEnableParams params);
    pluginInspectResponse pluginInspect(pluginInspectParams params);
    pluginListResponse pluginList(pluginListParams params);
    pluginPullResponse pluginPull(pluginPullParams params);
    pluginPushResponse pluginPush(pluginPushParams params);
    pluginSetResponse pluginSet(pluginSetParams params);
    pluginUpgradeResponse pluginUpgrade(pluginUpgradeParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi
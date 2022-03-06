#pragma once

#include "ErrorResponse.h"
#include "Plugin.h"
#include "PluginPrivilege.h"

#include <vector>

#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name PluginApi
struct getPluginPrivilegesParams {
    std::optional<openapi::string_t> remote;
    void ReadParams(IOASClientRequest & req);
};

struct getPluginPrivilegesResponse {
    std::optional<std::vector<PluginPrivilege>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const getPluginPrivilegesResponse& resp);
};

// function user needs to implement
typedef std::function<getPluginPrivilegesResponse(getPluginPrivilegesParams)> getPluginPrivilegesHandlerFuncType;


// class name PluginApi
struct pluginCreateParams {
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> tarContext;
    void ReadParams(IOASClientRequest & req);
};

struct pluginCreateResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const pluginCreateResponse& resp);
};

// function user needs to implement
typedef std::function<pluginCreateResponse(pluginCreateParams)> pluginCreateHandlerFuncType;


// class name PluginApi
struct pluginDeleteParams {
    std::optional<openapi::string_t> name;
    std::optional<bool> force;
    void ReadParams(IOASClientRequest & req);
};

struct pluginDeleteResponse {
    std::optional<Plugin> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const pluginDeleteResponse& resp);
};

// function user needs to implement
typedef std::function<pluginDeleteResponse(pluginDeleteParams)> pluginDeleteHandlerFuncType;


// class name PluginApi
struct pluginDisableParams {
    std::optional<openapi::string_t> name;
    void ReadParams(IOASClientRequest & req);
};

struct pluginDisableResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const pluginDisableResponse& resp);
};

// function user needs to implement
typedef std::function<pluginDisableResponse(pluginDisableParams)> pluginDisableHandlerFuncType;


// class name PluginApi
struct pluginEnableParams {
    std::optional<openapi::string_t> name;
    std::optional<int> timeout;
    void ReadParams(IOASClientRequest & req);
};

struct pluginEnableResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const pluginEnableResponse& resp);
};

// function user needs to implement
typedef std::function<pluginEnableResponse(pluginEnableParams)> pluginEnableHandlerFuncType;


// class name PluginApi
struct pluginInspectParams {
    std::optional<openapi::string_t> name;
    void ReadParams(IOASClientRequest & req);
};

struct pluginInspectResponse {
    std::optional<Plugin> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const pluginInspectResponse& resp);
};

// function user needs to implement
typedef std::function<pluginInspectResponse(pluginInspectParams)> pluginInspectHandlerFuncType;


// class name PluginApi
struct pluginListParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct pluginListResponse {
    std::optional<std::vector<Plugin>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const pluginListResponse& resp);
};

// function user needs to implement
typedef std::function<pluginListResponse(pluginListParams)> pluginListHandlerFuncType;


// class name PluginApi
struct pluginPullParams {
    std::optional<openapi::string_t> remote;
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> xRegistryAuth;
    std::optional<std::vector<PluginPrivilege>> body;
    void ReadParams(IOASClientRequest & req);
};

struct pluginPullResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const pluginPullResponse& resp);
};

// function user needs to implement
typedef std::function<pluginPullResponse(pluginPullParams)> pluginPullHandlerFuncType;


// class name PluginApi
struct pluginPushParams {
    std::optional<openapi::string_t> name;
    void ReadParams(IOASClientRequest & req);
};

struct pluginPushResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const pluginPushResponse& resp);
};

// function user needs to implement
typedef std::function<pluginPushResponse(pluginPushParams)> pluginPushHandlerFuncType;


// class name PluginApi
struct pluginSetParams {
    std::optional<openapi::string_t> name;
    std::optional<std::vector<openapi::string_t>> body;
    void ReadParams(IOASClientRequest & req);
};

struct pluginSetResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const pluginSetResponse& resp);
};

// function user needs to implement
typedef std::function<pluginSetResponse(pluginSetParams)> pluginSetHandlerFuncType;


// class name PluginApi
struct pluginUpgradeParams {
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> remote;
    std::optional<openapi::string_t> xRegistryAuth;
    std::optional<std::vector<PluginPrivilege>> body;
    void ReadParams(IOASClientRequest & req);
};

struct pluginUpgradeResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const pluginUpgradeResponse& resp);
};

// function user needs to implement
typedef std::function<pluginUpgradeResponse(pluginUpgradeParams)> pluginUpgradeHandlerFuncType;



} // namespace openapi
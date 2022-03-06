#pragma once

#include "AuthConfig.h"
#include "ErrorResponse.h"
#include "EventMessage.h"
#include "SystemAuthResponse.h"
#include "SystemDataUsageResponse.h"
#include "SystemInfo.h"
#include "SystemVersion.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name SystemApi
struct systemAuthParams {
    std::optional<std::shared_ptr<AuthConfig>> authConfig;
    void ReadParams(IOASClientRequest & req);
};

struct systemAuthResponse {
    std::optional<SystemAuthResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const systemAuthResponse& resp);
};

// function user needs to implement
typedef std::function<systemAuthResponse(systemAuthParams)> systemAuthHandlerFuncType;


// class name SystemApi
struct systemDataUsageParams {
    std::optional<std::vector<openapi::string_t>> type;
    void ReadParams(IOASClientRequest & req);
};

struct systemDataUsageResponse {
    std::optional<SystemDataUsageResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const systemDataUsageResponse& resp);
};

// function user needs to implement
typedef std::function<systemDataUsageResponse(systemDataUsageParams)> systemDataUsageHandlerFuncType;


// class name SystemApi
struct systemEventsParams {
    std::optional<openapi::string_t> since;
    std::optional<openapi::string_t> until;
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct systemEventsResponse {
    std::optional<EventMessage> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const systemEventsResponse& resp);
};

// function user needs to implement
typedef std::function<systemEventsResponse(systemEventsParams)> systemEventsHandlerFuncType;


// class name SystemApi
struct systemInfoParams {
    void ReadParams(IOASClientRequest & req);
};

struct systemInfoResponse {
    std::optional<SystemInfo> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const systemInfoResponse& resp);
};

// function user needs to implement
typedef std::function<systemInfoResponse(systemInfoParams)> systemInfoHandlerFuncType;


// class name SystemApi
struct systemPingParams {
    void ReadParams(IOASClientRequest & req);
};

struct systemPingResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const systemPingResponse& resp);
};

// function user needs to implement
typedef std::function<systemPingResponse(systemPingParams)> systemPingHandlerFuncType;


// class name SystemApi
struct systemPingHeadParams {
    void ReadParams(IOASClientRequest & req);
};

struct systemPingHeadResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const systemPingHeadResponse& resp);
};

// function user needs to implement
typedef std::function<systemPingHeadResponse(systemPingHeadParams)> systemPingHeadHandlerFuncType;


// class name SystemApi
struct systemVersionParams {
    void ReadParams(IOASClientRequest & req);
};

struct systemVersionResponse {
    std::optional<SystemVersion> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const systemVersionResponse& resp);
};

// function user needs to implement
typedef std::function<systemVersionResponse(systemVersionParams)> systemVersionHandlerFuncType;



} // namespace openapi
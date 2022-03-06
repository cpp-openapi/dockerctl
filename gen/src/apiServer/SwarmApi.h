#pragma once

#include "ErrorResponse.h"
#include "Swarm.h"
#include "SwarmInitRequest.h"
#include "SwarmJoinRequest.h"
#include "SwarmSpec.h"
#include "SwarmUnlockRequest.h"
#include "UnlockKeyResponse.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name SwarmApi
struct swarmInitParams {
    std::optional<std::shared_ptr<SwarmInitRequest>> body;
    void ReadParams(IOASClientRequest & req);
};

struct swarmInitResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const swarmInitResponse& resp);
};

// function user needs to implement
typedef std::function<swarmInitResponse(swarmInitParams)> swarmInitHandlerFuncType;


// class name SwarmApi
struct swarmInspectParams {
    void ReadParams(IOASClientRequest & req);
};

struct swarmInspectResponse {
    std::optional<Swarm> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const swarmInspectResponse& resp);
};

// function user needs to implement
typedef std::function<swarmInspectResponse(swarmInspectParams)> swarmInspectHandlerFuncType;


// class name SwarmApi
struct swarmJoinParams {
    std::optional<std::shared_ptr<SwarmJoinRequest>> body;
    void ReadParams(IOASClientRequest & req);
};

struct swarmJoinResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const swarmJoinResponse& resp);
};

// function user needs to implement
typedef std::function<swarmJoinResponse(swarmJoinParams)> swarmJoinHandlerFuncType;


// class name SwarmApi
struct swarmLeaveParams {
    std::optional<bool> force;
    void ReadParams(IOASClientRequest & req);
};

struct swarmLeaveResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const swarmLeaveResponse& resp);
};

// function user needs to implement
typedef std::function<swarmLeaveResponse(swarmLeaveParams)> swarmLeaveHandlerFuncType;


// class name SwarmApi
struct swarmUnlockParams {
    std::optional<std::shared_ptr<SwarmUnlockRequest>> body;
    void ReadParams(IOASClientRequest & req);
};

struct swarmUnlockResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const swarmUnlockResponse& resp);
};

// function user needs to implement
typedef std::function<swarmUnlockResponse(swarmUnlockParams)> swarmUnlockHandlerFuncType;


// class name SwarmApi
struct swarmUnlockkeyParams {
    void ReadParams(IOASClientRequest & req);
};

struct swarmUnlockkeyResponse {
    std::optional<UnlockKeyResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const swarmUnlockkeyResponse& resp);
};

// function user needs to implement
typedef std::function<swarmUnlockkeyResponse(swarmUnlockkeyParams)> swarmUnlockkeyHandlerFuncType;


// class name SwarmApi
struct swarmUpdateParams {
    std::optional<int> version;
    std::optional<std::shared_ptr<SwarmSpec>> body;
    std::optional<bool> rotateWorkerToken;
    std::optional<bool> rotateManagerToken;
    std::optional<bool> rotateManagerUnlockKey;
    void ReadParams(IOASClientRequest & req);
};

struct swarmUpdateResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const swarmUpdateResponse& resp);
};

// function user needs to implement
typedef std::function<swarmUpdateResponse(swarmUpdateParams)> swarmUpdateHandlerFuncType;



} // namespace openapi
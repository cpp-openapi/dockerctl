#pragma once

#include "ErrorResponse.h"
#include "Volume.h"
#include "VolumeConfig.h"
#include "VolumeListResponse.h"
#include "VolumePruneResponse.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name VolumeApi
struct volumeCreateParams {
    std::optional<std::shared_ptr<VolumeConfig>> volumeConfig;
    void ReadParams(IOASClientRequest & req);
};

struct volumeCreateResponse {
    std::optional<Volume> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const volumeCreateResponse& resp);
};

// function user needs to implement
typedef std::function<volumeCreateResponse(volumeCreateParams)> volumeCreateHandlerFuncType;


// class name VolumeApi
struct volumeDeleteParams {
    std::optional<openapi::string_t> name;
    std::optional<bool> force;
    void ReadParams(IOASClientRequest & req);
};

struct volumeDeleteResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const volumeDeleteResponse& resp);
};

// function user needs to implement
typedef std::function<volumeDeleteResponse(volumeDeleteParams)> volumeDeleteHandlerFuncType;


// class name VolumeApi
struct volumeInspectParams {
    std::optional<openapi::string_t> name;
    void ReadParams(IOASClientRequest & req);
};

struct volumeInspectResponse {
    std::optional<Volume> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const volumeInspectResponse& resp);
};

// function user needs to implement
typedef std::function<volumeInspectResponse(volumeInspectParams)> volumeInspectHandlerFuncType;


// class name VolumeApi
struct volumeListParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct volumeListResponse {
    std::optional<VolumeListResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const volumeListResponse& resp);
};

// function user needs to implement
typedef std::function<volumeListResponse(volumeListParams)> volumeListHandlerFuncType;


// class name VolumeApi
struct volumePruneParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct volumePruneResponse {
    std::optional<VolumePruneResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const volumePruneResponse& resp);
};

// function user needs to implement
typedef std::function<volumePruneResponse(volumePruneParams)> volumePruneHandlerFuncType;



} // namespace openapi
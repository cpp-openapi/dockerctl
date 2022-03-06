#pragma once

#include "ErrorResponse.h"
#include "IdResponse.h"
#include "Secret.h"
#include "SecretSpec.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name SecretApi
struct secretCreateParams {
    std::optional<std::shared_ptr<SecretSpec>> body;
    void ReadParams(IOASClientRequest & req);
};

struct secretCreateResponse {
    std::optional<IdResponse> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const secretCreateResponse& resp);
};

// function user needs to implement
typedef std::function<secretCreateResponse(secretCreateParams)> secretCreateHandlerFuncType;


// class name SecretApi
struct secretDeleteParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct secretDeleteResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const secretDeleteResponse& resp);
};

// function user needs to implement
typedef std::function<secretDeleteResponse(secretDeleteParams)> secretDeleteHandlerFuncType;


// class name SecretApi
struct secretInspectParams {
    std::optional<openapi::string_t> id;
    void ReadParams(IOASClientRequest & req);
};

struct secretInspectResponse {
    std::optional<Secret> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const secretInspectResponse& resp);
};

// function user needs to implement
typedef std::function<secretInspectResponse(secretInspectParams)> secretInspectHandlerFuncType;


// class name SecretApi
struct secretListParams {
    std::optional<openapi::string_t> filters;
    void ReadParams(IOASClientRequest & req);
};

struct secretListResponse {
    std::optional<std::vector<Secret>> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const secretListResponse& resp);
};

// function user needs to implement
typedef std::function<secretListResponse(secretListParams)> secretListHandlerFuncType;


// class name SecretApi
struct secretUpdateParams {
    std::optional<openapi::string_t> id;
    std::optional<int> version;
    std::optional<std::shared_ptr<SecretSpec>> body;
    void ReadParams(IOASClientRequest & req);
};

struct secretUpdateResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const secretUpdateResponse& resp);
};

// function user needs to implement
typedef std::function<secretUpdateResponse(secretUpdateParams)> secretUpdateHandlerFuncType;



} // namespace openapi
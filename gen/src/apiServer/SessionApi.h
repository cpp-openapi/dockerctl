#pragma once

#include "ErrorResponse.h"

#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name SessionApi
struct sessionParams {
    void ReadParams(IOASClientRequest & req);
};

struct sessionResponse {
    // no return type
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const sessionResponse& resp);
};

// function user needs to implement
typedef std::function<sessionResponse(sessionParams)> sessionHandlerFuncType;



} // namespace openapi
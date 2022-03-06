#pragma once

#include "DistributionInspect.h"
#include "ErrorResponse.h"


#include <functional>
#include "openapi/runtime/router.h"


namespace openapi {



// class name DistributionApi
struct distributionInspectParams {
    std::optional<openapi::string_t> name;
    void ReadParams(IOASClientRequest & req);
};

struct distributionInspectResponse {
    std::optional<DistributionInspect> payload;
    int code;
    void WriteResponse(IOASClientResponse & resp);
    // friend std::ostream& operator<<(std::ostream& os, const distributionInspectResponse& resp);
};

// function user needs to implement
typedef std::function<distributionInspectResponse(distributionInspectParams)> distributionInspectHandlerFuncType;



} // namespace openapi
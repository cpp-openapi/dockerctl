/*
 * ContainerWaitResponse.h
 *
 * OK response to ContainerWait operation
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ContainerWaitResponseError.h"

namespace openapi {


/*! \brief OK response to ContainerWait operation
 *
 *  \ingroup Models
 *
 */
struct ContainerWaitResponse{
    std::optional<int> status_code{};
    std::optional<ContainerWaitResponseError> error;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
/*
 * TaskSpecResources.h
 *
 * Resource requirements which apply to each individual container created as part of the service. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "Limit.h"
#include "ResourceObject.h"

namespace openapi {


/*! \brief Resource requirements which apply to each individual container created as part of the service. 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecResources{
    std::optional<Limit> limits;
    std::optional<ResourceObject> reservation;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
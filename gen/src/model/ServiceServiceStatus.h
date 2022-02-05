/*
 * ServiceServiceStatus.h
 *
 * The status of the service&#39;s tasks. Provided only when requested as part of a ServiceList operation. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief The status of the service's tasks. Provided only when requested as part of a ServiceList operation. 
 *
 *  \ingroup Models
 *
 */
struct ServiceServiceStatus{
    std::optional<int> running_tasks{};
    std::optional<int> desired_tasks{};
    std::optional<int> completed_tasks{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
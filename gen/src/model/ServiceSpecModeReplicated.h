/*
 * ServiceSpecModeReplicated.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct ServiceSpecModeReplicated{
    std::optional<int> replicas{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
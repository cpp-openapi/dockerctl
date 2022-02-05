/*
 * ServiceSpecModeReplicated.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

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
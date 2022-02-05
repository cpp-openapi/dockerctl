/*
 * NetworkPruneResponse.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct NetworkPruneResponse{
    // array
    std::vector<openapi::string_t> networks_deleted;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
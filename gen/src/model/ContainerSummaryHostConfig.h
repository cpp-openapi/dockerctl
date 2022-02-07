/*
 * ContainerSummaryHostConfig.h
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
struct ContainerSummaryHostConfig{
    std::optional<openapi::string_t> network_mode;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
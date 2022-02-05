/*
 * ContainerSummaryHostConfig.h
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
struct ContainerSummaryHostConfig{
    std::optional<openapi::string_t> network_mode;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
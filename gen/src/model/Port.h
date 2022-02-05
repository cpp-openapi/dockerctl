/*
 * Port.h
 *
 * An open port on a container
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief An open port on a container
 *
 *  \ingroup Models
 *
 */
struct Port{
    std::optional<openapi::string_t> ip;
    std::optional<int> private_port{};
    std::optional<int> public_port{};
    std::optional<openapi::string_t> type;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
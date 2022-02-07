/*
 * NetworkDisconnectRequest.h
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
struct NetworkDisconnectRequest{
    std::optional<openapi::string_t> container;
    std::optional<bool> force{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
/*
 * ExecStartConfig.h
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
struct ExecStartConfig{
    std::optional<bool> detach{};
    std::optional<bool> tty{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
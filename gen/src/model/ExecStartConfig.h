/*
 * ExecStartConfig.h
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
struct ExecStartConfig{
    std::optional<bool> detach{};
    std::optional<bool> tty{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
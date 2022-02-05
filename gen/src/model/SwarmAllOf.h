/*
 * SwarmAllOf.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "JoinTokens.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct SwarmAllOf{
    std::optional<JoinTokens> join_tokens;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
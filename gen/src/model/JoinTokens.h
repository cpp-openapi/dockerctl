/*
 * JoinTokens.h
 *
 * JoinTokens contains the tokens workers and managers need to join the swarm. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief JoinTokens contains the tokens workers and managers need to join the swarm. 
 *
 *  \ingroup Models
 *
 */
struct JoinTokens{
    std::optional<openapi::string_t> worker;
    std::optional<openapi::string_t> manager;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
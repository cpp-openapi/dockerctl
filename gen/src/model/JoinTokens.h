/*
 * JoinTokens.h
 *
 * JoinTokens contains the tokens workers and managers need to join the swarm. 
 */

#pragma once


#include <optional>
#include "common_json.h"

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
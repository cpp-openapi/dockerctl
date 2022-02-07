/*
 * LocalNodeState.h
 *
 * Current local status of this node.
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Current local status of this node.
 *
 *  \ingroup Models
 *
 */
struct LocalNodeState{
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
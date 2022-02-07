/*
 * DistributionInspect.h
 *
 * Describes the result obtained from contacting the registry to retrieve image metadata. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "OCIDescriptor.h"
#include "OCIPlatform.h"
#include <vector>

namespace openapi {


/*! \brief Describes the result obtained from contacting the registry to retrieve image metadata. 
 *
 *  \ingroup Models
 *
 */
struct DistributionInspect{
    std::optional<OCIDescriptor> descriptor;
    // array
    std::vector<OCIPlatform> platforms;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
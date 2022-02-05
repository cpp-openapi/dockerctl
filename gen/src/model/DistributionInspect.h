/*
 * DistributionInspect.h
 *
 * Describes the result obtained from contacting the registry to retrieve image metadata. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
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
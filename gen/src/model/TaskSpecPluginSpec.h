/*
 * TaskSpecPluginSpec.h
 *
 * Plugin spec for the service.  *(Experimental release only.)*  &lt;p&gt;&lt;br /&gt;&lt;/p&gt;  &gt; **Note**: ContainerSpec, NetworkAttachmentSpec, and PluginSpec are &gt; mutually exclusive. PluginSpec is only used when the Runtime field &gt; is set to &#x60;plugin&#x60;. NetworkAttachmentSpec is used when the Runtime &gt; field is set to &#x60;attachment&#x60;. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "PluginPrivilege.h"
#include <vector>

namespace openapi {


/*! \brief Plugin spec for the service.  *(Experimental release only.)*  <p><br /></p>  > **Note**: ContainerSpec, NetworkAttachmentSpec, and PluginSpec are > mutually exclusive. PluginSpec is only used when the Runtime field > is set to `plugin`. NetworkAttachmentSpec is used when the Runtime > field is set to `attachment`. 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecPluginSpec{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> remote;
    std::optional<bool> disabled{};
    // array
    std::vector<PluginPrivilege> plugin_privilege;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
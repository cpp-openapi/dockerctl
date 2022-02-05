/*
 * EventMessage.h
 *
 * EventMessage represents the information an event contains. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "EventActor.h"

namespace openapi {


/*! \brief EventMessage represents the information an event contains. 
 *
 *  \ingroup Models
 *
 */
struct EventMessage{
    std::optional<openapi::string_t> type;
    std::optional<openapi::string_t> action;
    std::optional<EventActor> actor;
    std::optional<openapi::string_t> scope;
    std::optional<int> time{};
    std::optional<int> time_nano{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}
/*
 * ServiceSpecUpdateConfig.cpp
 *
 * Specification for the update strategy of the service.
 */

#include "ServiceSpecUpdateConfig.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ServiceSpecUpdateConfig, Parallelism, Delay, FailureAction, Monitor, MaxFailureRatio, Order)

void ServiceSpecUpdateConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->parallelism)>(openapi::StringT(OPENAPI_LITERAL(Parallelism)), this->parallelism);
    j.AddMember<decltype(this->delay)>(openapi::StringT(OPENAPI_LITERAL(Delay)), this->delay);
    j.AddMember<decltype(this->failure_action)>(openapi::StringT(OPENAPI_LITERAL(FailureAction)), this->failure_action);
    j.AddMember<decltype(this->monitor)>(openapi::StringT(OPENAPI_LITERAL(Monitor)), this->monitor);
    j.AddMember<decltype(this->max_failure_ratio)>(openapi::StringT(OPENAPI_LITERAL(MaxFailureRatio)), this->max_failure_ratio);
    j.AddMember<decltype(this->order)>(openapi::StringT(OPENAPI_LITERAL(Order)), this->order);
}

void ServiceSpecUpdateConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Parallelism))))
    {
        using V = remove_optional<decltype(this->parallelism)>::type;
        this->parallelism = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Parallelism)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Delay))))
    {
        using V = remove_optional<decltype(this->delay)>::type;
        this->delay = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Delay)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(FailureAction))))
    {
        using V = remove_optional<decltype(this->failure_action)>::type;
        this->failure_action = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(FailureAction)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Monitor))))
    {
        using V = remove_optional<decltype(this->monitor)>::type;
        this->monitor = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Monitor)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MaxFailureRatio))))
    {
        using V = remove_optional<decltype(this->max_failure_ratio)>::type;
        this->max_failure_ratio = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MaxFailureRatio)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Order))))
    {
        using V = remove_optional<decltype(this->order)>::type;
        this->order = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Order)));
    }
}


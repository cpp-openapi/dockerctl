#include "gtest/gtest.h"

#include "EndpointIPAMConfig.h"

TEST(EndpointIPAMConfig, Deserialize)
{
    // TODO: generate test content
    openapi::EndpointIPAMConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
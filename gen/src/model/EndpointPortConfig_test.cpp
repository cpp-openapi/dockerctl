#include "gtest/gtest.h"

#include "EndpointPortConfig.h"

TEST(EndpointPortConfig, Deserialize)
{
    // TODO: generate test content
    openapi::EndpointPortConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
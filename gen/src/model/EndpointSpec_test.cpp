#include "gtest/gtest.h"

#include "EndpointSpec.h"

TEST(EndpointSpec, Deserialize)
{
    // TODO: generate test content
    openapi::EndpointSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
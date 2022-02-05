#include "gtest/gtest.h"

#include "EndpointSettings.h"

TEST(EndpointSettings, Deserialize)
{
    // TODO: generate test content
    openapi::EndpointSettings x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
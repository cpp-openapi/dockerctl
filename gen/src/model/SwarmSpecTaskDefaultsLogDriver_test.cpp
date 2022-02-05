#include "gtest/gtest.h"

#include "SwarmSpecTaskDefaultsLogDriver.h"

TEST(SwarmSpecTaskDefaultsLogDriver, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmSpecTaskDefaultsLogDriver x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
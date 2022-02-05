#include "gtest/gtest.h"

#include "SwarmSpecCAConfig.h"

TEST(SwarmSpecCAConfig, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmSpecCAConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
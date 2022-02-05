#include "gtest/gtest.h"

#include "SwarmInfo.h"

TEST(SwarmInfo, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmInfo x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
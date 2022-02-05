#include "gtest/gtest.h"

#include "HostConfig.h"

TEST(HostConfig, Deserialize)
{
    // TODO: generate test content
    openapi::HostConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "HostConfigAllOfLogConfig.h"

TEST(HostConfigAllOfLogConfig, Deserialize)
{
    // TODO: generate test content
    openapi::HostConfigAllOfLogConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
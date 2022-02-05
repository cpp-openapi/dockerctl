#include "gtest/gtest.h"

#include "SystemInfo.h"

TEST(SystemInfo, Deserialize)
{
    // TODO: generate test content
    openapi::SystemInfo x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
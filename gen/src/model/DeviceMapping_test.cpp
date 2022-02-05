#include "gtest/gtest.h"

#include "DeviceMapping.h"

TEST(DeviceMapping, Deserialize)
{
    // TODO: generate test content
    openapi::DeviceMapping x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
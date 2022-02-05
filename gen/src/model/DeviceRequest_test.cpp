#include "gtest/gtest.h"

#include "DeviceRequest.h"

TEST(DeviceRequest, Deserialize)
{
    // TODO: generate test content
    openapi::DeviceRequest x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
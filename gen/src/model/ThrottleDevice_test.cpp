#include "gtest/gtest.h"

#include "ThrottleDevice.h"

TEST(ThrottleDevice, Deserialize)
{
    // TODO: generate test content
    openapi::ThrottleDevice x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "VolumeConfig.h"

TEST(VolumeConfig, Deserialize)
{
    // TODO: generate test content
    openapi::VolumeConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
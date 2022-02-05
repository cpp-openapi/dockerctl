#include "gtest/gtest.h"

#include "VolumeUsageData.h"

TEST(VolumeUsageData, Deserialize)
{
    // TODO: generate test content
    openapi::VolumeUsageData x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
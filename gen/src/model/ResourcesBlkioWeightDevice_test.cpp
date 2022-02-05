#include "gtest/gtest.h"

#include "ResourcesBlkioWeightDevice.h"

TEST(ResourcesBlkioWeightDevice, Deserialize)
{
    // TODO: generate test content
    openapi::ResourcesBlkioWeightDevice x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
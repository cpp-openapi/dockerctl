#include "gtest/gtest.h"

#include "MountVolumeOptions.h"

TEST(MountVolumeOptions, Deserialize)
{
    // TODO: generate test content
    openapi::MountVolumeOptions x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
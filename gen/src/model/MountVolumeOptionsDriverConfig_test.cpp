#include "gtest/gtest.h"

#include "MountVolumeOptionsDriverConfig.h"

TEST(MountVolumeOptionsDriverConfig, Deserialize)
{
    // TODO: generate test content
    openapi::MountVolumeOptionsDriverConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
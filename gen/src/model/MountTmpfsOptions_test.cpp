#include "gtest/gtest.h"

#include "MountTmpfsOptions.h"

TEST(MountTmpfsOptions, Deserialize)
{
    // TODO: generate test content
    openapi::MountTmpfsOptions x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
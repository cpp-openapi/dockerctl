#include "gtest/gtest.h"

#include "MountPoint.h"

TEST(MountPoint, Deserialize)
{
    // TODO: generate test content
    openapi::MountPoint x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "MountBindOptions.h"

TEST(MountBindOptions, Deserialize)
{
    // TODO: generate test content
    openapi::MountBindOptions x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "ImageRootFS.h"

TEST(ImageRootFS, Deserialize)
{
    // TODO: generate test content
    openapi::ImageRootFS x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
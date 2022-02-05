#include "gtest/gtest.h"

#include "ImageID.h"

TEST(ImageID, Deserialize)
{
    // TODO: generate test content
    openapi::ImageID x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
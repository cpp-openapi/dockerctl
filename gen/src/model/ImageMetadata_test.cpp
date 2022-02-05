#include "gtest/gtest.h"

#include "ImageMetadata.h"

TEST(ImageMetadata, Deserialize)
{
    // TODO: generate test content
    openapi::ImageMetadata x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
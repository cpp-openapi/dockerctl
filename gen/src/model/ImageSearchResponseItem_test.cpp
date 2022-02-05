#include "gtest/gtest.h"

#include "ImageSearchResponseItem.h"

TEST(ImageSearchResponseItem, Deserialize)
{
    // TODO: generate test content
    openapi::ImageSearchResponseItem x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
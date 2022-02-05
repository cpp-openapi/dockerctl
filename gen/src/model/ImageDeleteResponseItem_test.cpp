#include "gtest/gtest.h"

#include "ImageDeleteResponseItem.h"

TEST(ImageDeleteResponseItem, Deserialize)
{
    // TODO: generate test content
    openapi::ImageDeleteResponseItem x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
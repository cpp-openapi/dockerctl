#include "gtest/gtest.h"

#include "Image.h"

TEST(Image, Deserialize)
{
    // TODO: generate test content
    openapi::Image x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
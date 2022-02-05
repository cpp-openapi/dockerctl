#include "gtest/gtest.h"

#include "ImageSummary.h"

TEST(ImageSummary, Deserialize)
{
    // TODO: generate test content
    openapi::ImageSummary x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
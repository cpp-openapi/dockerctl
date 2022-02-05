#include "gtest/gtest.h"

#include "ImagePruneResponse.h"

TEST(ImagePruneResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ImagePruneResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
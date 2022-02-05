#include "gtest/gtest.h"

#include "Resources.h"

TEST(Resources, Deserialize)
{
    // TODO: generate test content
    openapi::Resources x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
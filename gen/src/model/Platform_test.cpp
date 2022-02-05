#include "gtest/gtest.h"

#include "Platform.h"

TEST(Platform, Deserialize)
{
    // TODO: generate test content
    openapi::Platform x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
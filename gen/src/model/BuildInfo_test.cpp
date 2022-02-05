#include "gtest/gtest.h"

#include "BuildInfo.h"

TEST(BuildInfo, Deserialize)
{
    // TODO: generate test content
    openapi::BuildInfo x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "BuildCache.h"

TEST(BuildCache, Deserialize)
{
    // TODO: generate test content
    openapi::BuildCache x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
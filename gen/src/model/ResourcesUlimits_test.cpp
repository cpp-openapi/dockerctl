#include "gtest/gtest.h"

#include "ResourcesUlimits.h"

TEST(ResourcesUlimits, Deserialize)
{
    // TODO: generate test content
    openapi::ResourcesUlimits x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
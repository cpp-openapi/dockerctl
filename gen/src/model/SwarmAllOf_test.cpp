#include "gtest/gtest.h"

#include "SwarmAllOf.h"

TEST(SwarmAllOf, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmAllOf x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
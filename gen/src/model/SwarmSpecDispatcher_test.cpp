#include "gtest/gtest.h"

#include "SwarmSpecDispatcher.h"

TEST(SwarmSpecDispatcher, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmSpecDispatcher x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "SwarmSpecTaskDefaults.h"

TEST(SwarmSpecTaskDefaults, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmSpecTaskDefaults x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
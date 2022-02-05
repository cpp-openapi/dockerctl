#include "gtest/gtest.h"

#include "SwarmSpecOrchestration.h"

TEST(SwarmSpecOrchestration, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmSpecOrchestration x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "TaskSpecContainerSpecConfigs.h"

TEST(TaskSpecContainerSpecConfigs, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecContainerSpecConfigs x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
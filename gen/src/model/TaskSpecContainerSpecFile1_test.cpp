#include "gtest/gtest.h"

#include "TaskSpecContainerSpecFile1.h"

TEST(TaskSpecContainerSpecFile1, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecContainerSpecFile1 x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
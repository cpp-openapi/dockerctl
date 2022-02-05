#include "gtest/gtest.h"

#include "TaskSpecContainerSpecFile.h"

TEST(TaskSpecContainerSpecFile, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecContainerSpecFile x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
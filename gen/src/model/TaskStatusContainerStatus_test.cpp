#include "gtest/gtest.h"

#include "TaskStatusContainerStatus.h"

TEST(TaskStatusContainerStatus, Deserialize)
{
    // TODO: generate test content
    openapi::TaskStatusContainerStatus x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
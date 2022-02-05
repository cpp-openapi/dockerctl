#include "gtest/gtest.h"

#include "TaskStatus.h"

TEST(TaskStatus, Deserialize)
{
    // TODO: generate test content
    openapi::TaskStatus x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
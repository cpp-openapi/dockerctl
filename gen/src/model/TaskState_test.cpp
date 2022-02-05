#include "gtest/gtest.h"

#include "TaskState.h"

TEST(TaskState, Deserialize)
{
    // TODO: generate test content
    openapi::TaskState x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
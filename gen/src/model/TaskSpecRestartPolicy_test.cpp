#include "gtest/gtest.h"

#include "TaskSpecRestartPolicy.h"

TEST(TaskSpecRestartPolicy, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecRestartPolicy x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
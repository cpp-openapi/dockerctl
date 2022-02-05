#include "gtest/gtest.h"

#include "TaskSpec.h"

TEST(TaskSpec, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
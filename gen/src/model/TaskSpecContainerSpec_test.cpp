#include "gtest/gtest.h"

#include "TaskSpecContainerSpec.h"

TEST(TaskSpecContainerSpec, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecContainerSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
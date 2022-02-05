#include "gtest/gtest.h"

#include "TaskSpecResources.h"

TEST(TaskSpecResources, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecResources x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
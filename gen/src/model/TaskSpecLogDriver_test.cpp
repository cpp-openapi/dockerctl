#include "gtest/gtest.h"

#include "TaskSpecLogDriver.h"

TEST(TaskSpecLogDriver, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecLogDriver x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
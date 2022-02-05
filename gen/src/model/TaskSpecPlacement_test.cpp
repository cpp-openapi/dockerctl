#include "gtest/gtest.h"

#include "TaskSpecPlacement.h"

TEST(TaskSpecPlacement, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecPlacement x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
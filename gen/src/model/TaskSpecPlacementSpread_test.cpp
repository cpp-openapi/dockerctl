#include "gtest/gtest.h"

#include "TaskSpecPlacementSpread.h"

TEST(TaskSpecPlacementSpread, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecPlacementSpread x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
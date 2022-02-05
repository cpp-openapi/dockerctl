#include "gtest/gtest.h"

#include "TaskSpecPlacementPreferences.h"

TEST(TaskSpecPlacementPreferences, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecPlacementPreferences x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
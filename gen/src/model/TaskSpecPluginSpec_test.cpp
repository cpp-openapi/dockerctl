#include "gtest/gtest.h"

#include "TaskSpecPluginSpec.h"

TEST(TaskSpecPluginSpec, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecPluginSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
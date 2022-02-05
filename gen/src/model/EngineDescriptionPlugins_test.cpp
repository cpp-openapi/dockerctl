#include "gtest/gtest.h"

#include "EngineDescriptionPlugins.h"

TEST(EngineDescriptionPlugins, Deserialize)
{
    // TODO: generate test content
    openapi::EngineDescriptionPlugins x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
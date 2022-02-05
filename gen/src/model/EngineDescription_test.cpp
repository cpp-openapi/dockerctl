#include "gtest/gtest.h"

#include "EngineDescription.h"

TEST(EngineDescription, Deserialize)
{
    // TODO: generate test content
    openapi::EngineDescription x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
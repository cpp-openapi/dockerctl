#include "gtest/gtest.h"

#include "NodeSpec.h"

TEST(NodeSpec, Deserialize)
{
    // TODO: generate test content
    openapi::NodeSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
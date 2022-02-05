#include "gtest/gtest.h"

#include "NodeState.h"

TEST(NodeState, Deserialize)
{
    // TODO: generate test content
    openapi::NodeState x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
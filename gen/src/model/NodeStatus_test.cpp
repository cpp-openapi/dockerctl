#include "gtest/gtest.h"

#include "NodeStatus.h"

TEST(NodeStatus, Deserialize)
{
    // TODO: generate test content
    openapi::NodeStatus x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
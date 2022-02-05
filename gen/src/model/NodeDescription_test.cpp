#include "gtest/gtest.h"

#include "NodeDescription.h"

TEST(NodeDescription, Deserialize)
{
    // TODO: generate test content
    openapi::NodeDescription x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
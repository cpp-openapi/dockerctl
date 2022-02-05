#include "gtest/gtest.h"

#include "Node.h"

TEST(Node, Deserialize)
{
    // TODO: generate test content
    openapi::Node x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
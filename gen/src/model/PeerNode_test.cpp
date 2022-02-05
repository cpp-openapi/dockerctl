#include "gtest/gtest.h"

#include "PeerNode.h"

TEST(PeerNode, Deserialize)
{
    // TODO: generate test content
    openapi::PeerNode x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
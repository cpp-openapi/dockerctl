#include "gtest/gtest.h"

#include "LocalNodeState.h"

TEST(LocalNodeState, Deserialize)
{
    // TODO: generate test content
    openapi::LocalNodeState x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "ClusterInfo.h"

TEST(ClusterInfo, Deserialize)
{
    // TODO: generate test content
    openapi::ClusterInfo x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
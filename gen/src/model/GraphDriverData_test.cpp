#include "gtest/gtest.h"

#include "GraphDriverData.h"

TEST(GraphDriverData, Deserialize)
{
    // TODO: generate test content
    openapi::GraphDriverData x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
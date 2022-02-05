#include "gtest/gtest.h"

#include "IndexInfo.h"

TEST(IndexInfo, Deserialize)
{
    // TODO: generate test content
    openapi::IndexInfo x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
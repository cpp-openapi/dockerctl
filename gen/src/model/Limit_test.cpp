#include "gtest/gtest.h"

#include "Limit.h"

TEST(Limit, Deserialize)
{
    // TODO: generate test content
    openapi::Limit x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
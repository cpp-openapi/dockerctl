#include "gtest/gtest.h"

#include "InlineResponse400.h"

TEST(InlineResponse400, Deserialize)
{
    // TODO: generate test content
    openapi::InlineResponse400 x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "JoinTokens.h"

TEST(JoinTokens, Deserialize)
{
    // TODO: generate test content
    openapi::JoinTokens x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
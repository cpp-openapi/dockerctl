#include "gtest/gtest.h"

#include "Commit.h"

TEST(Commit, Deserialize)
{
    // TODO: generate test content
    openapi::Commit x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
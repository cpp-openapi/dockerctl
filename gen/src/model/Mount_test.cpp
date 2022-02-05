#include "gtest/gtest.h"

#include "Mount.h"

TEST(Mount, Deserialize)
{
    // TODO: generate test content
    openapi::Mount x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "OCIPlatform.h"

TEST(OCIPlatform, Deserialize)
{
    // TODO: generate test content
    openapi::OCIPlatform x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
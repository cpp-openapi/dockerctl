#include "gtest/gtest.h"

#include "Runtime.h"

TEST(Runtime, Deserialize)
{
    // TODO: generate test content
    openapi::Runtime x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
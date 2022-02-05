#include "gtest/gtest.h"

#include "PushImageInfo.h"

TEST(PushImageInfo, Deserialize)
{
    // TODO: generate test content
    openapi::PushImageInfo x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
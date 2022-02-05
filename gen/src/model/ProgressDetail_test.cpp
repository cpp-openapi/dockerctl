#include "gtest/gtest.h"

#include "ProgressDetail.h"

TEST(ProgressDetail, Deserialize)
{
    // TODO: generate test content
    openapi::ProgressDetail x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
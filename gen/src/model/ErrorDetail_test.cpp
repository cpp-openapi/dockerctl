#include "gtest/gtest.h"

#include "ErrorDetail.h"

TEST(ErrorDetail, Deserialize)
{
    // TODO: generate test content
    openapi::ErrorDetail x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
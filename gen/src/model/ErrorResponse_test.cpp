#include "gtest/gtest.h"

#include "ErrorResponse.h"

TEST(ErrorResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ErrorResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
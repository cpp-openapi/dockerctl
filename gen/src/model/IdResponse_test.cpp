#include "gtest/gtest.h"

#include "IdResponse.h"

TEST(IdResponse, Deserialize)
{
    // TODO: generate test content
    openapi::IdResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
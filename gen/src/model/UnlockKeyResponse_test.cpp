#include "gtest/gtest.h"

#include "UnlockKeyResponse.h"

TEST(UnlockKeyResponse, Deserialize)
{
    // TODO: generate test content
    openapi::UnlockKeyResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
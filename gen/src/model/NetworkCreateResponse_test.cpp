#include "gtest/gtest.h"

#include "NetworkCreateResponse.h"

TEST(NetworkCreateResponse, Deserialize)
{
    // TODO: generate test content
    openapi::NetworkCreateResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
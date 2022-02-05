#include "gtest/gtest.h"

#include "NetworkCreateRequest.h"

TEST(NetworkCreateRequest, Deserialize)
{
    // TODO: generate test content
    openapi::NetworkCreateRequest x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
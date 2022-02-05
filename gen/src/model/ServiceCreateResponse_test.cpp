#include "gtest/gtest.h"

#include "ServiceCreateResponse.h"

TEST(ServiceCreateResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceCreateResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
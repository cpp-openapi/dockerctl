#include "gtest/gtest.h"

#include "ServiceUpdateResponse.h"

TEST(ServiceUpdateResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceUpdateResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
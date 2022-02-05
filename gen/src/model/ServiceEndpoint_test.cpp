#include "gtest/gtest.h"

#include "ServiceEndpoint.h"

TEST(ServiceEndpoint, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceEndpoint x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
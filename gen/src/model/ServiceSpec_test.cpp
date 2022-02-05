#include "gtest/gtest.h"

#include "ServiceSpec.h"

TEST(ServiceSpec, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}